#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r206_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r206
{
// Function: func_0079A490
// Address: 0x79a490 - 0x79a548
void func_0079A490_0x79a490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A490_0x79a490");
#endif

    switch (ctx->pc) {
        case 0x79a510u: goto label_79a510;
        case 0x79a524u: goto label_79a524;
        default: break;
    }

    ctx->pc = 0x79a490u;

    // 0x79a490: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x79a490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x79a494: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x79a494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79a498: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79a498u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a49c: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x79a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x79a4a0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x79a4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x79a4a4: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x79a4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x79a4a8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x79a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79a4ac: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x79a4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79a4b0: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x79a4b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79a4b4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x79a4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x79a4b8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x79a4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x79a4bc: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x79a4bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79a4c0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x79a4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x79a4c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79a4c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x79a4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x79a4cc: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x79a4ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
    // 0x79a4d0: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x79a4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a4d4: 0xa3a40020  sb          $a0, 0x20($sp)
    ctx->pc = 0x79a4d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 4));
    // 0x79a4d8: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x79a4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x79a4dc: 0xafa60054  sw          $a2, 0x54($sp)
    ctx->pc = 0x79a4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
    // 0x79a4e0: 0xafa70058  sw          $a3, 0x58($sp)
    ctx->pc = 0x79a4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 7));
    // 0x79a4e4: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x79a4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x79a4e8: 0xafbd0050  sw          $sp, 0x50($sp)
    ctx->pc = 0x79a4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 29));
    // 0x79a4ec: 0x6ba20057  ldl         $v0, 0x57($sp)
    ctx->pc = 0x79a4ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x79a4f0: 0x6fa20050  ldr         $v0, 0x50($sp)
    ctx->pc = 0x79a4f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x79a4f4: 0x6ba3005f  ldl         $v1, 0x5F($sp)
    ctx->pc = 0x79a4f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x79a4f8: 0x6fa30058  ldr         $v1, 0x58($sp)
    ctx->pc = 0x79a4f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x79a4fc: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x79a4fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a500: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x79a500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a504: 0xb3a3004f  sdl         $v1, 0x4F($sp)
    ctx->pc = 0x79a504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a508: 0xb7a30048  sdr         $v1, 0x48($sp)
    ctx->pc = 0x79a508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a50c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79a510:
    // 0x79a510: 0x26446ab0  addiu       $a0, $s2, 0x6AB0
    ctx->pc = 0x79a510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 27312));
    // 0x79a514: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x79a514u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x79a518: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x79a518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x79a51c: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79A51Cu;
    SET_GPR_U32(ctx, 31, 0x79A524u);
    ctx->pc = 0x79A520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A51Cu;
    // 0x79a520: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A51Cu, 0x79A524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A524u;
label_79a524:
    // 0x79a524: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x79a524u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x79a528: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79A528u;
    {
        const bool branch_taken_0x79a528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a528) {
            ctx->pc = 0x79A52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A528u;
            // 0x79a52c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a510;
        }
    }
    ctx->pc = 0x79A530u;
    // 0x79a530: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x79a530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79a534: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x79a534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79a538: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x79a538u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a53c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x79a53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a540: 0x3e00008  jr          $ra
    ctx->pc = 0x79A540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A540u;
        // 0x79a544: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A548u;
}
} // namespace gh_r206
