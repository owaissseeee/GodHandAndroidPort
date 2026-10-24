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

// Function: GoldPanel_update
// Address: 0x1632e8 - 0x1633a0
void GoldPanel_update_0x1632e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GoldPanel_update_0x1632e8");
#endif

    switch (ctx->pc) {
        case 0x163304u: goto label_163304;
        case 0x163364u: goto label_163364;
        case 0x163374u: goto label_163374;
        case 0x163384u: goto label_163384;
        case 0x16338cu: goto label_16338c;
        default: break;
    }

    ctx->pc = 0x1632e8u;

    // 0x1632e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1632e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1632ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1632ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1632f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1632f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1632f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1632f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1632f8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1632f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1632fc: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x1632FCu;
    SET_GPR_U32(ctx, 31, 0x163304u);
    ctx->pc = 0x163300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1632FCu;
    // 0x163300: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1632FCu, 0x163304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163304u;
label_163304:
    // 0x163304: 0x8e0500e0  lw          $a1, 0xE0($s0)
    ctx->pc = 0x163304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x163308: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x163308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x16330c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x16330cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x163310: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x163310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163314: 0xaca20084  sw          $v0, 0x84($a1)
    ctx->pc = 0x163314u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 2));
    // 0x163318: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x163318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x16331c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16331cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x163320: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x163320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x163324: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x163324u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x163328: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x163328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x16332c: 0x1066000f  beq         $v1, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x16332Cu;
    {
        const bool branch_taken_0x16332c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x163330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16332Cu;
        // 0x163330: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16332c) {
            ctx->pc = 0x16336Cu;
            goto label_16336c;
        }
    }
    ctx->pc = 0x163334u;
    // 0x163334: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163334u;
    {
        const bool branch_taken_0x163334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163334u;
        // 0x163338: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163334) {
            ctx->pc = 0x16334Cu;
            goto label_16334c;
        }
    }
    ctx->pc = 0x16333Cu;
    // 0x16333c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x16333Cu;
    {
        const bool branch_taken_0x16333c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16333c) {
            ctx->pc = 0x16335Cu;
            goto label_16335c;
        }
    }
    ctx->pc = 0x163344u;
    // 0x163344: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x163344u;
    {
        const bool branch_taken_0x163344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163344) {
            ctx->pc = 0x163384u;
            goto label_163384;
        }
    }
    ctx->pc = 0x16334Cu;
label_16334c:
    // 0x16334c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x16334Cu;
    {
        const bool branch_taken_0x16334c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16334c) {
            ctx->pc = 0x163384u;
            goto label_163384;
        }
    }
    ctx->pc = 0x163354u;
    // 0x163354: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x163354u;
    {
        const bool branch_taken_0x163354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163354) {
            ctx->pc = 0x16337Cu;
            goto label_16337c;
        }
    }
    ctx->pc = 0x16335Cu;
label_16335c:
    // 0x16335c: 0xc058ce8  jal         func_1633A0
    ctx->pc = 0x16335Cu;
    SET_GPR_U32(ctx, 31, 0x163364u);
    ctx->pc = 0x163360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16335Cu;
    // 0x163360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1633A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1633A0u, 0x16335Cu, 0x163364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163364u;
label_163364:
    // 0x163364: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x163364u;
    {
        const bool branch_taken_0x163364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163364) {
            ctx->pc = 0x163384u;
            goto label_163384;
        }
    }
    ctx->pc = 0x16336Cu;
label_16336c:
    // 0x16336c: 0xc058d38  jal         func_1634E0
    ctx->pc = 0x16336Cu;
    SET_GPR_U32(ctx, 31, 0x163374u);
    ctx->pc = 0x163370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16336Cu;
    // 0x163370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1634E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1634E0u, 0x16336Cu, 0x163374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163374u;
label_163374:
    // 0x163374: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163374u;
    {
        const bool branch_taken_0x163374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163374) {
            ctx->pc = 0x163384u;
            goto label_163384;
        }
    }
    ctx->pc = 0x16337Cu;
label_16337c:
    // 0x16337c: 0xc058fc0  jal         func_163F00
    ctx->pc = 0x16337Cu;
    SET_GPR_U32(ctx, 31, 0x163384u);
    ctx->pc = 0x163380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16337Cu;
    // 0x163380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163F00u, 0x16337Cu, 0x163384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163384u;
label_163384:
    // 0x163384: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x163384u;
    SET_GPR_U32(ctx, 31, 0x16338Cu);
    ctx->pc = 0x163388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163384u;
    // 0x163388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x163384u, 0x16338Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16338Cu;
label_16338c:
    // 0x16338c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16338cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x163390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163394: 0x3e00008  jr          $ra
    ctx->pc = 0x163394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163394u;
        // 0x163398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16339Cu;
    // 0x16339c: 0x0  nop
    ctx->pc = 0x16339cu;
    // NOP
    ctx->pc = 0x1633a0u;
}
