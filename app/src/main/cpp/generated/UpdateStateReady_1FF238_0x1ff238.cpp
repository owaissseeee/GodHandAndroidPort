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

// Function: UpdateStateReady_1FF238
// Address: 0x1ff238 - 0x1ff2e0
void UpdateStateReady_1FF238_0x1ff238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateStateReady_1FF238_0x1ff238");
#endif

    switch (ctx->pc) {
        case 0x1ff264u: goto label_1ff264;
        case 0x1ff2b4u: goto label_1ff2b4;
        default: break;
    }

    ctx->pc = 0x1ff238u;

    // 0x1ff238: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff23c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ff23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ff240: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff244: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ff244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff248: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ff248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ff24c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ff24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ff250: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FF250u;
    {
        const bool branch_taken_0x1ff250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF250u;
        // 0x1ff254: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff250) {
            ctx->pc = 0x1FF29Cu;
            goto label_1ff29c;
        }
    }
    ctx->pc = 0x1FF258u;
    // 0x1ff258: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1ff258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1ff25c: 0xc080426  jal         func_201098
    ctx->pc = 0x1FF25Cu;
    SET_GPR_U32(ctx, 31, 0x1FF264u);
    ctx->pc = 0x1FF260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF25Cu;
    // 0x1ff260: 0x24843f20  addiu       $a0, $a0, 0x3F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201098u, 0x1FF25Cu, 0x1FF264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF264u;
label_1ff264:
    // 0x1ff264: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ff264u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff26c: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FF26Cu;
    {
        const bool branch_taken_0x1ff26c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FF270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF26Cu;
        // 0x1ff270: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff26c) {
            ctx->pc = 0x1FF2CCu;
            goto label_1ff2cc;
        }
    }
    ctx->pc = 0x1FF274u;
    // 0x1ff274: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF274u;
    {
        const bool branch_taken_0x1ff274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF274u;
        // 0x1ff278: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff274) {
            ctx->pc = 0x1FF28Cu;
            goto label_1ff28c;
        }
    }
    ctx->pc = 0x1FF27Cu;
    // 0x1ff27c: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FF27Cu;
    {
        const bool branch_taken_0x1ff27c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FF280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF27Cu;
        // 0x1ff280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff27c) {
            ctx->pc = 0x1FF2CCu;
            goto label_1ff2cc;
        }
    }
    ctx->pc = 0x1FF284u;
    // 0x1ff284: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF284u;
    {
        const bool branch_taken_0x1ff284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF284u;
        // 0x1ff288: 0x8e030020  lw          $v1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff284) {
            ctx->pc = 0x1FF2A0u;
            goto label_1ff2a0;
        }
    }
    ctx->pc = 0x1FF28Cu;
label_1ff28c:
    // 0x1ff28c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ff28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ff290: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1ff290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1ff294: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ff294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ff298: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1ff298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1ff29c:
    // 0x1ff29c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1ff29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ff2a0:
    // 0x1ff2a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ff2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ff2a4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FF2A4u;
    {
        const bool branch_taken_0x1ff2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FF2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2A4u;
        // 0x1ff2a8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff2a4) {
            ctx->pc = 0x1FF2C4u;
            goto label_1ff2c4;
        }
    }
    ctx->pc = 0x1FF2ACu;
    // 0x1ff2ac: 0xc07fd50  jal         func_1FF540
    ctx->pc = 0x1FF2ACu;
    SET_GPR_U32(ctx, 31, 0x1FF2B4u);
    ctx->pc = 0x1FF2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF2ACu;
    // 0x1ff2b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF540u, 0x1FF2ACu, 0x1FF2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF2B4u;
label_1ff2b4:
    // 0x1ff2b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF2B4u;
    {
        const bool branch_taken_0x1ff2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2B4u;
        // 0x1ff2b8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff2b4) {
            ctx->pc = 0x1FF2C4u;
            goto label_1ff2c4;
        }
    }
    ctx->pc = 0x1FF2BCu;
    // 0x1ff2bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF2BCu;
    {
        const bool branch_taken_0x1ff2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2BCu;
        // 0x1ff2c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff2bc) {
            ctx->pc = 0x1FF2CCu;
            goto label_1ff2cc;
        }
    }
    ctx->pc = 0x1FF2C4u;
label_1ff2c4:
    // 0x1ff2c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff2c8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1ff2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1ff2cc:
    // 0x1ff2cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ff2ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff2d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2D4u;
        // 0x1ff2d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF2D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF2DCu;
    // 0x1ff2dc: 0x0  nop
    ctx->pc = 0x1ff2dcu;
    // NOP
    ctx->pc = 0x1ff2e0u;
}
