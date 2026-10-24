#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r700_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r700
{
// Function: func_0079B460
// Address: 0x79b460 - 0x79b4f0
void func_0079B460_0x79b460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B460_0x79b460");
#endif

    switch (ctx->pc) {
        case 0x79b48cu: goto label_79b48c;
        case 0x79b4a0u: goto label_79b4a0;
        case 0x79b4c8u: goto label_79b4c8;
        default: break;
    }

    ctx->pc = 0x79b460u;

    // 0x79b460: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79b460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79b464: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x79b464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x79b468: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79b468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x79b46c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79b46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79b470: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79b470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x79b474: 0x24848658  addiu       $a0, $a0, -0x79A8
    ctx->pc = 0x79b474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    // 0x79b478: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x79b478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x79b47c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79b47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79b480: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x79b480u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x79b484: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79B484u;
    SET_GPR_U32(ctx, 31, 0x79B48Cu);
    ctx->pc = 0x79B488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B484u;
    // 0x79b488: 0x2410000b  addiu       $s0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79B484u, 0x79B48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B48Cu;
label_79b48c:
    // 0x79b48c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79b490: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x79b490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b494: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x79b494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x79b498: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x79b498u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x79b49c: 0x0  nop
    ctx->pc = 0x79b49cu;
    // NOP
label_79b4a0:
    // 0x79b4a0: 0x3205001f  andi        $a1, $s0, 0x1F
    ctx->pc = 0x79b4a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x79b4a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x79b4a8: 0xb22806  srlv        $a1, $s2, $a1
    ctx->pc = 0x79b4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), GPR_U32(ctx, 5) & 0x1F));
    // 0x79b4ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x79b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x79b4b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79b4b4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x79b4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x79b4b8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B4B8u;
    {
        const bool branch_taken_0x79b4b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4B8u;
        // 0x79b4bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b4b8) {
            ctx->pc = 0x79B4C8u;
            goto label_79b4c8;
        }
    }
    ctx->pc = 0x79B4C0u;
    // 0x79b4c0: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79B4C0u;
    SET_GPR_U32(ctx, 31, 0x79B4C8u);
    ctx->pc = 0x79B4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4C0u;
    // 0x79b4c4: 0xa3b00000  sb          $s0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79B4C0u, 0x79B4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4C8u;
label_79b4c8:
    // 0x79b4c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x79b4c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x79b4cc: 0x2a02001f  slti        $v0, $s0, 0x1F
    ctx->pc = 0x79b4ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x79b4d0: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x79B4D0u;
    {
        const bool branch_taken_0x79b4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b4d0) {
            ctx->pc = 0x79B4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B4D0u;
            // 0x79b4d4: 0x101142  srl         $v0, $s0, 5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b4a0;
        }
    }
    ctx->pc = 0x79B4D8u;
    // 0x79b4d8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79b4d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b4dc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79b4dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b4e0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79b4e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b4e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79b4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x79B4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4E8u;
        // 0x79b4ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B4F0u;
}
} // namespace gh_r700
