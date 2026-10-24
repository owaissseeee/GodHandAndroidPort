#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_001DE258
// Address: 0x1de258 - 0x1de340
void func_001DE258_0x1de258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DE258_0x1de258");
#endif

    switch (ctx->pc) {
        case 0x1de29cu: goto label_1de29c;
        case 0x1de2acu: goto label_1de2ac;
        case 0x1de2c8u: goto label_1de2c8;
        case 0x1de2e4u: goto label_1de2e4;
        case 0x1de2f4u: goto label_1de2f4;
        case 0x1de308u: goto label_1de308;
        case 0x1de318u: goto label_1de318;
        case 0x1de330u: goto label_1de330;
        default: break;
    }

    ctx->pc = 0x1de258u;

    // 0x1de258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de25c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1de25cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1de260: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1de260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1de264: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de26c: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DE26Cu;
    {
        const bool branch_taken_0x1de26c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE26Cu;
        // 0x1de270: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de26c) {
            ctx->pc = 0x1DE2BCu;
            goto label_1de2bc;
        }
    }
    ctx->pc = 0x1DE274u;
    // 0x1de274: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1de274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1de278: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE278u;
    {
        const bool branch_taken_0x1de278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de278) {
            ctx->pc = 0x1DE27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE278u;
            // 0x1de27c: 0x260404bc  addiu       $a0, $s0, 0x4BC (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1212));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE294u;
            goto label_1de294;
        }
    }
    ctx->pc = 0x1DE280u;
    // 0x1de280: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1de280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1de284: 0x10a20012  beq         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DE284u;
    {
        const bool branch_taken_0x1de284 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE284u;
        // 0x1de288: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de284) {
            ctx->pc = 0x1DE2D0u;
            goto label_1de2d0;
        }
    }
    ctx->pc = 0x1DE28Cu;
    // 0x1de28c: 0x10a20024  beq         $a1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1DE28Cu;
    {
        const bool branch_taken_0x1de28c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE28Cu;
        // 0x1de290: 0x260404bc  addiu       $a0, $s0, 0x4BC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de28c) {
            ctx->pc = 0x1DE320u;
            goto label_1de320;
        }
    }
    ctx->pc = 0x1DE294u;
label_1de294:
    // 0x1de294: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1DE294u;
    SET_GPR_U32(ctx, 31, 0x1DE29Cu);
    ctx->pc = 0x1DE298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE294u;
    // 0x1de298: 0x240500fa  addiu       $a1, $zero, 0xFA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1DE294u, 0x1DE29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE29Cu;
label_1de29c:
    // 0x1de29c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de2a0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1de2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1de2a4: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE2A4u;
    SET_GPR_U32(ctx, 31, 0x1DE2ACu);
    ctx->pc = 0x1DE2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE2A4u;
    // 0x1de2a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE2A4u, 0x1DE2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE2ACu;
label_1de2ac:
    // 0x1de2ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de2b0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1de2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1de2b4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1DE2B4u;
    {
        const bool branch_taken_0x1de2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE2B4u;
        // 0x1de2b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de2b4) {
            ctx->pc = 0x1DE300u;
            goto label_1de300;
        }
    }
    ctx->pc = 0x1DE2BCu;
label_1de2bc:
    // 0x1de2bc: 0x260404bc  addiu       $a0, $s0, 0x4BC
    ctx->pc = 0x1de2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1212));
    // 0x1de2c0: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1DE2C0u;
    SET_GPR_U32(ctx, 31, 0x1DE2C8u);
    ctx->pc = 0x1DE2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE2C0u;
    // 0x1de2c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1DE2C0u, 0x1DE2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE2C8u;
label_1de2c8:
    // 0x1de2c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE2C8u;
    {
        const bool branch_taken_0x1de2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE2C8u;
        // 0x1de2cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de2c8) {
            ctx->pc = 0x1DE2E8u;
            goto label_1de2e8;
        }
    }
    ctx->pc = 0x1DE2D0u;
label_1de2d0:
    // 0x1de2d0: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1de2d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1de2d4: 0x260404bc  addiu       $a0, $s0, 0x4BC
    ctx->pc = 0x1de2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1212));
    // 0x1de2d8: 0x240500fa  addiu       $a1, $zero, 0xFA
    ctx->pc = 0x1de2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x1de2dc: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1DE2DCu;
    SET_GPR_U32(ctx, 31, 0x1DE2E4u);
    ctx->pc = 0x1DE2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE2DCu;
    // 0x1de2e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1DE2DCu, 0x1DE2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE2E4u;
label_1de2e4:
    // 0x1de2e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1de2e8:
    // 0x1de2e8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1de2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1de2ec: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE2ECu;
    SET_GPR_U32(ctx, 31, 0x1DE2F4u);
    ctx->pc = 0x1DE2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE2ECu;
    // 0x1de2f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE2ECu, 0x1DE2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE2F4u;
label_1de2f4:
    // 0x1de2f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de2f8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1de2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1de2fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1de2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de300:
    // 0x1de300: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE300u;
    SET_GPR_U32(ctx, 31, 0x1DE308u);
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE300u, 0x1DE308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE308u;
label_1de308:
    // 0x1de308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de30c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1de30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1de310: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE310u;
    SET_GPR_U32(ctx, 31, 0x1DE318u);
    ctx->pc = 0x1DE314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE310u;
    // 0x1de314: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE310u, 0x1DE318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE318u;
label_1de318:
    // 0x1de318: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE318u;
    {
        const bool branch_taken_0x1de318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE318u;
        // 0x1de31c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de318) {
            ctx->pc = 0x1DE334u;
            goto label_1de334;
        }
    }
    ctx->pc = 0x1DE320u;
label_1de320:
    // 0x1de320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de324: 0x240600fa  addiu       $a2, $zero, 0xFA
    ctx->pc = 0x1de324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x1de328: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1DE328u;
    SET_GPR_U32(ctx, 31, 0x1DE330u);
    ctx->pc = 0x1DE32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE328u;
    // 0x1de32c: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1DE328u, 0x1DE330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE330u;
label_1de330:
    // 0x1de330: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1de330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1de334:
    // 0x1de334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de338: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE338u;
        // 0x1de33c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE340u;
}
