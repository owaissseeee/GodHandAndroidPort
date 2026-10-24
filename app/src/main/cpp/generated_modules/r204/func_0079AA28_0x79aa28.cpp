#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r204_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r204
{
// Function: func_0079AA28
// Address: 0x79aa28 - 0x79aac8
void func_0079AA28_0x79aa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079AA28_0x79aa28");
#endif

    switch (ctx->pc) {
        case 0x79aa88u: goto label_79aa88;
        case 0x79aa98u: goto label_79aa98;
        default: break;
    }

    ctx->pc = 0x79aa28u;

    // 0x79aa28: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x79aa28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x79aa2c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79aa30: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x79aa30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x79aa34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x79aa34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79aa38: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x79aa38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79aa3c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x79aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79aa40: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x79aa40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x79aa44: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x79aa44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x79aa48: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x79aa48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79aa4c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x79aa4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x79aa50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79aa50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x79aa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x79aa58: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79aa58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa5c: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x79aa5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x79aa60: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x79aa60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x79aa64: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x79aa64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x79aa68: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x79aa68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x79aa6c: 0xafbd0040  sw          $sp, 0x40($sp)
    ctx->pc = 0x79aa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 29));
    // 0x79aa70: 0x6ba20047  ldl         $v0, 0x47($sp)
    ctx->pc = 0x79aa70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x79aa74: 0x6fa20040  ldr         $v0, 0x40($sp)
    ctx->pc = 0x79aa74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x79aa78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x79aa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x79aa7c: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x79aa7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79aa80: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x79aa80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79aa84: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x79aa84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_79aa88:
    // 0x79aa88: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79aa88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79aa8c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x79aa8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x79aa90: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79AA90u;
    SET_GPR_U32(ctx, 31, 0x79AA98u);
    ctx->pc = 0x79AA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA90u;
    // 0x79aa94: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79AA90u, 0x79AA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA98u;
label_79aa98:
    // 0x79aa98: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x79aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x79aa9c: 0x2e440003  sltiu       $a0, $s2, 0x3
    ctx->pc = 0x79aa9cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x79aaa0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79AAA0u;
    {
        const bool branch_taken_0x79aaa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAA0u;
        // 0x79aaa4: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aaa0) {
            ctx->pc = 0x79AA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aa88;
        }
    }
    ctx->pc = 0x79AAA8u;
    // 0x79aaa8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x79aaa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aaac: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x79aaacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79aab0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x79aab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79aab4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x79aab4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79aab8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x79aab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79aabc: 0x3e00008  jr          $ra
    ctx->pc = 0x79AABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AABCu;
        // 0x79aac0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AAC4u;
    // 0x79aac4: 0x0  nop
    ctx->pc = 0x79aac4u;
    // NOP
    ctx->pc = 0x79aac8u;
}
} // namespace gh_r204
