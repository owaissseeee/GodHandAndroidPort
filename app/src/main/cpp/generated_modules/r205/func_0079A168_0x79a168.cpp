#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r205_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r205
{
// Function: func_0079A168
// Address: 0x79a168 - 0x79a270
void func_0079A168_0x79a168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A168_0x79a168");
#endif

    switch (ctx->pc) {
        case 0x79a1f8u: goto label_79a1f8;
        case 0x79a200u: goto label_79a200;
        case 0x79a230u: goto label_79a230;
        default: break;
    }

    ctx->pc = 0x79a168u;

    // 0x79a168: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x79a168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x79a16c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x79a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a170: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x79a170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a174: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79a174u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a178: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x79a178u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a17c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x79a17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79a180: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x79a180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x79a184: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x79a184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79a188: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x79a188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79a18c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x79a18cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x79a190: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x79a190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79a194: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x79a194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79a198: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x79a198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x79a19c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x79a19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x79a1a0: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x79a1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x79a1a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x79a1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x79a1a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79a1a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1ac: 0xa3a40020  sb          $a0, 0x20($sp)
    ctx->pc = 0x79a1acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 4));
    // 0x79a1b0: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x79a1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x79a1b4: 0xa3a60040  sb          $a2, 0x40($sp)
    ctx->pc = 0x79a1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 6));
    // 0x79a1b8: 0xafa70074  sw          $a3, 0x74($sp)
    ctx->pc = 0x79a1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 7));
    // 0x79a1bc: 0xafa80078  sw          $t0, 0x78($sp)
    ctx->pc = 0x79a1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 8));
    // 0x79a1c0: 0xafa3007c  sw          $v1, 0x7C($sp)
    ctx->pc = 0x79a1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 3));
    // 0x79a1c4: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x79a1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x79a1c8: 0xafbd0070  sw          $sp, 0x70($sp)
    ctx->pc = 0x79a1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 29));
    // 0x79a1cc: 0x6ba20077  ldl         $v0, 0x77($sp)
    ctx->pc = 0x79a1ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x79a1d0: 0x6fa20070  ldr         $v0, 0x70($sp)
    ctx->pc = 0x79a1d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x79a1d4: 0x6ba3007f  ldl         $v1, 0x7F($sp)
    ctx->pc = 0x79a1d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x79a1d8: 0x6fa30078  ldr         $v1, 0x78($sp)
    ctx->pc = 0x79a1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x79a1dc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x79a1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79a1e0: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x79a1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a1e4: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x79a1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a1e8: 0xb3a3005f  sdl         $v1, 0x5F($sp)
    ctx->pc = 0x79a1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a1ec: 0xb7a30058  sdr         $v1, 0x58($sp)
    ctx->pc = 0x79a1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a1f0: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x79a1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x79a1f4: 0x0  nop
    ctx->pc = 0x79a1f4u;
    // NOP
label_79a1f8:
    // 0x79a1f8: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A1F8u;
    SET_GPR_U32(ctx, 31, 0x79A200u);
    ctx->pc = 0x79A1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1F8u;
    // 0x79a1fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A1F8u, 0x79A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A200u;
label_79a200:
    // 0x79a200: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x79A200u;
    {
        const bool branch_taken_0x79a200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A200u;
        // 0x79a204: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a200) {
            ctx->pc = 0x79A244u;
            goto label_79a244;
        }
    }
    ctx->pc = 0x79A208u;
    // 0x79a208: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x79a208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x79a20c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79A20Cu;
    {
        const bool branch_taken_0x79a20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A20Cu;
        // 0x79a210: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a20c) {
            ctx->pc = 0x79A1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a1f8;
        }
    }
    ctx->pc = 0x79A214u;
    // 0x79a214: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79a214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79a218: 0x8c4369f0  lw          $v1, 0x69F0($v0)
    ctx->pc = 0x79a218u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79a21c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x79A21Cu;
    {
        const bool branch_taken_0x79a21c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A21Cu;
        // 0x79a220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a21c) {
            ctx->pc = 0x79A258u;
            goto label_79a258;
        }
    }
    ctx->pc = 0x79A224u;
    // 0x79a224: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a228: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x79a228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x79a22c: 0x0  nop
    ctx->pc = 0x79a22cu;
    // NOP
label_79a230:
    // 0x79a230: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A230u;
    {
        const bool branch_taken_0x79a230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a230) {
            ctx->pc = 0x79A234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A230u;
            // 0x79a234: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A24Cu;
            goto label_79a24c;
        }
    }
    ctx->pc = 0x79A238u;
    // 0x79a238: 0x90420614  lbu         $v0, 0x614($v0)
    ctx->pc = 0x79a238u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1556)));
    // 0x79a23c: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A23Cu;
    {
        const bool branch_taken_0x79a23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x79a23c) {
            ctx->pc = 0x79A240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A23Cu;
            // 0x79a240: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A24Cu;
            goto label_79a24c;
        }
    }
    ctx->pc = 0x79A244u;
label_79a244:
    // 0x79a244: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79A244u;
    {
        const bool branch_taken_0x79a244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A244u;
        // 0x79a248: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a244) {
            ctx->pc = 0x79A258u;
            goto label_79a258;
        }
    }
    ctx->pc = 0x79A24Cu;
label_79a24c:
    // 0x79a24c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79A24Cu;
    {
        const bool branch_taken_0x79a24c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a24c) {
            ctx->pc = 0x79A250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A24Cu;
            // 0x79a250: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a230;
        }
    }
    ctx->pc = 0x79A254u;
    // 0x79a254: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x79a254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a258:
    // 0x79a258: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x79a258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79a25c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x79a25cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79a260: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x79a260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79a264: 0x3e00008  jr          $ra
    ctx->pc = 0x79A264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A264u;
        // 0x79a268: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A26Cu;
    // 0x79a26c: 0x0  nop
    ctx->pc = 0x79a26cu;
    // NOP
    ctx->pc = 0x79a270u;
}
} // namespace gh_r205
