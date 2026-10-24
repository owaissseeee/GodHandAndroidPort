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

// Function: cOmBase_tickModeTableSkip381
// Address: 0x1c29d0 - 0x1c2b08
void cOmBase_tickModeTableSkip381_0x1c29d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_tickModeTableSkip381_0x1c29d0");
#endif

    switch (ctx->pc) {
        case 0x1c29d0u: goto label_1c29d0;
        case 0x1c29d4u: goto label_1c29d4;
        case 0x1c29d8u: goto label_1c29d8;
        case 0x1c29dcu: goto label_1c29dc;
        case 0x1c29e0u: goto label_1c29e0;
        case 0x1c29e4u: goto label_1c29e4;
        case 0x1c29e8u: goto label_1c29e8;
        case 0x1c29ecu: goto label_1c29ec;
        case 0x1c29f0u: goto label_1c29f0;
        case 0x1c29f4u: goto label_1c29f4;
        case 0x1c29f8u: goto label_1c29f8;
        case 0x1c29fcu: goto label_1c29fc;
        case 0x1c2a00u: goto label_1c2a00;
        case 0x1c2a04u: goto label_1c2a04;
        case 0x1c2a08u: goto label_1c2a08;
        case 0x1c2a0cu: goto label_1c2a0c;
        case 0x1c2a10u: goto label_1c2a10;
        case 0x1c2a14u: goto label_1c2a14;
        case 0x1c2a18u: goto label_1c2a18;
        case 0x1c2a1cu: goto label_1c2a1c;
        case 0x1c2a20u: goto label_1c2a20;
        case 0x1c2a24u: goto label_1c2a24;
        case 0x1c2a28u: goto label_1c2a28;
        case 0x1c2a2cu: goto label_1c2a2c;
        case 0x1c2a30u: goto label_1c2a30;
        case 0x1c2a34u: goto label_1c2a34;
        case 0x1c2a38u: goto label_1c2a38;
        case 0x1c2a3cu: goto label_1c2a3c;
        case 0x1c2a40u: goto label_1c2a40;
        case 0x1c2a44u: goto label_1c2a44;
        case 0x1c2a48u: goto label_1c2a48;
        case 0x1c2a4cu: goto label_1c2a4c;
        case 0x1c2a50u: goto label_1c2a50;
        case 0x1c2a54u: goto label_1c2a54;
        case 0x1c2a58u: goto label_1c2a58;
        case 0x1c2a5cu: goto label_1c2a5c;
        case 0x1c2a60u: goto label_1c2a60;
        case 0x1c2a64u: goto label_1c2a64;
        case 0x1c2a68u: goto label_1c2a68;
        case 0x1c2a6cu: goto label_1c2a6c;
        case 0x1c2a70u: goto label_1c2a70;
        case 0x1c2a74u: goto label_1c2a74;
        case 0x1c2a78u: goto label_1c2a78;
        case 0x1c2a7cu: goto label_1c2a7c;
        case 0x1c2a80u: goto label_1c2a80;
        case 0x1c2a84u: goto label_1c2a84;
        case 0x1c2a88u: goto label_1c2a88;
        case 0x1c2a8cu: goto label_1c2a8c;
        case 0x1c2a90u: goto label_1c2a90;
        case 0x1c2a94u: goto label_1c2a94;
        case 0x1c2a98u: goto label_1c2a98;
        case 0x1c2a9cu: goto label_1c2a9c;
        case 0x1c2aa0u: goto label_1c2aa0;
        case 0x1c2aa4u: goto label_1c2aa4;
        case 0x1c2aa8u: goto label_1c2aa8;
        case 0x1c2aacu: goto label_1c2aac;
        case 0x1c2ab0u: goto label_1c2ab0;
        case 0x1c2ab4u: goto label_1c2ab4;
        case 0x1c2ab8u: goto label_1c2ab8;
        case 0x1c2abcu: goto label_1c2abc;
        case 0x1c2ac0u: goto label_1c2ac0;
        case 0x1c2ac4u: goto label_1c2ac4;
        case 0x1c2ac8u: goto label_1c2ac8;
        case 0x1c2accu: goto label_1c2acc;
        case 0x1c2ad0u: goto label_1c2ad0;
        case 0x1c2ad4u: goto label_1c2ad4;
        case 0x1c2ad8u: goto label_1c2ad8;
        case 0x1c2adcu: goto label_1c2adc;
        case 0x1c2ae0u: goto label_1c2ae0;
        case 0x1c2ae4u: goto label_1c2ae4;
        case 0x1c2ae8u: goto label_1c2ae8;
        case 0x1c2aecu: goto label_1c2aec;
        case 0x1c2af0u: goto label_1c2af0;
        case 0x1c2af4u: goto label_1c2af4;
        case 0x1c2af8u: goto label_1c2af8;
        case 0x1c2afcu: goto label_1c2afc;
        case 0x1c2b00u: goto label_1c2b00;
        case 0x1c2b04u: goto label_1c2b04;
        default: break;
    }

    ctx->pc = 0x1c29d0u;

label_1c29d0:
    // 0x1c29d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c29d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1c29d4:
    // 0x1c29d4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c29d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1c29d8:
    // 0x1c29d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c29d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1c29dc:
    // 0x1c29dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c29dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c29e0:
    // 0x1c29e0: 0xc06ddac  jal         func_1B76B0
label_1c29e4:
    if (ctx->pc == 0x1C29E4u) {
        ctx->pc = 0x1C29E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29E0u;
        // 0x1c29e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C29E8u;
        goto label_1c29e8;
    }
    ctx->pc = 0x1C29E0u;
    SET_GPR_U32(ctx, 31, 0x1C29E8u);
    ctx->pc = 0x1C29E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C29E0u;
    // 0x1c29e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1C29E0u, 0x1C29E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C29E8u;
label_1c29e8:
    // 0x1c29e8: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
label_1c29ec:
    if (ctx->pc == 0x1C29ECu) {
        ctx->pc = 0x1C29ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29E8u;
        // 0x1c29ec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C29F0u;
        goto label_1c29f0;
    }
    ctx->pc = 0x1C29E8u;
    {
        const bool branch_taken_0x1c29e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c29e8) {
            ctx->pc = 0x1C29ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C29E8u;
            // 0x1c29ec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2AF8u;
            goto label_1c2af8;
        }
    }
    ctx->pc = 0x1C29F0u;
label_1c29f0:
    // 0x1c29f0: 0x86020610  lh          $v0, 0x610($s0)
    ctx->pc = 0x1c29f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1552)));
label_1c29f4:
    // 0x1c29f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1c29f8:
    if (ctx->pc == 0x1C29F8u) {
        ctx->pc = 0x1C29F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29F4u;
        // 0x1c29f8: 0x96030610  lhu         $v1, 0x610($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C29FCu;
        goto label_1c29fc;
    }
    ctx->pc = 0x1C29F4u;
    {
        const bool branch_taken_0x1c29f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C29F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29F4u;
        // 0x1c29f8: 0x96030610  lhu         $v1, 0x610($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c29f4) {
            ctx->pc = 0x1C2A04u;
            goto label_1c2a04;
        }
    }
    ctx->pc = 0x1C29FCu;
label_1c29fc:
    // 0x1c29fc: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1c29fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1c2a00:
    // 0x1c2a00: 0xa6020610  sh          $v0, 0x610($s0)
    ctx->pc = 0x1c2a00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1552), (uint16_t)GPR_U32(ctx, 2));
label_1c2a04:
    // 0x1c2a04: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1c2a04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1c2a08:
    // 0x1c2a08: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1c2a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_1c2a0c:
    // 0x1c2a0c: 0x24479c60  addiu       $a3, $v0, -0x63A0
    ctx->pc = 0x1c2a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941792));
label_1c2a10:
    // 0x1c2a10: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x1c2a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1c2a14:
    // 0x1c2a14: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x1c2a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1c2a18:
    // 0x1c2a18: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1c2a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1c2a1c:
    // 0x1c2a1c: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1c2a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1c2a20:
    // 0x1c2a20: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1c2a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1c2a24:
    // 0x1c2a24: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1c2a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1c2a28:
    // 0x1c2a28: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1c2a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c2a2c:
    // 0x1c2a2c: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1c2a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c2a30:
    // 0x1c2a30: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1c2a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c2a34:
    // 0x1c2a34: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1c2a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c2a38:
    // 0x1c2a38: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1c2a38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c2a3c:
    // 0x1c2a3c: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x1c2a3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c2a40:
    // 0x1c2a40: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x1c2a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1c2a44:
    // 0x1c2a44: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x1c2a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1c2a48:
    // 0x1c2a48: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x1c2a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c2a4c:
    // 0x1c2a4c: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x1c2a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c2a50:
    // 0x1c2a50: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1c2a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1c2a54:
    // 0x1c2a54: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x1c2a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_1c2a58:
    // 0x1c2a58: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1c2a58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1c2a5c:
    // 0x1c2a5c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1c2a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1c2a60:
    // 0x1c2a60: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x1c2a60u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_1c2a64:
    // 0x1c2a64: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_1c2a68:
    if (ctx->pc == 0x1C2A68u) {
        ctx->pc = 0x1C2A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A64u;
        // 0x1c2a68: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2A6Cu;
        goto label_1c2a6c;
    }
    ctx->pc = 0x1C2A64u;
    {
        const bool branch_taken_0x1c2a64 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1C2A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A64u;
        // 0x1c2a68: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a64) {
            ctx->pc = 0x1C2A98u;
            goto label_1c2a98;
        }
    }
    ctx->pc = 0x1C2A6Cu;
label_1c2a6c:
    // 0x1c2a6c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x1c2a6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1c2a70:
    // 0x1c2a70: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1c2a70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1c2a74:
    // 0x1c2a74: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1c2a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1c2a78:
    // 0x1c2a78: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1c2a78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1c2a7c:
    // 0x1c2a7c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1c2a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1c2a80:
    // 0x1c2a80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c2a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c2a84:
    // 0x1c2a84: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1c2a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1c2a88:
    // 0x1c2a88: 0xdc91fff8  ld          $s1, -0x8($a0)
    ctx->pc = 0x1c2a88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_1c2a8c:
    // 0x1c2a8c: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1c2a8cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1c2a90:
    // 0x1c2a90: 0x10000004  b           . + 4 + (0x4 << 2)
label_1c2a94:
    if (ctx->pc == 0x1C2A94u) {
        ctx->pc = 0x1C2A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A90u;
        // 0x1c2a94: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2A98u;
        goto label_1c2a98;
    }
    ctx->pc = 0x1C2A90u;
    {
        const bool branch_taken_0x1c2a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A90u;
        // 0x1c2a94: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a90) {
            ctx->pc = 0x1C2AA4u;
            goto label_1c2aa4;
        }
    }
    ctx->pc = 0x1C2A98u;
label_1c2a98:
    // 0x1c2a98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c2a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c2a9c:
    // 0x1c2a9c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1c2a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c2aa0:
    // 0x1c2aa0: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x1c2aa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1c2aa4:
    // 0x1c2aa4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c2aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1c2aa8:
    // 0x1c2aa8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1c2aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1c2aac:
    // 0x1c2aac: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1c2ab0:
    if (ctx->pc == 0x1C2AB0u) {
        ctx->pc = 0x1C2AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AACu;
        // 0x1c2ab0: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2AB4u;
        goto label_1c2ab4;
    }
    ctx->pc = 0x1C2AACu;
    {
        const bool branch_taken_0x1c2aac = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1C2AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AACu;
        // 0x1c2ab0: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2aac) {
            ctx->pc = 0x1C2AC8u;
            goto label_1c2ac8;
        }
    }
    ctx->pc = 0x1C2AB4u;
label_1c2ab4:
    // 0x1c2ab4: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1c2ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1c2ab8:
    // 0x1c2ab8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1c2ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1c2abc:
    // 0x1c2abc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1c2abcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1c2ac0:
    // 0x1c2ac0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c2ac4:
    if (ctx->pc == 0x1C2AC4u) {
        ctx->pc = 0x1C2AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AC0u;
        // 0x1c2ac4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2AC8u;
        goto label_1c2ac8;
    }
    ctx->pc = 0x1C2AC0u;
    {
        const bool branch_taken_0x1c2ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AC0u;
        // 0x1c2ac4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ac0) {
            ctx->pc = 0x1C2ACCu;
            goto label_1c2acc;
        }
    }
    ctx->pc = 0x1C2AC8u;
label_1c2ac8:
    // 0x1c2ac8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c2ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c2acc:
    // 0x1c2acc: 0xc0f809  jalr        $a2
label_1c2ad0:
    if (ctx->pc == 0x1C2AD0u) {
        ctx->pc = 0x1C2AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2ACCu;
        // 0x1c2ad0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2AD4u;
        goto label_1c2ad4;
    }
    ctx->pc = 0x1C2ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C2AD4u);
        ctx->pc = 0x1C2AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2ACCu;
        // 0x1c2ad0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2ACCu, 0x1C2AD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C2AD4u;
label_1c2ad4:
    // 0x1c2ad4: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x1c2ad4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
label_1c2ad8:
    // 0x1c2ad8: 0x24020381  addiu       $v0, $zero, 0x381
    ctx->pc = 0x1c2ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 897));
label_1c2adc:
    // 0x1c2adc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1c2ae0:
    if (ctx->pc == 0x1C2AE0u) {
        ctx->pc = 0x1C2AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2ADCu;
        // 0x1c2ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2AE4u;
        goto label_1c2ae4;
    }
    ctx->pc = 0x1C2ADCu;
    {
        const bool branch_taken_0x1c2adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C2AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2ADCu;
        // 0x1c2ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2adc) {
            ctx->pc = 0x1C2AECu;
            goto label_1c2aec;
        }
    }
    ctx->pc = 0x1C2AE4u;
label_1c2ae4:
    // 0x1c2ae4: 0xc0aa1fa  jal         func_2A87E8
label_1c2ae8:
    if (ctx->pc == 0x1C2AE8u) {
        ctx->pc = 0x1C2AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AE4u;
        // 0x1c2ae8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2AECu;
        goto label_1c2aec;
    }
    ctx->pc = 0x1C2AE4u;
    SET_GPR_U32(ctx, 31, 0x1C2AECu);
    ctx->pc = 0x1C2AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2AE4u;
    // 0x1c2ae8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x1C2AE4u, 0x1C2AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2AECu;
label_1c2aec:
    // 0x1c2aec: 0xc06ddb6  jal         func_1B76D8
label_1c2af0:
    if (ctx->pc == 0x1C2AF0u) {
        ctx->pc = 0x1C2AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AECu;
        // 0x1c2af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2AF4u;
        goto label_1c2af4;
    }
    ctx->pc = 0x1C2AECu;
    SET_GPR_U32(ctx, 31, 0x1C2AF4u);
    ctx->pc = 0x1C2AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2AECu;
    // 0x1c2af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1C2AECu, 0x1C2AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2AF4u;
label_1c2af4:
    // 0x1c2af4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c2af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c2af8:
    // 0x1c2af8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c2af8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c2afc:
    // 0x1c2afc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c2afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c2b00:
    // 0x1c2b00: 0x3e00008  jr          $ra
label_1c2b04:
    if (ctx->pc == 0x1C2B04u) {
        ctx->pc = 0x1C2B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B00u;
        // 0x1c2b04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2B08u;
        goto label_fallthrough_0x1c2b00;
    }
    ctx->pc = 0x1C2B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B00u;
        // 0x1c2b04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c2b00:
    ctx->pc = 0x1C2B08u;
}
