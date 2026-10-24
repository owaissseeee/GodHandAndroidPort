#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: makeIconSys__7cMcSave
// Address: 0x7c6bc0 - 0x7c6d60
void makeIconSys__7cMcSave_0x7c6bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("makeIconSys__7cMcSave_0x7c6bc0");
#endif

    switch (ctx->pc) {
        case 0x7c6c70u: goto label_7c6c70;
        case 0x7c6d44u: goto label_7c6d44;
        default: break;
    }

    ctx->pc = 0x7c6bc0u;

    // 0x7c6bc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x7c6bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x7c6bc4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x7c6bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x7c6bc8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x7c6bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x7c6bcc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x7c6bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x7c6bd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c6bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6bd4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x7c6bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x7c6bd8: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c6bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c6bdc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x7c6bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x7c6be0: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x7c6be0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7c6be4: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x7c6be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x7c6be8: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x7c6be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x7c6bec: 0x24890d60  addiu       $t1, $a0, 0xD60
    ctx->pc = 0x7c6becu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 3424));
    // 0x7c6bf0: 0x69260007  ldl         $a2, 0x7($t1)
    ctx->pc = 0x7c6bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x7c6bf4: 0x6d260000  ldr         $a2, 0x0($t1)
    ctx->pc = 0x7c6bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x7c6bf8: 0x6927000f  ldl         $a3, 0xF($t1)
    ctx->pc = 0x7c6bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x7c6bfc: 0x6d270008  ldr         $a3, 0x8($t1)
    ctx->pc = 0x7c6bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x7c6c00: 0x69280017  ldl         $t0, 0x17($t1)
    ctx->pc = 0x7c6c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x7c6c04: 0x6d280010  ldr         $t0, 0x10($t1)
    ctx->pc = 0x7c6c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x7c6c08: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x7c6c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7c6c0c: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x7c6c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7c6c10: 0xb3a7001f  sdl         $a3, 0x1F($sp)
    ctx->pc = 0x7c6c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7c6c14: 0xb7a70018  sdr         $a3, 0x18($sp)
    ctx->pc = 0x7c6c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7c6c18: 0xb3a80027  sdl         $t0, 0x27($sp)
    ctx->pc = 0x7c6c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7c6c1c: 0xb7a80020  sdr         $t0, 0x20($sp)
    ctx->pc = 0x7c6c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7c6c20: 0x6926001f  ldl         $a2, 0x1F($t1)
    ctx->pc = 0x7c6c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x7c6c24: 0x6d260018  ldr         $a2, 0x18($t1)
    ctx->pc = 0x7c6c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x7c6c28: 0x69270027  ldl         $a3, 0x27($t1)
    ctx->pc = 0x7c6c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x7c6c2c: 0x6d270020  ldr         $a3, 0x20($t1)
    ctx->pc = 0x7c6c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x7c6c30: 0xb3a6002f  sdl         $a2, 0x2F($sp)
    ctx->pc = 0x7c6c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7c6c34: 0xb7a60028  sdr         $a2, 0x28($sp)
    ctx->pc = 0x7c6c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7c6c38: 0xb3a70037  sdl         $a3, 0x37($sp)
    ctx->pc = 0x7c6c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7c6c3c: 0xb7a70030  sdr         $a3, 0x30($sp)
    ctx->pc = 0x7c6c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7c6c40: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x7c6c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x7c6c44: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C6C44u;
    {
        const bool branch_taken_0x7c6c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c6c44) {
            ctx->pc = 0x7C6C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C6C44u;
            // 0x7c6c48: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C6C4Cu;
            goto label_7c6c4c;
        }
    }
    ctx->pc = 0x7C6C4Cu;
label_7c6c4c:
    // 0x7c6c4c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x7c6c4cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7c6c50: 0x8e0500f8  lw          $a1, 0xF8($s0)
    ctx->pc = 0x7c6c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x7c6c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c6c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6c58: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x7c6c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x7c6c5c: 0x26070124  addiu       $a3, $s0, 0x124
    ctx->pc = 0x7c6c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    // 0x7c6c60: 0x26080128  addiu       $t0, $s0, 0x128
    ctx->pc = 0x7c6c60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
    // 0x7c6c64: 0x8810  mfhi        $s1
    ctx->pc = 0x7c6c64u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x7c6c68: 0xc1f2400  jal         func_7C9000
    ctx->pc = 0x7C6C68u;
    SET_GPR_U32(ctx, 31, 0x7C6C70u);
    ctx->pc = 0x7C6C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6C68u;
    // 0x7c6c6c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9000u, 0x7C6C68u, 0x7C6C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C6C70u;
label_7c6c70:
    // 0x7c6c70: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x7c6c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7c6c74: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x7c6c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7c6c78: 0x226001a  div         $zero, $s1, $a2
    ctx->pc = 0x7c6c78u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7c6c7c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C6C7Cu;
    {
        const bool branch_taken_0x7c6c7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c6c7c) {
            ctx->pc = 0x7C6C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C6C7Cu;
            // 0x7c6c80: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C6C84u;
            goto label_7c6c84;
        }
    }
    ctx->pc = 0x7C6C84u;
label_7c6c84:
    // 0x7c6c84: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x7c6c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7c6c88: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x7c6c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7c6c8c: 0x240c000a  addiu       $t4, $zero, 0xA
    ctx->pc = 0x7c6c8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7c6c90: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7c6c90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7c6c94: 0x8e090120  lw          $t1, 0x120($s0)
    ctx->pc = 0x7c6c94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x7c6c98: 0x8e030128  lw          $v1, 0x128($s0)
    ctx->pc = 0x7c6c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x7c6c9c: 0x8e0b0124  lw          $t3, 0x124($s0)
    ctx->pc = 0x7c6c9cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x7c6ca0: 0x24a50d88  addiu       $a1, $a1, 0xD88
    ctx->pc = 0x7c6ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3464));
    // 0x7c6ca4: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x7c6ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x7c6ca8: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x7c6ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x7c6cac: 0x8812  mflo        $s1
    ctx->pc = 0x7c6cacu;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x7c6cb0: 0x4010  mfhi        $t0
    ctx->pc = 0x7c6cb0u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x7c6cb4: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x7c6cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x7c6cb8: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x7c6cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x7c6cbc: 0x2518821  addu        $s1, $s2, $s1
    ctx->pc = 0x7c6cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x7c6cc0: 0x2484021  addu        $t0, $s2, $t0
    ctx->pc = 0x7c6cc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x7c6cc4: 0x126001a  div         $zero, $t1, $a2
    ctx->pc = 0x7c6cc4u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7c6cc8: 0x4812  mflo        $t1
    ctx->pc = 0x7c6cc8u;
    SET_GPR_U64(ctx, 9, ctx->lo);
    // 0x7c6ccc: 0x5010  mfhi        $t2
    ctx->pc = 0x7c6cccu;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x7c6cd0: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x7c6cd0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x7c6cd4: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x7c6cd4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x7c6cd8: 0x2494821  addu        $t1, $s2, $t1
    ctx->pc = 0x7c6cd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x7c6cdc: 0x24a5021  addu        $t2, $s2, $t2
    ctx->pc = 0x7c6cdcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
    // 0x7c6ce0: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x7c6ce0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7c6ce4: 0x1812  mflo        $v1
    ctx->pc = 0x7c6ce4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x7c6ce8: 0x1010  mfhi        $v0
    ctx->pc = 0x7c6ce8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x7c6cec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c6cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c6cf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x7c6cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x7c6cf4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x7c6cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x7c6cf8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x7c6cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x7c6cfc: 0x166001a  div         $zero, $t3, $a2
    ctx->pc = 0x7c6cfcu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 11);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7c6d00: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x7c6d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c6d04: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x7c6d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x7c6d08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7c6d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7c6d0c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x7c6d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7c6d10: 0x5812  mflo        $t3
    ctx->pc = 0x7c6d10u;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x7c6d14: 0x3810  mfhi        $a3
    ctx->pc = 0x7c6d14u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x7c6d18: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x7c6d18u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x7c6d1c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x7c6d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x7c6d20: 0x24b5821  addu        $t3, $s2, $t3
    ctx->pc = 0x7c6d20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 11)));
    // 0x7c6d24: 0x2479021  addu        $s2, $s2, $a3
    ctx->pc = 0x7c6d24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x7c6d28: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x7c6d28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x7c6d2c: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x7c6d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x7c6d30: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x7c6d30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x7c6d34: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x7c6d34u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x7c6d38: 0x8e4b0000  lw          $t3, 0x0($s2)
    ctx->pc = 0x7c6d38u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x7c6d3c: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x7C6D3Cu;
    SET_GPR_U32(ctx, 31, 0x7C6D44u);
    ctx->pc = 0x7C6D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6D3Cu;
    // 0x7c6d40: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x7C6D3Cu, 0x7C6D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C6D44u;
label_7c6d44:
    // 0x7c6d44: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x7c6d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7c6d48: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x7c6d48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7c6d4c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x7c6d4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7c6d50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x7c6d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7c6d54: 0x3e00008  jr          $ra
    ctx->pc = 0x7C6D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C6D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6D54u;
        // 0x7c6d58: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C6D5Cu;
    // 0x7c6d5c: 0x0  nop
    ctx->pc = 0x7c6d5cu;
    // NOP
    ctx->pc = 0x7c6d60u;
}
} // namespace gh_mcport
