#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r701_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r701
{
// Function: func_00799B58
// Address: 0x799b58 - 0x799c00
void func_00799B58_0x799b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799B58_0x799b58");
#endif

    switch (ctx->pc) {
        case 0x799b8cu: goto label_799b8c;
        case 0x799ba0u: goto label_799ba0;
        case 0x799bccu: goto label_799bcc;
        case 0x799bd4u: goto label_799bd4;
        default: break;
    }

    ctx->pc = 0x799b58u;

    // 0x799b58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x799b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x799b5c: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x799b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x799b60: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x799b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x799b64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799b68: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x799b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x799b6c: 0x24848658  addiu       $a0, $a0, -0x79A8
    ctx->pc = 0x799b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    // 0x799b70: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x799b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x799b74: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x799b74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799b78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x799b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x799b7c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x799b80: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x799b80u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x799b84: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799B84u;
    SET_GPR_U32(ctx, 31, 0x799B8Cu);
    ctx->pc = 0x799B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B84u;
    // 0x799b88: 0x3c120058  lui         $s2, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799B84u, 0x799B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B8Cu;
label_799b8c:
    // 0x799b8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799b90: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x799b90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799b94: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x799b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x799b98: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x799b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x799b9c: 0x0  nop
    ctx->pc = 0x799b9cu;
    // NOP
label_799ba0:
    // 0x799ba0: 0x3205001f  andi        $a1, $s0, 0x1F
    ctx->pc = 0x799ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x799ba4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x799ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x799ba8: 0xb32806  srlv        $a1, $s3, $a1
    ctx->pc = 0x799ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 5) & 0x1F));
    // 0x799bac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x799bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x799bb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799bb4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x799bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x799bb8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x799BB8u;
    {
        const bool branch_taken_0x799bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BB8u;
        // 0x799bbc: 0x26446ab0  addiu       $a0, $s2, 0x6AB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 27312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bb8) {
            ctx->pc = 0x799BD4u;
            goto label_799bd4;
        }
    }
    ctx->pc = 0x799BC0u;
    // 0x799bc0: 0xa3b00000  sb          $s0, 0x0($sp)
    ctx->pc = 0x799bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x799bc4: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799BC4u;
    SET_GPR_U32(ctx, 31, 0x799BCCu);
    ctx->pc = 0x799BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BC4u;
    // 0x799bc8: 0x320500ff  andi        $a1, $s0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799BC4u, 0x799BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BCCu;
label_799bcc:
    // 0x799bcc: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799BCCu;
    SET_GPR_U32(ctx, 31, 0x799BD4u);
    ctx->pc = 0x799BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BCCu;
    // 0x799bd0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799BCCu, 0x799BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BD4u;
label_799bd4:
    // 0x799bd4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x799bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x799bd8: 0x2a020017  slti        $v0, $s0, 0x17
    ctx->pc = 0x799bd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x799bdc: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x799BDCu;
    {
        const bool branch_taken_0x799bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799bdc) {
            ctx->pc = 0x799BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799BDCu;
            // 0x799be0: 0x101142  srl         $v0, $s0, 5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799ba0;
        }
    }
    ctx->pc = 0x799BE4u;
    // 0x799be4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x799be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799be8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x799be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799bec: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x799becu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799bf0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x799bf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799bf4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x799BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BF8u;
        // 0x799bfc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799C00u;
}
} // namespace gh_r701
