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
// Function: func_0079A958
// Address: 0x79a958 - 0x79aa28
void func_0079A958_0x79a958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A958_0x79a958");
#endif

    switch (ctx->pc) {
        case 0x79a9b8u: goto label_79a9b8;
        case 0x79a9c0u: goto label_79a9c0;
        case 0x79a9d0u: goto label_79a9d0;
        case 0x79a9e4u: goto label_79a9e4;
        case 0x79a9fcu: goto label_79a9fc;
        case 0x79aa0cu: goto label_79aa0c;
        default: break;
    }

    ctx->pc = 0x79a958u;

    // 0x79a958: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x79a958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x79a95c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a960: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x79a960u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a964: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x79a964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a968: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x79a968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79a96c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x79a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79a970: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x79a970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x79a974: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x79a974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x79a978: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x79a978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79a97c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x79a97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x79a980: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79a980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a984: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x79a984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x79a988: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x79a988u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79a98c: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x79a98cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a990: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x79a990u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a994: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x79a994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x79a998: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x79a998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x79a99c: 0xafbd0040  sw          $sp, 0x40($sp)
    ctx->pc = 0x79a99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 29));
    // 0x79a9a0: 0x6ba20047  ldl         $v0, 0x47($sp)
    ctx->pc = 0x79a9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x79a9a4: 0x6fa20040  ldr         $v0, 0x40($sp)
    ctx->pc = 0x79a9a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x79a9a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x79a9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x79a9ac: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x79a9acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a9b0: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x79a9b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a9b4: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x79a9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_79a9b8:
    // 0x79a9b8: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x79A9B8u;
    SET_GPR_U32(ctx, 31, 0x79A9C0u);
    ctx->pc = 0x79A9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9B8u;
    // 0x79a9bc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x79A9B8u, 0x79A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9C0u;
label_79a9c0:
    // 0x79a9c0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A9C0u;
    {
        const bool branch_taken_0x79a9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a9c0) {
            ctx->pc = 0x79A9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A9C0u;
            // 0x79a9c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A9D4u;
            goto label_79a9d4;
        }
    }
    ctx->pc = 0x79A9C8u;
    // 0x79a9c8: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79A9C8u;
    SET_GPR_U32(ctx, 31, 0x79A9D0u);
    ctx->pc = 0x79A9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9C8u;
    // 0x79a9cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A9C8u, 0x79A9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9D0u;
label_79a9d0:
    // 0x79a9d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79a9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79a9d4:
    // 0x79a9d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x79a9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a9d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x79a9d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x79a9dc: 0xc0a57b8  jal         func_295EE0
    ctx->pc = 0x79A9DCu;
    SET_GPR_U32(ctx, 31, 0x79A9E4u);
    ctx->pc = 0x79A9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9DCu;
    // 0x79a9e0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295EE0u, 0x79A9DCu, 0x79A9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9E4u;
label_79a9e4:
    // 0x79a9e4: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x79a9e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x79a9e8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x79A9E8u;
    {
        const bool branch_taken_0x79a9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9E8u;
        // 0x79a9ec: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9e8) {
            ctx->pc = 0x79A9B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a9b8;
        }
    }
    ctx->pc = 0x79A9F0u;
    // 0x79a9f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a9f4: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x79A9F4u;
    SET_GPR_U32(ctx, 31, 0x79A9FCu);
    ctx->pc = 0x79A9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9F4u;
    // 0x79a9f8: 0xa3a20040  sb          $v0, 0x40($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x79A9F4u, 0x79A9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9FCu;
label_79a9fc:
    // 0x79a9fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A9FCu;
    {
        const bool branch_taken_0x79a9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9FCu;
        // 0x79aa00: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9fc) {
            ctx->pc = 0x79AA10u;
            goto label_79aa10;
        }
    }
    ctx->pc = 0x79AA04u;
    // 0x79aa04: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79AA04u;
    SET_GPR_U32(ctx, 31, 0x79AA0Cu);
    ctx->pc = 0x79AA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA04u;
    // 0x79aa08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79AA04u, 0x79AA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA0Cu;
label_79aa0c:
    // 0x79aa0c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x79aa0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_79aa10:
    // 0x79aa10: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x79aa10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79aa14: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x79aa14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79aa18: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x79aa18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79aa1c: 0x3e00008  jr          $ra
    ctx->pc = 0x79AA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA1Cu;
        // 0x79aa20: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AA24u;
    // 0x79aa24: 0x0  nop
    ctx->pc = 0x79aa24u;
    // NOP
    ctx->pc = 0x79aa28u;
}
} // namespace gh_r204
