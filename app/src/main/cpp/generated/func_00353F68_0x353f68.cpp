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

// Function: func_00353F68
// Address: 0x353f68 - 0x354080
void func_00353F68_0x353f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00353F68_0x353f68");
#endif

    switch (ctx->pc) {
        case 0x353fd8u: goto label_353fd8;
        case 0x353fecu: goto label_353fec;
        case 0x354008u: goto label_354008;
        default: break;
    }

    ctx->pc = 0x353f68u;

    // 0x353f68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x353f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x353f6c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x353f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x353f70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x353f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353f74: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x353f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x353f78: 0x26110e48  addiu       $s1, $s0, 0xE48
    ctx->pc = 0x353f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3656));
    // 0x353f7c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x353f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x353f80: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x353f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x353f84: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x353f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x353f88: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x353F88u;
    {
        const bool branch_taken_0x353f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x353F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353F88u;
        // 0x353f8c: 0x26120d6c  addiu       $s2, $s0, 0xD6C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3436));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353f88) {
            ctx->pc = 0x354068u;
            goto label_354068;
        }
    }
    ctx->pc = 0x353F90u;
    // 0x353f90: 0x6a020dfb  ldl         $v0, 0xDFB($s0)
    ctx->pc = 0x353f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3579); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x353f94: 0x6e020df4  ldr         $v0, 0xDF4($s0)
    ctx->pc = 0x353f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3572); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x353f98: 0x6a030e03  ldl         $v1, 0xE03($s0)
    ctx->pc = 0x353f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3587); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x353f9c: 0x6e030dfc  ldr         $v1, 0xDFC($s0)
    ctx->pc = 0x353f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3580); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x353fa0: 0x6a060e0b  ldl         $a2, 0xE0B($s0)
    ctx->pc = 0x353fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3595); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x353fa4: 0x6e060e04  ldr         $a2, 0xE04($s0)
    ctx->pc = 0x353fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3588); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x353fa8: 0x6a070e13  ldl         $a3, 0xE13($s0)
    ctx->pc = 0x353fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3603); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x353fac: 0x6e070e0c  ldr         $a3, 0xE0C($s0)
    ctx->pc = 0x353facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3596); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x353fb0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x353fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353fb4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x353fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353fb8: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x353fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353fbc: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x353fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353fc0: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x353fc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353fc4: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x353fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353fc8: 0xb3a7001f  sdl         $a3, 0x1F($sp)
    ctx->pc = 0x353fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353fcc: 0xb7a70018  sdr         $a3, 0x18($sp)
    ctx->pc = 0x353fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x353fd0: 0xc0d4cd2  jal         func_353348
    ctx->pc = 0x353FD0u;
    SET_GPR_U32(ctx, 31, 0x353FD8u);
    ctx->pc = 0x353FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353FD0u;
    // 0x353fd4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353348u, 0x353FD0u, 0x353FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353FD8u;
label_353fd8:
    // 0x353fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x353fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353fdc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x353FDCu;
    {
        const bool branch_taken_0x353fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x353FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353FDCu;
        // 0x353fe0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353fdc) {
            ctx->pc = 0x353FF8u;
            goto label_353ff8;
        }
    }
    ctx->pc = 0x353FE4u;
    // 0x353fe4: 0xc0d4d40  jal         func_353500
    ctx->pc = 0x353FE4u;
    SET_GPR_U32(ctx, 31, 0x353FECu);
    ctx->pc = 0x353500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353500u, 0x353FE4u, 0x353FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353FECu;
label_353fec:
    // 0x353fec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x353fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353ff0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x353ff0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x353ff4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x353ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_353ff8:
    // 0x353ff8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x353ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353ffc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x353ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x354000: 0xc0d6c3a  jal         func_35B0E8
    ctx->pc = 0x354000u;
    SET_GPR_U32(ctx, 31, 0x354008u);
    ctx->pc = 0x354004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354000u;
    // 0x354004: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B0E8u, 0x354000u, 0x354008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354008u;
label_354008:
    // 0x354008: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x354008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35400c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x35400cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x354010: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x354010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x354014: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x354014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x354018: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x354018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x35401c: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x35401cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x354020: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x354020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x354024: 0x6ba6001f  ldl         $a2, 0x1F($sp)
    ctx->pc = 0x354024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x354028: 0x6fa60018  ldr         $a2, 0x18($sp)
    ctx->pc = 0x354028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x35402c: 0xb2020e53  sdl         $v0, 0xE53($s0)
    ctx->pc = 0x35402cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3667); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x354030: 0xb6020e4c  sdr         $v0, 0xE4C($s0)
    ctx->pc = 0x354030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3660); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x354034: 0xb2030e5b  sdl         $v1, 0xE5B($s0)
    ctx->pc = 0x354034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3675); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x354038: 0xb6030e54  sdr         $v1, 0xE54($s0)
    ctx->pc = 0x354038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3668); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35403c: 0xb2040e63  sdl         $a0, 0xE63($s0)
    ctx->pc = 0x35403cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3683); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x354040: 0xb6040e5c  sdr         $a0, 0xE5C($s0)
    ctx->pc = 0x354040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3676); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x354044: 0xb2060e6b  sdl         $a2, 0xE6B($s0)
    ctx->pc = 0x354044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3691); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x354048: 0xb6060e64  sdr         $a2, 0xE64($s0)
    ctx->pc = 0x354048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3684); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35404c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x35404cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x354050: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x354050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x354054: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x354054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x354058: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x354058u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35405c: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x35405cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x354060: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x354060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x354064: 0xae240028  sw          $a0, 0x28($s1)
    ctx->pc = 0x354064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 4));
label_354068:
    // 0x354068: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x354068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35406c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x35406cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x354070: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x354070u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x354074: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x354074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x354078: 0x3e00008  jr          $ra
    ctx->pc = 0x354078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354078u;
        // 0x35407c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354080u;
}
