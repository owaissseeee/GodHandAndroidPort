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

// Function: StartThread
// Address: 0x3b0ba8 - 0x3b0d20
void StartThread_0x3b0ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StartThread_0x3b0ba8");
#endif

    switch (ctx->pc) {
        case 0x3b0bc8u: goto label_3b0bc8;
        case 0x3b0bd8u: goto label_3b0bd8;
        case 0x3b0be8u: goto label_3b0be8;
        case 0x3b0bfcu: goto label_3b0bfc;
        case 0x3b0c18u: goto label_3b0c18;
        case 0x3b0cfcu: goto label_3b0cfc;
        case 0x3b0d08u: goto label_3b0d08;
        default: break;
    }

    ctx->pc = 0x3b0ba8u;

    // 0x3b0ba8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3b0ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3b0bac: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x3b0bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x3b0bb0: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x3b0bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x3b0bb4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3b0bb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0bb8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3b0bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3b0bbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b0bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0bc0: 0xc0ec1b2  jal         func_3B06C8
    ctx->pc = 0x3B0BC0u;
    SET_GPR_U32(ctx, 31, 0x3B0BC8u);
    ctx->pc = 0x3B0BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0BC0u;
    // 0x3b0bc4: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B06C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B06C8u, 0x3B0BC0u, 0x3B0BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0BC8u;
label_3b0bc8:
    // 0x3b0bc8: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x3B0BC8u;
    {
        const bool branch_taken_0x3b0bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0BC8u;
        // 0x3b0bcc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0bc8) {
            ctx->pc = 0x3B0D08u;
            goto label_3b0d08;
        }
    }
    ctx->pc = 0x3B0BD0u;
    // 0x3b0bd0: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B0BD0u;
    SET_GPR_U32(ctx, 31, 0x3B0BD8u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B0BD0u, 0x3B0BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0BD8u;
label_3b0bd8:
    // 0x3b0bd8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3B0BD8u;
    {
        const bool branch_taken_0x3b0bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0BD8u;
        // 0x3b0bdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0bd8) {
            ctx->pc = 0x3B0C18u;
            goto label_3b0c18;
        }
    }
    ctx->pc = 0x3B0BE0u;
    // 0x3b0be0: 0xc0ebee8  jal         func_3AFBA0
    ctx->pc = 0x3B0BE0u;
    SET_GPR_U32(ctx, 31, 0x3B0BE8u);
    ctx->pc = 0x3B0BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0BE0u;
    // 0x3b0be4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFBA0u, 0x3B0BE0u, 0x3B0BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0BE8u;
label_3b0be8:
    // 0x3b0be8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b0be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0bec: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B0BECu;
    {
        const bool branch_taken_0x3b0bec = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x3B0BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0BECu;
        // 0x3b0bf0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0bec) {
            ctx->pc = 0x3B0C04u;
            goto label_3b0c04;
        }
    }
    ctx->pc = 0x3B0BF4u;
    // 0x3b0bf4: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B0BF4u;
    SET_GPR_U32(ctx, 31, 0x3B0BFCu);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B0BF4u, 0x3B0BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0BFCu;
label_3b0bfc:
    // 0x3b0bfc: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x3B0BFCu;
    {
        const bool branch_taken_0x3b0bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0BFCu;
        // 0x3b0c00: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0bfc) {
            ctx->pc = 0x3B0D08u;
            goto label_3b0d08;
        }
    }
    ctx->pc = 0x3B0C04u;
label_3b0c04:
    // 0x3b0c04: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3b0c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b0c08: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B0C08u;
    {
        const bool branch_taken_0x3b0c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B0C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0C08u;
        // 0x3b0c0c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0c08) {
            ctx->pc = 0x3B0C20u;
            goto label_3b0c20;
        }
    }
    ctx->pc = 0x3B0C10u;
    // 0x3b0c10: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B0C10u;
    SET_GPR_U32(ctx, 31, 0x3B0C18u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B0C10u, 0x3B0C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0C18u;
label_3b0c18:
    // 0x3b0c18: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3B0C18u;
    {
        const bool branch_taken_0x3b0c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0C18u;
        // 0x3b0c1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0c18) {
            ctx->pc = 0x3B0D08u;
            goto label_3b0d08;
        }
    }
    ctx->pc = 0x3B0C20u;
label_3b0c20:
    // 0x3b0c20: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x3b0c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3b0c24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b0c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b0c28: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x3b0c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
    // 0x3b0c2c: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x3b0c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x3b0c30: 0x7c400010  sq          $zero, 0x10($v0)
    ctx->pc = 0x3b0c30u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 0));
    // 0x3b0c34: 0x7c400020  sq          $zero, 0x20($v0)
    ctx->pc = 0x3b0c34u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 0));
    // 0x3b0c38: 0x7c400030  sq          $zero, 0x30($v0)
    ctx->pc = 0x3b0c38u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 0));
    // 0x3b0c3c: 0x7c400040  sq          $zero, 0x40($v0)
    ctx->pc = 0x3b0c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 0));
    // 0x3b0c40: 0x7c400050  sq          $zero, 0x50($v0)
    ctx->pc = 0x3b0c40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 80), GPR_VEC(ctx, 0));
    // 0x3b0c44: 0x7c400060  sq          $zero, 0x60($v0)
    ctx->pc = 0x3b0c44u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 96), GPR_VEC(ctx, 0));
    // 0x3b0c48: 0x7c400070  sq          $zero, 0x70($v0)
    ctx->pc = 0x3b0c48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), GPR_VEC(ctx, 0));
    // 0x3b0c4c: 0x7c400080  sq          $zero, 0x80($v0)
    ctx->pc = 0x3b0c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 128), GPR_VEC(ctx, 0));
    // 0x3b0c50: 0x7c400090  sq          $zero, 0x90($v0)
    ctx->pc = 0x3b0c50u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 144), GPR_VEC(ctx, 0));
    // 0x3b0c54: 0x7c4000a0  sq          $zero, 0xA0($v0)
    ctx->pc = 0x3b0c54u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 160), GPR_VEC(ctx, 0));
    // 0x3b0c58: 0x7c4000b0  sq          $zero, 0xB0($v0)
    ctx->pc = 0x3b0c58u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 176), GPR_VEC(ctx, 0));
    // 0x3b0c5c: 0x7c4000c0  sq          $zero, 0xC0($v0)
    ctx->pc = 0x3b0c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 192), GPR_VEC(ctx, 0));
    // 0x3b0c60: 0x7c4000d0  sq          $zero, 0xD0($v0)
    ctx->pc = 0x3b0c60u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 208), GPR_VEC(ctx, 0));
    // 0x3b0c64: 0x7c4000e0  sq          $zero, 0xE0($v0)
    ctx->pc = 0x3b0c64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 224), GPR_VEC(ctx, 0));
    // 0x3b0c68: 0x7c4000f0  sq          $zero, 0xF0($v0)
    ctx->pc = 0x3b0c68u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 240), GPR_VEC(ctx, 0));
    // 0x3b0c6c: 0x7c400100  sq          $zero, 0x100($v0)
    ctx->pc = 0x3b0c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 256), GPR_VEC(ctx, 0));
    // 0x3b0c70: 0x7c400110  sq          $zero, 0x110($v0)
    ctx->pc = 0x3b0c70u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 272), GPR_VEC(ctx, 0));
    // 0x3b0c74: 0x7c400120  sq          $zero, 0x120($v0)
    ctx->pc = 0x3b0c74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 288), GPR_VEC(ctx, 0));
    // 0x3b0c78: 0x7c400130  sq          $zero, 0x130($v0)
    ctx->pc = 0x3b0c78u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 304), GPR_VEC(ctx, 0));
    // 0x3b0c7c: 0x7c400140  sq          $zero, 0x140($v0)
    ctx->pc = 0x3b0c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 320), GPR_VEC(ctx, 0));
    // 0x3b0c80: 0x7c400150  sq          $zero, 0x150($v0)
    ctx->pc = 0x3b0c80u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 336), GPR_VEC(ctx, 0));
    // 0x3b0c84: 0x7c400160  sq          $zero, 0x160($v0)
    ctx->pc = 0x3b0c84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 352), GPR_VEC(ctx, 0));
    // 0x3b0c88: 0x7c400170  sq          $zero, 0x170($v0)
    ctx->pc = 0x3b0c88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 368), GPR_VEC(ctx, 0));
    // 0x3b0c8c: 0x7c400180  sq          $zero, 0x180($v0)
    ctx->pc = 0x3b0c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 384), GPR_VEC(ctx, 0));
    // 0x3b0c90: 0x7c400190  sq          $zero, 0x190($v0)
    ctx->pc = 0x3b0c90u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 400), GPR_VEC(ctx, 0));
    // 0x3b0c94: 0x7c4001a0  sq          $zero, 0x1A0($v0)
    ctx->pc = 0x3b0c94u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 416), GPR_VEC(ctx, 0));
    // 0x3b0c98: 0x7c4001b0  sq          $zero, 0x1B0($v0)
    ctx->pc = 0x3b0c98u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 432), GPR_VEC(ctx, 0));
    // 0x3b0c9c: 0x7c400200  sq          $zero, 0x200($v0)
    ctx->pc = 0x3b0c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 512), GPR_VEC(ctx, 0));
    // 0x3b0ca0: 0x7c400210  sq          $zero, 0x210($v0)
    ctx->pc = 0x3b0ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 528), GPR_VEC(ctx, 0));
    // 0x3b0ca4: 0x7c400220  sq          $zero, 0x220($v0)
    ctx->pc = 0x3b0ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 544), GPR_VEC(ctx, 0));
    // 0x3b0ca8: 0x7c400230  sq          $zero, 0x230($v0)
    ctx->pc = 0x3b0ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 560), GPR_VEC(ctx, 0));
    // 0x3b0cac: 0x7c400240  sq          $zero, 0x240($v0)
    ctx->pc = 0x3b0cacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 576), GPR_VEC(ctx, 0));
    // 0x3b0cb0: 0x7c400250  sq          $zero, 0x250($v0)
    ctx->pc = 0x3b0cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 592), GPR_VEC(ctx, 0));
    // 0x3b0cb4: 0x7c400260  sq          $zero, 0x260($v0)
    ctx->pc = 0x3b0cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 608), GPR_VEC(ctx, 0));
    // 0x3b0cb8: 0x7c400270  sq          $zero, 0x270($v0)
    ctx->pc = 0x3b0cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 624), GPR_VEC(ctx, 0));
    // 0x3b0cbc: 0x124000  sll         $t0, $s2, 0
    ctx->pc = 0x3b0cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 18), 0));
    // 0x3b0cc0: 0xfc480040  sd          $t0, 0x40($v0)
    ctx->pc = 0x3b0cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 8));
    // 0x3b0cc4: 0x8c4801c0  lw          $t0, 0x1C0($v0)
    ctx->pc = 0x3b0cc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 448)));
    // 0x3b0cc8: 0xfc4801c0  sd          $t0, 0x1C0($v0)
    ctx->pc = 0x3b0cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 448), GPR_U64(ctx, 8));
    // 0x3b0ccc: 0xfc4001c8  sd          $zero, 0x1C8($v0)
    ctx->pc = 0x3b0cccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 456), GPR_U64(ctx, 0));
    // 0x3b0cd0: 0x8c4801d0  lw          $t0, 0x1D0($v0)
    ctx->pc = 0x3b0cd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 464)));
    // 0x3b0cd4: 0xfc4801d0  sd          $t0, 0x1D0($v0)
    ctx->pc = 0x3b0cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 464), GPR_U64(ctx, 8));
    // 0x3b0cd8: 0xfc4001d8  sd          $zero, 0x1D8($v0)
    ctx->pc = 0x3b0cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 472), GPR_U64(ctx, 0));
    // 0x3b0cdc: 0x8c4801e0  lw          $t0, 0x1E0($v0)
    ctx->pc = 0x3b0cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 480)));
    // 0x3b0ce0: 0xfc4801e0  sd          $t0, 0x1E0($v0)
    ctx->pc = 0x3b0ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 480), GPR_U64(ctx, 8));
    // 0x3b0ce4: 0xfc4001e8  sd          $zero, 0x1E8($v0)
    ctx->pc = 0x3b0ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 488), GPR_U64(ctx, 0));
    // 0x3b0ce8: 0x8c4801f0  lw          $t0, 0x1F0($v0)
    ctx->pc = 0x3b0ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 496)));
    // 0x3b0cec: 0xfc4801f0  sd          $t0, 0x1F0($v0)
    ctx->pc = 0x3b0cecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 496), GPR_U64(ctx, 8));
    // 0x3b0cf0: 0xfc4001f8  sd          $zero, 0x1F8($v0)
    ctx->pc = 0x3b0cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 504), GPR_U64(ctx, 0));
    // 0x3b0cf4: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B0CF4u;
    SET_GPR_U32(ctx, 31, 0x3B0CFCu);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B0CF4u, 0x3B0CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0CFCu;
label_3b0cfc:
    // 0x3b0cfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b0cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0d00: 0xc0ebeb0  jal         func_3AFAC0
    ctx->pc = 0x3B0D00u;
    SET_GPR_U32(ctx, 31, 0x3B0D08u);
    ctx->pc = 0x3B0D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0D00u;
    // 0x3b0d04: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFAC0u, 0x3B0D00u, 0x3B0D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0D08u;
label_3b0d08:
    // 0x3b0d08: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3b0d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b0d0c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x3b0d0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b0d10: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x3b0d10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b0d14: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3b0d14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b0d18: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D18u;
        // 0x3b0d1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0D20u;
}
