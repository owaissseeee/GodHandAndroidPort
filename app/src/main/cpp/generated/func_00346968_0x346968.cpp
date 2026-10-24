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

// Function: func_00346968
// Address: 0x346968 - 0x346a48
void func_00346968_0x346968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00346968_0x346968");
#endif

    switch (ctx->pc) {
        case 0x3469a0u: goto label_3469a0;
        case 0x3469e4u: goto label_3469e4;
        case 0x3469f4u: goto label_3469f4;
        case 0x346a00u: goto label_346a00;
        default: break;
    }

    ctx->pc = 0x346968u;

    // 0x346968: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x346968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34696c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34696cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x346970: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x346970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346974: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x346974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x346978: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x346978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34697c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34697cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x346980: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x346980u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346984: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x346984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x346988: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x346988u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34698c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x34698cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x346990: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x346990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x346994: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x346994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x346998: 0xc0d1a0a  jal         func_346828
    ctx->pc = 0x346998u;
    SET_GPR_U32(ctx, 31, 0x3469A0u);
    ctx->pc = 0x34699Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346998u;
    // 0x34699c: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346828u, 0x346998u, 0x3469A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3469A0u;
label_3469a0:
    // 0x3469a0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3469a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3469a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3469a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3469a8: 0x12900009  beq         $s4, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3469A8u;
    {
        const bool branch_taken_0x3469a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 16));
        ctx->pc = 0x3469ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3469A8u;
        // 0x3469ac: 0x248485d0  addiu       $a0, $a0, -0x7A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3469a8) {
            ctx->pc = 0x3469D0u;
            goto label_3469d0;
        }
    }
    ctx->pc = 0x3469B0u;
    // 0x3469b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3469b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3469b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3469b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3469b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3469b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3469bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3469bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3469c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3469c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3469c4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3469c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3469c8: 0x80d22f8  j           func_348BE0
    ctx->pc = 0x3469C8u;
    ctx->pc = 0x3469CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3469C8u;
    // 0x3469cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x3469C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3469D0u;
label_3469d0:
    // 0x3469d0: 0x8e64003c  lw          $a0, 0x3C($s3)
    ctx->pc = 0x3469d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x3469d4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x3469D4u;
    {
        const bool branch_taken_0x3469d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3469D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3469D4u;
        // 0x3469d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3469d4) {
            ctx->pc = 0x346A14u;
            goto label_346a14;
        }
    }
    ctx->pc = 0x3469DCu;
    // 0x3469dc: 0xc0d6a94  jal         func_35AA50
    ctx->pc = 0x3469DCu;
    SET_GPR_U32(ctx, 31, 0x3469E4u);
    ctx->pc = 0x3469E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3469DCu;
    // 0x3469e0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA50u, 0x3469DCu, 0x3469E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3469E4u;
label_3469e4:
    // 0x3469e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3469E4u;
    {
        const bool branch_taken_0x3469e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3469E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3469E4u;
        // 0x3469e8: 0x2404fecb  addiu       $a0, $zero, -0x135 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966987));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3469e4) {
            ctx->pc = 0x346A00u;
            goto label_346a00;
        }
    }
    ctx->pc = 0x3469ECu;
    // 0x3469ec: 0xc0d15d4  jal         func_345750
    ctx->pc = 0x3469ECu;
    SET_GPR_U32(ctx, 31, 0x3469F4u);
    ctx->pc = 0x345750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345750u, 0x3469ECu, 0x3469F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3469F4u;
label_3469f4:
    // 0x3469f4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3469f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3469f8: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x3469F8u;
    SET_GPR_U32(ctx, 31, 0x346A00u);
    ctx->pc = 0x3469FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3469F8u;
    // 0x3469fc: 0x24848600  addiu       $a0, $a0, -0x7A00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x3469F8u, 0x346A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346A00u;
label_346a00:
    // 0x346a00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x346a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x346a04: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x346A04u;
    {
        const bool branch_taken_0x346a04 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x346A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346A04u;
        // 0x346a08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346a04) {
            ctx->pc = 0x346A18u;
            goto label_346a18;
        }
    }
    ctx->pc = 0x346A0Cu;
    // 0x346a0c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x346a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x346a10: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x346a10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_346a14:
    // 0x346a14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x346a14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_346a18:
    // 0x346a18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x346a18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x346a1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x346a1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x346a20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x346a20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x346a24: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x346a24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x346a28: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x346a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x346a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x346A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346A2Cu;
        // 0x346a30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346A34u;
    // 0x346a34: 0x0  nop
    ctx->pc = 0x346a34u;
    // NOP
    // 0x346a38: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x346a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x346a3c: 0x0  nop
    ctx->pc = 0x346a3cu;
    // NOP
    // 0x346a40: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x346a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x346a44: 0x0  nop
    ctx->pc = 0x346a44u;
    // NOP
    ctx->pc = 0x346a48u;
}
