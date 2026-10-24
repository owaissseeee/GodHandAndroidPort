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
// Function: func_0079B158
// Address: 0x79b158 - 0x79b220
void func_0079B158_0x79b158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B158_0x79b158");
#endif

    switch (ctx->pc) {
        case 0x79b1c0u: goto label_79b1c0;
        case 0x79b1d0u: goto label_79b1d0;
        case 0x79b1dcu: goto label_79b1dc;
        case 0x79b1f8u: goto label_79b1f8;
        case 0x79b208u: goto label_79b208;
        default: break;
    }

    ctx->pc = 0x79b158u;

    // 0x79b158: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x79b158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x79b15c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x79b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79b160: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x79b160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79b164: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79b164u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b168: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x79b168u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x79b16c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x79b16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79b170: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x79b170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b174: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x79b174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79b178: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x79b178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x79b17c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x79b17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x79b180: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x79b180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79b184: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x79b184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x79b188: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79b188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b18c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x79b18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x79b190: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x79b190u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
    // 0x79b194: 0xa3a40020  sb          $a0, 0x20($sp)
    ctx->pc = 0x79b194u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 4));
    // 0x79b198: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x79b198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x79b19c: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x79b19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x79b1a0: 0xafbd0040  sw          $sp, 0x40($sp)
    ctx->pc = 0x79b1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 29));
    // 0x79b1a4: 0x6ba20047  ldl         $v0, 0x47($sp)
    ctx->pc = 0x79b1a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x79b1a8: 0x6fa20040  ldr         $v0, 0x40($sp)
    ctx->pc = 0x79b1a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x79b1ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x79b1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x79b1b0: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x79b1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b1b4: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x79b1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b1b8: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x79b1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x79b1bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79b1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79b1c0:
    // 0x79b1c0: 0x26446ab0  addiu       $a0, $s2, 0x6AB0
    ctx->pc = 0x79b1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 27312));
    // 0x79b1c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x79b1c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x79b1c8: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79B1C8u;
    SET_GPR_U32(ctx, 31, 0x79B1D0u);
    ctx->pc = 0x79B1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1C8u;
    // 0x79b1cc: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79B1C8u, 0x79B1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1D0u;
label_79b1d0:
    // 0x79b1d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79b1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79b1d4: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79B1D4u;
    SET_GPR_U32(ctx, 31, 0x79B1DCu);
    ctx->pc = 0x79B1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1D4u;
    // 0x79b1d8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79B1D4u, 0x79B1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1DCu;
label_79b1dc:
    // 0x79b1dc: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x79b1dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x79b1e0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79B1E0u;
    {
        const bool branch_taken_0x79b1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b1e0) {
            ctx->pc = 0x79B1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B1E0u;
            // 0x79b1e4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b1c0;
        }
    }
    ctx->pc = 0x79B1E8u;
    // 0x79b1e8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79b1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79b1ec: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x79b1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x79b1f0: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x79B1F0u;
    SET_GPR_U32(ctx, 31, 0x79B1F8u);
    ctx->pc = 0x79B1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1F0u;
    // 0x79b1f4: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79B1F0u, 0x79B1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1F8u;
label_79b1f8:
    // 0x79b1f8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79b1fc: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79b200: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B200u;
    SET_GPR_U32(ctx, 31, 0x79B208u);
    ctx->pc = 0x79B204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B200u;
    // 0x79b204: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B200u, 0x79B208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B208u;
label_79b208:
    // 0x79b208: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x79b208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79b20c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x79b20cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79b210: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x79b210u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79b214: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x79b214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b218: 0x3e00008  jr          $ra
    ctx->pc = 0x79B218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B218u;
        // 0x79b21c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B220u;
}
} // namespace gh_r700
