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

// Function: func_0031A718
// Address: 0x31a718 - 0x31a808
void func_0031A718_0x31a718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031A718_0x31a718");
#endif

    switch (ctx->pc) {
        case 0x31a738u: goto label_31a738;
        case 0x31a740u: goto label_31a740;
        case 0x31a748u: goto label_31a748;
        case 0x31a760u: goto label_31a760;
        case 0x31a774u: goto label_31a774;
        case 0x31a784u: goto label_31a784;
        case 0x31a798u: goto label_31a798;
        case 0x31a7d8u: goto label_31a7d8;
        default: break;
    }

    ctx->pc = 0x31a718u;

    // 0x31a718: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31a718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31a71c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31a71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x31a720: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31a720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31a724: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31a724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a72c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31A72Cu;
    {
        const bool branch_taken_0x31a72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A72Cu;
        // 0x31a730: 0x3c110045  lui         $s1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a72c) {
            ctx->pc = 0x31A740u;
            goto label_31a740;
        }
    }
    ctx->pc = 0x31A734u;
    // 0x31a734: 0x0  nop
    ctx->pc = 0x31a734u;
    // NOP
label_31a738:
    // 0x31a738: 0xc0e9a88  jal         func_3A6A20
    ctx->pc = 0x31A738u;
    SET_GPR_U32(ctx, 31, 0x31A740u);
    ctx->pc = 0x3A6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A20u, 0x31A738u, 0x31A740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A740u;
label_31a740:
    // 0x31a740: 0xc0e5d8c  jal         func_397630
    ctx->pc = 0x31A740u;
    SET_GPR_U32(ctx, 31, 0x31A748u);
    ctx->pc = 0x31A744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A740u;
    // 0x31a744: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397630u, 0x31A740u, 0x31A748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A748u;
label_31a748:
    // 0x31a748: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31A748u;
    {
        const bool branch_taken_0x31a748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A748u;
        // 0x31a74c: 0x26240d80  addiu       $a0, $s1, 0xD80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a748) {
            ctx->pc = 0x31A738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a738;
        }
    }
    ctx->pc = 0x31A750u;
    // 0x31a750: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31a750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a754: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31a754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a758: 0xc0e5e78  jal         func_3979E0
    ctx->pc = 0x31A758u;
    SET_GPR_U32(ctx, 31, 0x31A760u);
    ctx->pc = 0x31A75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A758u;
    // 0x31a75c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3979E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3979E0u, 0x31A758u, 0x31A760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A760u;
label_31a760:
    // 0x31a760: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31A760u;
    {
        const bool branch_taken_0x31a760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a760) {
            ctx->pc = 0x31A764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A760u;
            // 0x31a764: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A778u;
            goto label_31a778;
        }
    }
    ctx->pc = 0x31A768u;
    // 0x31a768: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x31a768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x31a76c: 0xc0e9a88  jal         func_3A6A20
    ctx->pc = 0x31A76Cu;
    SET_GPR_U32(ctx, 31, 0x31A774u);
    ctx->pc = 0x31A770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A76Cu;
    // 0x31a770: 0x24840d90  addiu       $a0, $a0, 0xD90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A20u, 0x31A76Cu, 0x31A774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A774u;
label_31a774:
    // 0x31a774: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31a774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31a778:
    // 0x31a778: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31a778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a77c: 0xc0e5e78  jal         func_3979E0
    ctx->pc = 0x31A77Cu;
    SET_GPR_U32(ctx, 31, 0x31A784u);
    ctx->pc = 0x31A780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A77Cu;
    // 0x31a780: 0x26060380  addiu       $a2, $s0, 0x380 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3979E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3979E0u, 0x31A77Cu, 0x31A784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A784u;
label_31a784:
    // 0x31a784: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31A784u;
    {
        const bool branch_taken_0x31a784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A784u;
        // 0x31a788: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a784) {
            ctx->pc = 0x31A79Cu;
            goto label_31a79c;
        }
    }
    ctx->pc = 0x31A78Cu;
    // 0x31a78c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x31a78cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x31a790: 0xc0e9a88  jal         func_3A6A20
    ctx->pc = 0x31A790u;
    SET_GPR_U32(ctx, 31, 0x31A798u);
    ctx->pc = 0x31A794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A790u;
    // 0x31a794: 0x24840da8  addiu       $a0, $a0, 0xDA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A20u, 0x31A790u, 0x31A798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A798u;
label_31a798:
    // 0x31a798: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x31a798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_31a79c:
    // 0x31a79c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31a79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a7a0: 0xa202015a  sb          $v0, 0x15A($s0)
    ctx->pc = 0x31a7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 346), (uint8_t)GPR_U32(ctx, 2));
    // 0x31a7a4: 0x26050360  addiu       $a1, $s0, 0x360
    ctx->pc = 0x31a7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    // 0x31a7a8: 0xa20304b8  sb          $v1, 0x4B8($s0)
    ctx->pc = 0x31a7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1208), (uint8_t)GPR_U32(ctx, 3));
    // 0x31a7ac: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x31a7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x31a7b0: 0xa6000148  sh          $zero, 0x148($s0)
    ctx->pc = 0x31a7b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 328), (uint16_t)GPR_U32(ctx, 0));
    // 0x31a7b4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x31a7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31a7b8: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x31a7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
    // 0x31a7bc: 0xa600014a  sh          $zero, 0x14A($s0)
    ctx->pc = 0x31a7bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 330), (uint16_t)GPR_U32(ctx, 0));
    // 0x31a7c0: 0xa2000158  sb          $zero, 0x158($s0)
    ctx->pc = 0x31a7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 344), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a7c4: 0xa2030159  sb          $v1, 0x159($s0)
    ctx->pc = 0x31a7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 345), (uint8_t)GPR_U32(ctx, 3));
    // 0x31a7c8: 0xa202015d  sb          $v0, 0x15D($s0)
    ctx->pc = 0x31a7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 349), (uint8_t)GPR_U32(ctx, 2));
    // 0x31a7cc: 0xa202015c  sb          $v0, 0x15C($s0)
    ctx->pc = 0x31a7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 348), (uint8_t)GPR_U32(ctx, 2));
    // 0x31a7d0: 0xa202015b  sb          $v0, 0x15B($s0)
    ctx->pc = 0x31a7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 347), (uint8_t)GPR_U32(ctx, 2));
    // 0x31a7d4: 0x0  nop
    ctx->pc = 0x31a7d4u;
    // NOP
label_31a7d8:
    // 0x31a7d8: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x31a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x31a7dc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x31a7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x31a7e0: 0x0  nop
    ctx->pc = 0x31a7e0u;
    // NOP
    // 0x31a7e4: 0x0  nop
    ctx->pc = 0x31a7e4u;
    // NOP
    // 0x31a7e8: 0x1486fffb  bne         $a0, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31A7E8u;
    {
        const bool branch_taken_0x31a7e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x31A7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A7E8u;
        // 0x31a7ec: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a7e8) {
            ctx->pc = 0x31A7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a7d8;
        }
    }
    ctx->pc = 0x31A7F0u;
    // 0x31a7f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31a7f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31a7f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31a7f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a7f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x31A7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A7FCu;
        // 0x31a800: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A804u;
    // 0x31a804: 0x0  nop
    ctx->pc = 0x31a804u;
    // NOP
    ctx->pc = 0x31a808u;
}
