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

// Function: func_001ED050
// Address: 0x1ed050 - 0x1ed178
void func_001ED050_0x1ed050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ED050_0x1ed050");
#endif

    switch (ctx->pc) {
        case 0x1ed120u: goto label_1ed120;
        case 0x1ed150u: goto label_1ed150;
        default: break;
    }

    ctx->pc = 0x1ed050u;

    // 0x1ed050: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1ed050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1ed054: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1ed054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1ed058: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1ed058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1ed05c: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x1ed05cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ed060: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1ed060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1ed064: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1ed064u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed068: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1ed068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1ed06c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1ed06cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed070: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1ed070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1ed074: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1ed074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1ed078: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1ed078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1ed07c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1ED07Cu;
    {
        const bool branch_taken_0x1ed07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED07Cu;
        // 0x1ed080: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed07c) {
            ctx->pc = 0x1ED150u;
            goto label_1ed150;
        }
    }
    ctx->pc = 0x1ED084u;
    // 0x1ed084: 0x2a8203e8  slti        $v0, $s4, 0x3E8
    ctx->pc = 0x1ed084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1ed088: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x1ed088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ed08c: 0x241403e7  addiu       $s4, $zero, 0x3E7
    ctx->pc = 0x1ed08cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x1ed090: 0x590c0  sll         $s2, $a1, 3
    ctx->pc = 0x1ed090u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1ed094: 0xc2a00b  movn        $s4, $a2, $v0
    ctx->pc = 0x1ed094u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 6));
    // 0x1ed098: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1ed098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1ed09c: 0x290001a  div         $zero, $s4, $s0
    ctx->pc = 0x1ed09cu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ed0a0: 0x2466bd70  addiu       $a2, $v1, -0x4290
    ctx->pc = 0x1ed0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950256));
    // 0x1ed0a4: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x1ed0a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ed0a8: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x1ed0a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ed0ac: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x1ed0acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1ed0b0: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x1ed0b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1ed0b4: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x1ed0b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1ed0b8: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x1ed0b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1ed0bc: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1ed0bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ed0c0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1ed0c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ed0c4: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x1ed0c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ed0c8: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x1ed0c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ed0cc: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x1ed0ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ed0d0: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x1ed0d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ed0d4: 0x68c2001f  ldl         $v0, 0x1F($a2)
    ctx->pc = 0x1ed0d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ed0d8: 0x6cc20018  ldr         $v0, 0x18($a2)
    ctx->pc = 0x1ed0d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ed0dc: 0x68c40027  ldl         $a0, 0x27($a2)
    ctx->pc = 0x1ed0dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1ed0e0: 0x6cc40020  ldr         $a0, 0x20($a2)
    ctx->pc = 0x1ed0e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1ed0e4: 0xb3a2001f  sdl         $v0, 0x1F($sp)
    ctx->pc = 0x1ed0e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ed0e8: 0xb7a20018  sdr         $v0, 0x18($sp)
    ctx->pc = 0x1ed0e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ed0ec: 0xb3a40027  sdl         $a0, 0x27($sp)
    ctx->pc = 0x1ed0ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ed0f0: 0xb7a40020  sdr         $a0, 0x20($sp)
    ctx->pc = 0x1ed0f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ed0f4: 0x3b21021  addu        $v0, $sp, $s2
    ctx->pc = 0x1ed0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
    // 0x1ed0f8: 0x2413007c  addiu       $s3, $zero, 0x7C
    ctx->pc = 0x1ed0f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1ed0fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ed0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed100: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1ED100u;
    {
        const bool branch_taken_0x1ed100 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed100) {
            ctx->pc = 0x1ED104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED100u;
            // 0x1ed104: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED108u;
            goto label_1ed108;
        }
    }
    ctx->pc = 0x1ED108u;
label_1ed108:
    // 0x1ed108: 0x8812  mflo        $s1
    ctx->pc = 0x1ed108u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x1ed10c: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x1ed10cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ed110: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ed110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed114: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1ed114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1ed118: 0xc0b5952  jal         func_2D6548
    ctx->pc = 0x1ED118u;
    SET_GPR_U32(ctx, 31, 0x1ED120u);
    ctx->pc = 0x1ED11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED118u;
    // 0x1ed11c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x1ED118u, 0x1ED120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED120u;
label_1ed120:
    // 0x1ed120: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x1ed120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1ed124: 0x2308818  mult        $s1, $s1, $s0
    ctx->pc = 0x1ed124u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1ed128: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1ed128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ed12c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1ed12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ed130: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ed130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed134: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1ED134u;
    {
        const bool branch_taken_0x1ed134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed134) {
            ctx->pc = 0x1ED138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED134u;
            // 0x1ed138: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED13Cu;
            goto label_1ed13c;
        }
    }
    ctx->pc = 0x1ED13Cu;
label_1ed13c:
    // 0x1ed13c: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x1ed13cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ed140: 0x2912823  subu        $a1, $s4, $s1
    ctx->pc = 0x1ed140u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1ed144: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1ed144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1ed148: 0xc0b5952  jal         func_2D6548
    ctx->pc = 0x1ED148u;
    SET_GPR_U32(ctx, 31, 0x1ED150u);
    ctx->pc = 0x1ED14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED148u;
    // 0x1ed14c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x1ED148u, 0x1ED150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED150u;
label_1ed150:
    // 0x1ed150: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1ed150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ed154: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1ed154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ed158: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1ed158u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ed15c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1ed15cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ed160: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1ed160u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ed164: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1ed164u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ed168: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ed168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed16c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED16Cu;
        // 0x1ed170: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED16Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED174u;
    // 0x1ed174: 0x0  nop
    ctx->pc = 0x1ed174u;
    // NOP
    ctx->pc = 0x1ed178u;
}
