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

// Function: _quantMatrixExtension
// Address: 0x3a0908 - 0x3a09f0
void _quantMatrixExtension_0x3a0908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_quantMatrixExtension_0x3a0908");
#endif

    switch (ctx->pc) {
        case 0x3a0920u: goto label_3a0920;
        case 0x3a0930u: goto label_3a0930;
        case 0x3a0954u: goto label_3a0954;
        case 0x3a0960u: goto label_3a0960;
        case 0x3a0970u: goto label_3a0970;
        case 0x3a0998u: goto label_3a0998;
        case 0x3a09a4u: goto label_3a09a4;
        case 0x3a09b8u: goto label_3a09b8;
        case 0x3a09c4u: goto label_3a09c4;
        default: break;
    }

    ctx->pc = 0x3a0908u;

    // 0x3a0908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a0908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a090c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a090cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a0910: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a0910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a0914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a0914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a0918: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0918u;
    SET_GPR_U32(ctx, 31, 0x3A0920u);
    ctx->pc = 0x3A091Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0918u;
    // 0x3a091c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0918u, 0x3A0920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0920u;
label_3a0920:
    // 0x3a0920: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A0920u;
    {
        const bool branch_taken_0x3a0920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0920u;
        // 0x3a0924: 0xae020850  sw          $v0, 0x850($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0920) {
            ctx->pc = 0x3A0954u;
            goto label_3a0954;
        }
    }
    ctx->pc = 0x3A0928u;
    // 0x3a0928: 0xc0e837a  jal         func_3A0DE8
    ctx->pc = 0x3A0928u;
    SET_GPR_U32(ctx, 31, 0x3A0930u);
    ctx->pc = 0x3A092Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0928u;
    // 0x3a092c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0DE8u, 0x3A0928u, 0x3A0930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0930u;
label_3a0930:
    // 0x3a0930: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3a0930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3a0934: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x3a0934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x3a0938: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3a0938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3a093c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a093cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a0940: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3a0940u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x3a0944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0948: 0xae03082c  sw          $v1, 0x82C($s0)
    ctx->pc = 0x3a0948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
    // 0x3a094c: 0xc0e837a  jal         func_3A0DE8
    ctx->pc = 0x3A094Cu;
    SET_GPR_U32(ctx, 31, 0x3A0954u);
    ctx->pc = 0x3A0950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A094Cu;
    // 0x3a0950: 0xae050828  sw          $a1, 0x828($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0DE8u, 0x3A094Cu, 0x3A0954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0954u;
label_3a0954:
    // 0x3a0954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0958: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0958u;
    SET_GPR_U32(ctx, 31, 0x3A0960u);
    ctx->pc = 0x3A095Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0958u;
    // 0x3a095c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0958u, 0x3A0960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0960u;
label_3a0960:
    // 0x3a0960: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A0960u;
    {
        const bool branch_taken_0x3a0960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0960u;
        // 0x3a0964: 0xae020854  sw          $v0, 0x854($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0960) {
            ctx->pc = 0x3A0998u;
            goto label_3a0998;
        }
    }
    ctx->pc = 0x3A0968u;
    // 0x3a0968: 0xc0e837a  jal         func_3A0DE8
    ctx->pc = 0x3A0968u;
    SET_GPR_U32(ctx, 31, 0x3A0970u);
    ctx->pc = 0x3A096Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0968u;
    // 0x3a096c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0DE8u, 0x3A0968u, 0x3A0970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0970u;
label_3a0970:
    // 0x3a0970: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3a0970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3a0974: 0x3c035800  lui         $v1, 0x5800
    ctx->pc = 0x3a0974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22528 << 16));
    // 0x3a0978: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3a0978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3a097c: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x3a097cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x3a0980: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3a0980u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x3a0984: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a0984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a0988: 0xae04082c  sw          $a0, 0x82C($s0)
    ctx->pc = 0x3a0988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 4));
    // 0x3a098c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a098cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0990: 0xc0e837a  jal         func_3A0DE8
    ctx->pc = 0x3A0990u;
    SET_GPR_U32(ctx, 31, 0x3A0998u);
    ctx->pc = 0x3A0994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0990u;
    // 0x3a0994: 0xae050828  sw          $a1, 0x828($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0DE8u, 0x3A0990u, 0x3A0998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0998u;
label_3a0998:
    // 0x3a0998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a099c: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A099Cu;
    SET_GPR_U32(ctx, 31, 0x3A09A4u);
    ctx->pc = 0x3A09A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A099Cu;
    // 0x3a09a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A099Cu, 0x3A09A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A09A4u;
label_3a09a4:
    // 0x3a09a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A09A4u;
    {
        const bool branch_taken_0x3a09a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A09A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A09A4u;
        // 0x3a09a8: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a09a4) {
            ctx->pc = 0x3A09B8u;
            goto label_3a09b8;
        }
    }
    ctx->pc = 0x3A09ACu;
    // 0x3a09ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a09acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a09b0: 0xc0e70e4  jal         func_39C390
    ctx->pc = 0x3A09B0u;
    SET_GPR_U32(ctx, 31, 0x3A09B8u);
    ctx->pc = 0x3A09B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A09B0u;
    // 0x3a09b4: 0x24a5e858  addiu       $a1, $a1, -0x17A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C390u, 0x3A09B0u, 0x3A09B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A09B8u;
label_3a09b8:
    // 0x3a09b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a09b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a09bc: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A09BCu;
    SET_GPR_U32(ctx, 31, 0x3A09C4u);
    ctx->pc = 0x3A09C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A09BCu;
    // 0x3a09c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A09BCu, 0x3A09C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A09C4u;
label_3a09c4:
    // 0x3a09c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A09C4u;
    {
        const bool branch_taken_0x3a09c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A09C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A09C4u;
        // 0x3a09c8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a09c4) {
            ctx->pc = 0x3A09E4u;
            goto label_3a09e4;
        }
    }
    ctx->pc = 0x3A09CCu;
    // 0x3a09cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a09ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a09d0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x3a09d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x3a09d4: 0x24a5e880  addiu       $a1, $a1, -0x1780
    ctx->pc = 0x3a09d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
    // 0x3a09d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a09d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a09dc: 0x80e70e4  j           func_39C390
    ctx->pc = 0x3A09DCu;
    ctx->pc = 0x3A09E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A09DCu;
    // 0x3a09e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C390u, 0x3A09DCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3A09E4u;
label_3a09e4:
    // 0x3a09e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a09e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a09e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A09E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A09ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A09E8u;
        // 0x3a09ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A09E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A09F0u;
}
