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

// Function: func_0032BF90
// Address: 0x32bf90 - 0x32c048
void func_0032BF90_0x32bf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032BF90_0x32bf90");
#endif

    switch (ctx->pc) {
        case 0x32bfbcu: goto label_32bfbc;
        case 0x32bfc8u: goto label_32bfc8;
        case 0x32bfd4u: goto label_32bfd4;
        case 0x32bfe0u: goto label_32bfe0;
        case 0x32bff0u: goto label_32bff0;
        case 0x32c000u: goto label_32c000;
        case 0x32c00cu: goto label_32c00c;
        case 0x32c018u: goto label_32c018;
        default: break;
    }

    ctx->pc = 0x32bf90u;

    // 0x32bf90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32bf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32bf94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32bf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32bf98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32bf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32bf9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32bf9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bfa0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32bfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x32bfa4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x32bfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x32bfa8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x32bfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x32bfac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32bfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32bfb0: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x32bfb0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x32bfb4: 0xc0c9e06  jal         func_327818
    ctx->pc = 0x32BFB4u;
    SET_GPR_U32(ctx, 31, 0x32BFBCu);
    ctx->pc = 0x32BFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BFB4u;
    // 0x32bfb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327818u, 0x32BFB4u, 0x32BFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BFBCu;
label_32bfbc:
    // 0x32bfbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32bfbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bfc0: 0xc0c9e0c  jal         func_327830
    ctx->pc = 0x32BFC0u;
    SET_GPR_U32(ctx, 31, 0x32BFC8u);
    ctx->pc = 0x32BFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BFC0u;
    // 0x32bfc4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327830u, 0x32BFC0u, 0x32BFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BFC8u;
label_32bfc8:
    // 0x32bfc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32bfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bfcc: 0xc0c9e18  jal         func_327860
    ctx->pc = 0x32BFCCu;
    SET_GPR_U32(ctx, 31, 0x32BFD4u);
    ctx->pc = 0x32BFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BFCCu;
    // 0x32bfd0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327860u, 0x32BFCCu, 0x32BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BFD4u;
label_32bfd4:
    // 0x32bfd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32bfd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bfd8: 0xc0c9e5c  jal         func_327970
    ctx->pc = 0x32BFD8u;
    SET_GPR_U32(ctx, 31, 0x32BFE0u);
    ctx->pc = 0x32BFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BFD8u;
    // 0x32bfdc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327970u, 0x32BFD8u, 0x32BFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BFE0u;
label_32bfe0:
    // 0x32bfe0: 0x2138023  subu        $s0, $s0, $s3
    ctx->pc = 0x32bfe0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x32bfe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32bfe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bfe8: 0xc0c9dd8  jal         func_327760
    ctx->pc = 0x32BFE8u;
    SET_GPR_U32(ctx, 31, 0x32BFF0u);
    ctx->pc = 0x32BFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BFE8u;
    // 0x32bfec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327760u, 0x32BFE8u, 0x32BFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BFF0u;
label_32bff0:
    // 0x32bff0: 0xae500090  sw          $s0, 0x90($s2)
    ctx->pc = 0x32bff0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 16));
    // 0x32bff4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32bff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bff8: 0xc0c9dd6  jal         func_327758
    ctx->pc = 0x32BFF8u;
    SET_GPR_U32(ctx, 31, 0x32C000u);
    ctx->pc = 0x32BFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BFF8u;
    // 0x32bffc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327758u, 0x32BFF8u, 0x32C000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C000u;
label_32c000:
    // 0x32c000: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c004: 0xc0c9dda  jal         func_327768
    ctx->pc = 0x32C004u;
    SET_GPR_U32(ctx, 31, 0x32C00Cu);
    ctx->pc = 0x32C008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C004u;
    // 0x32c008: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327768u, 0x32C004u, 0x32C00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C00Cu;
label_32c00c:
    // 0x32c00c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c010: 0xc0c9dc6  jal         func_327718
    ctx->pc = 0x32C010u;
    SET_GPR_U32(ctx, 31, 0x32C018u);
    ctx->pc = 0x32C014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C010u;
    // 0x32c014: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327718u, 0x32C010u, 0x32C018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C018u;
label_32c018:
    // 0x32c018: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x32c018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x32c01c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c020: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32c020u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32c024: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32c024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c028: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32c028u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c02c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32c02cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c030: 0x24a5c048  addiu       $a1, $a1, -0x3FB8
    ctx->pc = 0x32c030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950984));
    // 0x32c034: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32c034u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32c038: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x32c038u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32c03c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x32c03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32c040: 0x80c9dd2  j           func_327748
    ctx->pc = 0x32C040u;
    ctx->pc = 0x32C044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C040u;
    // 0x32c044: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327748u, 0x32C040u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32C048u;
}
