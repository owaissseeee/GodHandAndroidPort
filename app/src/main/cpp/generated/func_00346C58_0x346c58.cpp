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

// Function: func_00346C58
// Address: 0x346c58 - 0x346d08
void func_00346C58_0x346c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00346C58_0x346c58");
#endif

    switch (ctx->pc) {
        case 0x346c80u: goto label_346c80;
        case 0x346c90u: goto label_346c90;
        case 0x346c9cu: goto label_346c9c;
        case 0x346cacu: goto label_346cac;
        case 0x346cb8u: goto label_346cb8;
        case 0x346cd4u: goto label_346cd4;
        case 0x346ce4u: goto label_346ce4;
        default: break;
    }

    ctx->pc = 0x346c58u;

    // 0x346c58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x346c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x346c5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x346c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x346c60: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x346c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346c64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x346c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x346c68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x346c68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346c6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x346c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x346c70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x346c70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346c74: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x346c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x346c78: 0xc0d1b9c  jal         func_346E70
    ctx->pc = 0x346C78u;
    SET_GPR_U32(ctx, 31, 0x346C80u);
    ctx->pc = 0x346C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346C78u;
    // 0x346c7c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346E70u, 0x346C78u, 0x346C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346C80u;
label_346c80:
    // 0x346c80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346c84: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x346c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x346c88: 0xc0d1bb4  jal         func_346ED0
    ctx->pc = 0x346C88u;
    SET_GPR_U32(ctx, 31, 0x346C90u);
    ctx->pc = 0x346C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346C88u;
    // 0x346c8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346ED0u, 0x346C88u, 0x346C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346C90u;
label_346c90:
    // 0x346c90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346c94: 0xc0d1be8  jal         func_346FA0
    ctx->pc = 0x346C94u;
    SET_GPR_U32(ctx, 31, 0x346C9Cu);
    ctx->pc = 0x346C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346C94u;
    // 0x346c98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346FA0u, 0x346C94u, 0x346C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346C9Cu;
label_346c9c:
    // 0x346c9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x346c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346ca0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x346ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346ca4: 0xc0d1bf0  jal         func_346FC0
    ctx->pc = 0x346CA4u;
    SET_GPR_U32(ctx, 31, 0x346CACu);
    ctx->pc = 0x346CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346CA4u;
    // 0x346ca8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346FC0u, 0x346CA4u, 0x346CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346CACu;
label_346cac:
    // 0x346cac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x346cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346cb0: 0xc0d1c02  jal         func_347008
    ctx->pc = 0x346CB0u;
    SET_GPR_U32(ctx, 31, 0x346CB8u);
    ctx->pc = 0x346CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346CB0u;
    // 0x346cb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347008u, 0x346CB0u, 0x346CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346CB8u;
label_346cb8:
    // 0x346cb8: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x346cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x346cbc: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x346cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x346cc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x346cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346cc4: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x346cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x346cc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x346cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346ccc: 0xc0d1b60  jal         func_346D80
    ctx->pc = 0x346CCCu;
    SET_GPR_U32(ctx, 31, 0x346CD4u);
    ctx->pc = 0x346CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346CCCu;
    // 0x346cd0: 0xae03008c  sw          $v1, 0x8C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346D80u, 0x346CCCu, 0x346CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346CD4u;
label_346cd4:
    // 0x346cd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x346cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346cd8: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x346cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x346cdc: 0xc0d1b88  jal         func_346E20
    ctx->pc = 0x346CDCu;
    SET_GPR_U32(ctx, 31, 0x346CE4u);
    ctx->pc = 0x346CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346CDCu;
    // 0x346ce0: 0x8e250030  lw          $a1, 0x30($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346E20u, 0x346CDCu, 0x346CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346CE4u;
label_346ce4:
    // 0x346ce4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x346ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346ce8: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x346ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x346cec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x346cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346cf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x346cf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346cf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x346cf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x346cf8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x346cf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x346cfc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x346cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x346d00: 0x80d1b42  j           func_346D08
    ctx->pc = 0x346D00u;
    ctx->pc = 0x346D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346D00u;
    // 0x346d04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346D08u, 0x346D00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x346D08u;
}
