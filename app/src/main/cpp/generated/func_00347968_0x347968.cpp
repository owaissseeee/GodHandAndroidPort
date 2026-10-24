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

// Function: func_00347968
// Address: 0x347968 - 0x347a40
void func_00347968_0x347968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00347968_0x347968");
#endif

    switch (ctx->pc) {
        case 0x347988u: goto label_347988;
        case 0x3479e8u: goto label_3479e8;
        case 0x3479f0u: goto label_3479f0;
        case 0x3479fcu: goto label_3479fc;
        case 0x347a08u: goto label_347a08;
        case 0x347a10u: goto label_347a10;
        default: break;
    }

    ctx->pc = 0x347968u;

    // 0x347968: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x347968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34796c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34796cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x347970: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x347970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347974: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x347974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x347978: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x347978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34797c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34797cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x347980: 0xc0d1a0a  jal         func_346828
    ctx->pc = 0x347980u;
    SET_GPR_U32(ctx, 31, 0x347988u);
    ctx->pc = 0x347984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347980u;
    // 0x347984: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346828u, 0x347980u, 0x347988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347988u;
label_347988:
    // 0x347988: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x347988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34798c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34798cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347990: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x347990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x347994: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x347994u;
    {
        const bool branch_taken_0x347994 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x347998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347994u;
        // 0x347998: 0x24848f78  addiu       $a0, $a0, -0x7088 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347994) {
            ctx->pc = 0x3479B8u;
            goto label_3479b8;
        }
    }
    ctx->pc = 0x34799Cu;
    // 0x34799c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34799cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3479a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3479a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3479a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3479a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3479a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3479a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3479ac: 0x80d22f8  j           func_348BE0
    ctx->pc = 0x3479ACu;
    ctx->pc = 0x3479B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3479ACu;
    // 0x3479b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x3479ACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3479B4u;
    // 0x3479b4: 0x0  nop
    ctx->pc = 0x3479b4u;
    // NOP
label_3479b8:
    // 0x3479b8: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3479B8u;
    {
        const bool branch_taken_0x3479b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3479BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3479B8u;
        // 0x3479bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3479b8) {
            ctx->pc = 0x3479E0u;
            goto label_3479e0;
        }
    }
    ctx->pc = 0x3479C0u;
    // 0x3479c0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3479c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3479c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3479c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3479c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3479c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3479cc: 0x24848fa8  addiu       $a0, $a0, -0x7058
    ctx->pc = 0x3479ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938536));
    // 0x3479d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3479d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3479d4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3479d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3479d8: 0x80d22f8  j           func_348BE0
    ctx->pc = 0x3479D8u;
    ctx->pc = 0x3479DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3479D8u;
    // 0x3479dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x3479D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3479E0u;
label_3479e0:
    // 0x3479e0: 0xc0d186c  jal         func_3461B0
    ctx->pc = 0x3479E0u;
    SET_GPR_U32(ctx, 31, 0x3479E8u);
    ctx->pc = 0x3479E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3479E0u;
    // 0x3479e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3461B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3461B0u, 0x3479E0u, 0x3479E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3479E8u;
label_3479e8:
    // 0x3479e8: 0xc0cd654  jal         func_335950
    ctx->pc = 0x3479E8u;
    SET_GPR_U32(ctx, 31, 0x3479F0u);
    ctx->pc = 0x3479ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3479E8u;
    // 0x3479ec: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335950u, 0x3479E8u, 0x3479F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3479F0u;
label_3479f0:
    // 0x3479f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3479f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3479f4: 0xc0d1dea  jal         func_3477A8
    ctx->pc = 0x3479F4u;
    SET_GPR_U32(ctx, 31, 0x3479FCu);
    ctx->pc = 0x3479F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3479F4u;
    // 0x3479f8: 0x8e0501a4  lw          $a1, 0x1A4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3477A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3477A8u, 0x3479F4u, 0x3479FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3479FCu;
label_3479fc:
    // 0x3479fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3479fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347a00: 0xc0d1e42  jal         func_347908
    ctx->pc = 0x347A00u;
    SET_GPR_U32(ctx, 31, 0x347A08u);
    ctx->pc = 0x347A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347A00u;
    // 0x347a04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347908u, 0x347A00u, 0x347A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347A08u;
label_347a08:
    // 0x347a08: 0xc0d1e1a  jal         func_347868
    ctx->pc = 0x347A08u;
    SET_GPR_U32(ctx, 31, 0x347A10u);
    ctx->pc = 0x347A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347A08u;
    // 0x347a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347868u, 0x347A08u, 0x347A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347A10u;
label_347a10:
    // 0x347a10: 0xae1102e4  sw          $s1, 0x2E4($s0)
    ctx->pc = 0x347a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 17));
    // 0x347a14: 0x8e0202e0  lw          $v0, 0x2E0($s0)
    ctx->pc = 0x347a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x347a18: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x347A18u;
    {
        const bool branch_taken_0x347a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347A18u;
        // 0x347a1c: 0xae1102dc  sw          $s1, 0x2DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347a18) {
            ctx->pc = 0x347A24u;
            goto label_347a24;
        }
    }
    ctx->pc = 0x347A20u;
    // 0x347a20: 0xae1102e8  sw          $s1, 0x2E8($s0)
    ctx->pc = 0x347a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 17));
label_347a24:
    // 0x347a24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x347a24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347a28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x347a28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347a2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x347a2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347a30: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x347a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x347a34: 0x3e00008  jr          $ra
    ctx->pc = 0x347A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347A34u;
        // 0x347a38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347A3Cu;
    // 0x347a3c: 0x0  nop
    ctx->pc = 0x347a3cu;
    // NOP
    ctx->pc = 0x347a40u;
}
