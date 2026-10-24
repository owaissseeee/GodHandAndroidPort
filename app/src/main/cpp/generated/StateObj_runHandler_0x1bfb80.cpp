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

// Function: StateObj_runHandler
// Address: 0x1bfb80 - 0x1bfc88
void StateObj_runHandler_0x1bfb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StateObj_runHandler_0x1bfb80");
#endif

    switch (ctx->pc) {
        case 0x1bfb80u: goto label_1bfb80;
        case 0x1bfb84u: goto label_1bfb84;
        case 0x1bfb88u: goto label_1bfb88;
        case 0x1bfb8cu: goto label_1bfb8c;
        case 0x1bfb90u: goto label_1bfb90;
        case 0x1bfb94u: goto label_1bfb94;
        case 0x1bfb98u: goto label_1bfb98;
        case 0x1bfb9cu: goto label_1bfb9c;
        case 0x1bfba0u: goto label_1bfba0;
        case 0x1bfba4u: goto label_1bfba4;
        case 0x1bfba8u: goto label_1bfba8;
        case 0x1bfbacu: goto label_1bfbac;
        case 0x1bfbb0u: goto label_1bfbb0;
        case 0x1bfbb4u: goto label_1bfbb4;
        case 0x1bfbb8u: goto label_1bfbb8;
        case 0x1bfbbcu: goto label_1bfbbc;
        case 0x1bfbc0u: goto label_1bfbc0;
        case 0x1bfbc4u: goto label_1bfbc4;
        case 0x1bfbc8u: goto label_1bfbc8;
        case 0x1bfbccu: goto label_1bfbcc;
        case 0x1bfbd0u: goto label_1bfbd0;
        case 0x1bfbd4u: goto label_1bfbd4;
        case 0x1bfbd8u: goto label_1bfbd8;
        case 0x1bfbdcu: goto label_1bfbdc;
        case 0x1bfbe0u: goto label_1bfbe0;
        case 0x1bfbe4u: goto label_1bfbe4;
        case 0x1bfbe8u: goto label_1bfbe8;
        case 0x1bfbecu: goto label_1bfbec;
        case 0x1bfbf0u: goto label_1bfbf0;
        case 0x1bfbf4u: goto label_1bfbf4;
        case 0x1bfbf8u: goto label_1bfbf8;
        case 0x1bfbfcu: goto label_1bfbfc;
        case 0x1bfc00u: goto label_1bfc00;
        case 0x1bfc04u: goto label_1bfc04;
        case 0x1bfc08u: goto label_1bfc08;
        case 0x1bfc0cu: goto label_1bfc0c;
        case 0x1bfc10u: goto label_1bfc10;
        case 0x1bfc14u: goto label_1bfc14;
        case 0x1bfc18u: goto label_1bfc18;
        case 0x1bfc1cu: goto label_1bfc1c;
        case 0x1bfc20u: goto label_1bfc20;
        case 0x1bfc24u: goto label_1bfc24;
        case 0x1bfc28u: goto label_1bfc28;
        case 0x1bfc2cu: goto label_1bfc2c;
        case 0x1bfc30u: goto label_1bfc30;
        case 0x1bfc34u: goto label_1bfc34;
        case 0x1bfc38u: goto label_1bfc38;
        case 0x1bfc3cu: goto label_1bfc3c;
        case 0x1bfc40u: goto label_1bfc40;
        case 0x1bfc44u: goto label_1bfc44;
        case 0x1bfc48u: goto label_1bfc48;
        case 0x1bfc4cu: goto label_1bfc4c;
        case 0x1bfc50u: goto label_1bfc50;
        case 0x1bfc54u: goto label_1bfc54;
        case 0x1bfc58u: goto label_1bfc58;
        case 0x1bfc5cu: goto label_1bfc5c;
        case 0x1bfc60u: goto label_1bfc60;
        case 0x1bfc64u: goto label_1bfc64;
        case 0x1bfc68u: goto label_1bfc68;
        case 0x1bfc6cu: goto label_1bfc6c;
        case 0x1bfc70u: goto label_1bfc70;
        case 0x1bfc74u: goto label_1bfc74;
        case 0x1bfc78u: goto label_1bfc78;
        case 0x1bfc7cu: goto label_1bfc7c;
        case 0x1bfc80u: goto label_1bfc80;
        case 0x1bfc84u: goto label_1bfc84;
        default: break;
    }

    ctx->pc = 0x1bfb80u;

label_1bfb80:
    // 0x1bfb80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bfb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1bfb84:
    // 0x1bfb84: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1bfb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1bfb88:
    // 0x1bfb88: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1bfb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1bfb8c:
    // 0x1bfb8c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bfb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1bfb90:
    // 0x1bfb90: 0xc06ddac  jal         func_1B76B0
label_1bfb94:
    if (ctx->pc == 0x1BFB94u) {
        ctx->pc = 0x1BFB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB90u;
        // 0x1bfb94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB98u;
        goto label_1bfb98;
    }
    ctx->pc = 0x1BFB90u;
    SET_GPR_U32(ctx, 31, 0x1BFB98u);
    ctx->pc = 0x1BFB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFB90u;
    // 0x1bfb94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1BFB90u, 0x1BFB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB98u;
label_1bfb98:
    // 0x1bfb98: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_1bfb9c:
    if (ctx->pc == 0x1BFB9Cu) {
        ctx->pc = 0x1BFB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB98u;
        // 0x1bfb9c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFBA0u;
        goto label_1bfba0;
    }
    ctx->pc = 0x1BFB98u;
    {
        const bool branch_taken_0x1bfb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB98u;
        // 0x1bfb9c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfb98) {
            ctx->pc = 0x1BFC74u;
            goto label_1bfc74;
        }
    }
    ctx->pc = 0x1BFBA0u;
label_1bfba0:
    // 0x1bfba0: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1bfba0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1bfba4:
    // 0x1bfba4: 0x244797b8  addiu       $a3, $v0, -0x6848
    ctx->pc = 0x1bfba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940600));
label_1bfba8:
    // 0x1bfba8: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x1bfba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1bfbac:
    // 0x1bfbac: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x1bfbacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1bfbb0:
    // 0x1bfbb0: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1bfbb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1bfbb4:
    // 0x1bfbb4: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1bfbb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1bfbb8:
    // 0x1bfbb8: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1bfbb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1bfbbc:
    // 0x1bfbbc: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1bfbbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1bfbc0:
    // 0x1bfbc0: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1bfbc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bfbc4:
    // 0x1bfbc4: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1bfbc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bfbc8:
    // 0x1bfbc8: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1bfbc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bfbcc:
    // 0x1bfbcc: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1bfbccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bfbd0:
    // 0x1bfbd0: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1bfbd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bfbd4:
    // 0x1bfbd4: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x1bfbd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bfbd8:
    // 0x1bfbd8: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x1bfbd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1bfbdc:
    // 0x1bfbdc: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x1bfbdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1bfbe0:
    // 0x1bfbe0: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x1bfbe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bfbe4:
    // 0x1bfbe4: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x1bfbe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bfbe8:
    // 0x1bfbe8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1bfbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bfbec:
    // 0x1bfbec: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x1bfbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_1bfbf0:
    // 0x1bfbf0: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1bfbf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1bfbf4:
    // 0x1bfbf4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1bfbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1bfbf8:
    // 0x1bfbf8: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x1bfbf8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_1bfbfc:
    // 0x1bfbfc: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_1bfc00:
    if (ctx->pc == 0x1BFC00u) {
        ctx->pc = 0x1BFC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBFCu;
        // 0x1bfc00: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC04u;
        goto label_1bfc04;
    }
    ctx->pc = 0x1BFBFCu;
    {
        const bool branch_taken_0x1bfbfc = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1BFC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBFCu;
        // 0x1bfc00: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfbfc) {
            ctx->pc = 0x1BFC30u;
            goto label_1bfc30;
        }
    }
    ctx->pc = 0x1BFC04u;
label_1bfc04:
    // 0x1bfc04: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x1bfc04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1bfc08:
    // 0x1bfc08: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1bfc08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1bfc0c:
    // 0x1bfc0c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1bfc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1bfc10:
    // 0x1bfc10: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1bfc10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1bfc14:
    // 0x1bfc14: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1bfc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1bfc18:
    // 0x1bfc18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bfc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bfc1c:
    // 0x1bfc1c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1bfc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1bfc20:
    // 0x1bfc20: 0xdc91fff8  ld          $s1, -0x8($a0)
    ctx->pc = 0x1bfc20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_1bfc24:
    // 0x1bfc24: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1bfc24u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1bfc28:
    // 0x1bfc28: 0x10000004  b           . + 4 + (0x4 << 2)
label_1bfc2c:
    if (ctx->pc == 0x1BFC2Cu) {
        ctx->pc = 0x1BFC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC28u;
        // 0x1bfc2c: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC30u;
        goto label_1bfc30;
    }
    ctx->pc = 0x1BFC28u;
    {
        const bool branch_taken_0x1bfc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC28u;
        // 0x1bfc2c: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc28) {
            ctx->pc = 0x1BFC3Cu;
            goto label_1bfc3c;
        }
    }
    ctx->pc = 0x1BFC30u;
label_1bfc30:
    // 0x1bfc30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bfc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bfc34:
    // 0x1bfc34: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1bfc34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bfc38:
    // 0x1bfc38: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x1bfc38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1bfc3c:
    // 0x1bfc3c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1bfc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1bfc40:
    // 0x1bfc40: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1bfc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1bfc44:
    // 0x1bfc44: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1bfc48:
    if (ctx->pc == 0x1BFC48u) {
        ctx->pc = 0x1BFC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC44u;
        // 0x1bfc48: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC4Cu;
        goto label_1bfc4c;
    }
    ctx->pc = 0x1BFC44u;
    {
        const bool branch_taken_0x1bfc44 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1BFC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC44u;
        // 0x1bfc48: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc44) {
            ctx->pc = 0x1BFC60u;
            goto label_1bfc60;
        }
    }
    ctx->pc = 0x1BFC4Cu;
label_1bfc4c:
    // 0x1bfc4c: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1bfc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1bfc50:
    // 0x1bfc50: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1bfc50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1bfc54:
    // 0x1bfc54: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1bfc54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1bfc58:
    // 0x1bfc58: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bfc5c:
    if (ctx->pc == 0x1BFC5Cu) {
        ctx->pc = 0x1BFC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC58u;
        // 0x1bfc5c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC60u;
        goto label_1bfc60;
    }
    ctx->pc = 0x1BFC58u;
    {
        const bool branch_taken_0x1bfc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC58u;
        // 0x1bfc5c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc58) {
            ctx->pc = 0x1BFC64u;
            goto label_1bfc64;
        }
    }
    ctx->pc = 0x1BFC60u;
label_1bfc60:
    // 0x1bfc60: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1bfc60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1bfc64:
    // 0x1bfc64: 0xc0f809  jalr        $a2
label_1bfc68:
    if (ctx->pc == 0x1BFC68u) {
        ctx->pc = 0x1BFC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC64u;
        // 0x1bfc68: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC6Cu;
        goto label_1bfc6c;
    }
    ctx->pc = 0x1BFC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1BFC6Cu);
        ctx->pc = 0x1BFC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC64u;
        // 0x1bfc68: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFC64u, 0x1BFC6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BFC6Cu;
label_1bfc6c:
    // 0x1bfc6c: 0xc06ddb6  jal         func_1B76D8
label_1bfc70:
    if (ctx->pc == 0x1BFC70u) {
        ctx->pc = 0x1BFC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC6Cu;
        // 0x1bfc70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC74u;
        goto label_1bfc74;
    }
    ctx->pc = 0x1BFC6Cu;
    SET_GPR_U32(ctx, 31, 0x1BFC74u);
    ctx->pc = 0x1BFC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFC6Cu;
    // 0x1bfc70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1BFC6Cu, 0x1BFC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFC74u;
label_1bfc74:
    // 0x1bfc74: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1bfc74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bfc78:
    // 0x1bfc78: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1bfc78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bfc7c:
    // 0x1bfc7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bfc7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bfc80:
    // 0x1bfc80: 0x3e00008  jr          $ra
label_1bfc84:
    if (ctx->pc == 0x1BFC84u) {
        ctx->pc = 0x1BFC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC80u;
        // 0x1bfc84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC88u;
        goto label_fallthrough_0x1bfc80;
    }
    ctx->pc = 0x1BFC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC80u;
        // 0x1bfc84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bfc80:
    ctx->pc = 0x1BFC88u;
}
