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

// Function: func_0036A0D0
// Address: 0x36a0d0 - 0x36a1d8
void func_0036A0D0_0x36a0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036A0D0_0x36a0d0");
#endif

    switch (ctx->pc) {
        case 0x36a0ecu: goto label_36a0ec;
        case 0x36a128u: goto label_36a128;
        case 0x36a188u: goto label_36a188;
        default: break;
    }

    ctx->pc = 0x36a0d0u;

    // 0x36a0d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36a0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36a0d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36a0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36a0d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36a0d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a0dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36a0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36a0e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36a0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36a0e4: 0xc0db17e  jal         func_36C5F8
    ctx->pc = 0x36A0E4u;
    SET_GPR_U32(ctx, 31, 0x36A0ECu);
    ctx->pc = 0x36A0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A0E4u;
    // 0x36a0e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5F8u, 0x36A0E4u, 0x36A0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A0ECu;
label_36a0ec:
    // 0x36a0ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36A0ECu;
    {
        const bool branch_taken_0x36a0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A0ECu;
        // 0x36a0f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a0ec) {
            ctx->pc = 0x36A110u;
            goto label_36a110;
        }
    }
    ctx->pc = 0x36A0F4u;
    // 0x36a0f4: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x36a0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x36a0f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a0f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a0fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36a0fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a100: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36a100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a104: 0x34a5020c  ori         $a1, $a1, 0x20C
    ctx->pc = 0x36a104u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)524);
    // 0x36a108: 0x80da7c8  j           func_369F20
    ctx->pc = 0x36A108u;
    ctx->pc = 0x36A10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A108u;
    // 0x36a10c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369F20u, 0x36A108u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36A110u;
label_36a110:
    // 0x36a110: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36a110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a114: 0x260301d0  addiu       $v1, $s0, 0x1D0
    ctx->pc = 0x36a114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    // 0x36a118: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x36a118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x36a11c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x36a11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x36a120: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x36A120u;
    {
        const bool branch_taken_0x36a120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A120u;
        // 0x36a124: 0x26040250  addiu       $a0, $s0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a120) {
            ctx->pc = 0x36A188u;
            goto label_36a188;
        }
    }
    ctx->pc = 0x36A128u;
label_36a128:
    // 0x36a128: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x36a128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x36a12c: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x36a12cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x36a130: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x36a130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x36a134: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x36a134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x36a138: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x36a138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x36a13c: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x36a13cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x36a140: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x36a140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x36a144: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x36a144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x36a148: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x36a148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36a14c: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x36a14cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36a150: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x36a150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36a154: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x36a154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36a158: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x36a158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36a15c: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x36a15cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36a160: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x36a160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36a164: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x36a164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36a168: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x36a168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x36a16c: 0x0  nop
    ctx->pc = 0x36a16cu;
    // NOP
    // 0x36a170: 0x0  nop
    ctx->pc = 0x36a170u;
    // NOP
    // 0x36a174: 0x1464ffec  bne         $v1, $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x36A174u;
    {
        const bool branch_taken_0x36a174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x36A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A174u;
        // 0x36a178: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a174) {
            ctx->pc = 0x36A128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a128;
        }
    }
    ctx->pc = 0x36A17Cu;
    // 0x36a17c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x36A17Cu;
    {
        const bool branch_taken_0x36a17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A17Cu;
        // 0x36a180: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a17c) {
            ctx->pc = 0x36A1C0u;
            goto label_36a1c0;
        }
    }
    ctx->pc = 0x36A184u;
    // 0x36a184: 0x0  nop
    ctx->pc = 0x36a184u;
    // NOP
label_36a188:
    // 0x36a188: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x36a188u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36a18c: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x36a18cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x36a190: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x36a190u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x36a194: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x36a194u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x36a198: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x36a198u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x36a19c: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x36a19cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x36a1a0: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x36a1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x36a1a4: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x36a1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x36a1a8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x36a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x36a1ac: 0x0  nop
    ctx->pc = 0x36a1acu;
    // NOP
    // 0x36a1b0: 0x0  nop
    ctx->pc = 0x36a1b0u;
    // NOP
    // 0x36a1b4: 0x1464fff4  bne         $v1, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x36A1B4u;
    {
        const bool branch_taken_0x36a1b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x36A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A1B4u;
        // 0x36a1b8: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a1b4) {
            ctx->pc = 0x36A188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a188;
        }
    }
    ctx->pc = 0x36A1BCu;
    // 0x36a1bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a1bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36a1c0:
    // 0x36a1c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36a1c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a1c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36a1c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a1c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36a1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x36A1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A1CCu;
        // 0x36a1d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A1D4u;
    // 0x36a1d4: 0x0  nop
    ctx->pc = 0x36a1d4u;
    // NOP
    ctx->pc = 0x36a1d8u;
}
