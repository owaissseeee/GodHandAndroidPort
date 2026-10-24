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

// Function: func_00179FD0
// Address: 0x179fd0 - 0x17a108
void func_00179FD0_0x179fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00179FD0_0x179fd0");
#endif

    switch (ctx->pc) {
        case 0x179fd0u: goto label_179fd0;
        case 0x179fd4u: goto label_179fd4;
        case 0x179fd8u: goto label_179fd8;
        case 0x179fdcu: goto label_179fdc;
        case 0x179fe0u: goto label_179fe0;
        case 0x179fe4u: goto label_179fe4;
        case 0x179fe8u: goto label_179fe8;
        case 0x179fecu: goto label_179fec;
        case 0x179ff0u: goto label_179ff0;
        case 0x179ff4u: goto label_179ff4;
        case 0x179ff8u: goto label_179ff8;
        case 0x179ffcu: goto label_179ffc;
        case 0x17a000u: goto label_17a000;
        case 0x17a004u: goto label_17a004;
        case 0x17a008u: goto label_17a008;
        case 0x17a00cu: goto label_17a00c;
        case 0x17a010u: goto label_17a010;
        case 0x17a014u: goto label_17a014;
        case 0x17a018u: goto label_17a018;
        case 0x17a01cu: goto label_17a01c;
        case 0x17a020u: goto label_17a020;
        case 0x17a024u: goto label_17a024;
        case 0x17a028u: goto label_17a028;
        case 0x17a02cu: goto label_17a02c;
        case 0x17a030u: goto label_17a030;
        case 0x17a034u: goto label_17a034;
        case 0x17a038u: goto label_17a038;
        case 0x17a03cu: goto label_17a03c;
        case 0x17a040u: goto label_17a040;
        case 0x17a044u: goto label_17a044;
        case 0x17a048u: goto label_17a048;
        case 0x17a04cu: goto label_17a04c;
        case 0x17a050u: goto label_17a050;
        case 0x17a054u: goto label_17a054;
        case 0x17a058u: goto label_17a058;
        case 0x17a05cu: goto label_17a05c;
        case 0x17a060u: goto label_17a060;
        case 0x17a064u: goto label_17a064;
        case 0x17a068u: goto label_17a068;
        case 0x17a06cu: goto label_17a06c;
        case 0x17a070u: goto label_17a070;
        case 0x17a074u: goto label_17a074;
        case 0x17a078u: goto label_17a078;
        case 0x17a07cu: goto label_17a07c;
        case 0x17a080u: goto label_17a080;
        case 0x17a084u: goto label_17a084;
        case 0x17a088u: goto label_17a088;
        case 0x17a08cu: goto label_17a08c;
        case 0x17a090u: goto label_17a090;
        case 0x17a094u: goto label_17a094;
        case 0x17a098u: goto label_17a098;
        case 0x17a09cu: goto label_17a09c;
        case 0x17a0a0u: goto label_17a0a0;
        case 0x17a0a4u: goto label_17a0a4;
        case 0x17a0a8u: goto label_17a0a8;
        case 0x17a0acu: goto label_17a0ac;
        case 0x17a0b0u: goto label_17a0b0;
        case 0x17a0b4u: goto label_17a0b4;
        case 0x17a0b8u: goto label_17a0b8;
        case 0x17a0bcu: goto label_17a0bc;
        case 0x17a0c0u: goto label_17a0c0;
        case 0x17a0c4u: goto label_17a0c4;
        case 0x17a0c8u: goto label_17a0c8;
        case 0x17a0ccu: goto label_17a0cc;
        case 0x17a0d0u: goto label_17a0d0;
        case 0x17a0d4u: goto label_17a0d4;
        case 0x17a0d8u: goto label_17a0d8;
        case 0x17a0dcu: goto label_17a0dc;
        case 0x17a0e0u: goto label_17a0e0;
        case 0x17a0e4u: goto label_17a0e4;
        case 0x17a0e8u: goto label_17a0e8;
        case 0x17a0ecu: goto label_17a0ec;
        case 0x17a0f0u: goto label_17a0f0;
        case 0x17a0f4u: goto label_17a0f4;
        case 0x17a0f8u: goto label_17a0f8;
        case 0x17a0fcu: goto label_17a0fc;
        case 0x17a100u: goto label_17a100;
        case 0x17a104u: goto label_17a104;
        default: break;
    }

    ctx->pc = 0x179fd0u;

label_179fd0:
    // 0x179fd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x179fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_179fd4:
    // 0x179fd4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x179fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_179fd8:
    // 0x179fd8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x179fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_179fdc:
    // 0x179fdc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x179fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_179fe0:
    // 0x179fe0: 0xc06ddac  jal         func_1B76B0
label_179fe4:
    if (ctx->pc == 0x179FE4u) {
        ctx->pc = 0x179FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179FE0u;
        // 0x179fe4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179FE8u;
        goto label_179fe8;
    }
    ctx->pc = 0x179FE0u;
    SET_GPR_U32(ctx, 31, 0x179FE8u);
    ctx->pc = 0x179FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179FE0u;
    // 0x179fe4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x179FE0u, 0x179FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179FE8u;
label_179fe8:
    // 0x179fe8: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
label_179fec:
    if (ctx->pc == 0x179FECu) {
        ctx->pc = 0x179FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179FE8u;
        // 0x179fec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179FF0u;
        goto label_179ff0;
    }
    ctx->pc = 0x179FE8u;
    {
        const bool branch_taken_0x179fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179fe8) {
            ctx->pc = 0x179FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179FE8u;
            // 0x179fec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A0F8u;
            goto label_17a0f8;
        }
    }
    ctx->pc = 0x179FF0u;
label_179ff0:
    // 0x179ff0: 0x9e0205b0  lwu         $v0, 0x5B0($s0)
    ctx->pc = 0x179ff0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1456)));
label_179ff4:
    // 0x179ff4: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x179ff4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
label_179ff8:
    // 0x179ff8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x179ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_179ffc:
    // 0x179ffc: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_17a000:
    if (ctx->pc == 0x17A000u) {
        ctx->pc = 0x17A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179FFCu;
        // 0x17a000: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A004u;
        goto label_17a004;
    }
    ctx->pc = 0x179FFCu;
    {
        const bool branch_taken_0x179ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179FFCu;
        // 0x17a000: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ffc) {
            ctx->pc = 0x17A0ECu;
            goto label_17a0ec;
        }
    }
    ctx->pc = 0x17A004u;
label_17a004:
    // 0x17a004: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x17a004u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_17a008:
    // 0x17a008: 0x24471918  addiu       $a3, $v0, 0x1918
    ctx->pc = 0x17a008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 6424));
label_17a00c:
    // 0x17a00c: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x17a00cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_17a010:
    // 0x17a010: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x17a010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_17a014:
    // 0x17a014: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x17a014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_17a018:
    // 0x17a018: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x17a018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_17a01c:
    // 0x17a01c: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x17a01cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_17a020:
    // 0x17a020: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x17a020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_17a024:
    // 0x17a024: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x17a024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17a028:
    // 0x17a028: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x17a028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17a02c:
    // 0x17a02c: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x17a02cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17a030:
    // 0x17a030: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x17a030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17a034:
    // 0x17a034: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x17a034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17a038:
    // 0x17a038: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x17a038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17a03c:
    // 0x17a03c: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x17a03cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_17a040:
    // 0x17a040: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x17a040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_17a044:
    // 0x17a044: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x17a044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17a048:
    // 0x17a048: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x17a048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17a04c:
    // 0x17a04c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_17a050:
    // 0x17a050: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x17a050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_17a054:
    // 0x17a054: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x17a054u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_17a058:
    // 0x17a058: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x17a058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_17a05c:
    // 0x17a05c: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x17a05cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_17a060:
    // 0x17a060: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_17a064:
    if (ctx->pc == 0x17A064u) {
        ctx->pc = 0x17A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A060u;
        // 0x17a064: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A068u;
        goto label_17a068;
    }
    ctx->pc = 0x17A060u;
    {
        const bool branch_taken_0x17a060 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x17A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A060u;
        // 0x17a064: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a060) {
            ctx->pc = 0x17A094u;
            goto label_17a094;
        }
    }
    ctx->pc = 0x17A068u;
label_17a068:
    // 0x17a068: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x17a068u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_17a06c:
    // 0x17a06c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x17a06cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_17a070:
    // 0x17a070: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x17a070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_17a074:
    // 0x17a074: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x17a074u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_17a078:
    // 0x17a078: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x17a078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_17a07c:
    // 0x17a07c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17a080:
    // 0x17a080: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x17a080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_17a084:
    // 0x17a084: 0xdc91fff8  ld          $s1, -0x8($a0)
    ctx->pc = 0x17a084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_17a088:
    // 0x17a088: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x17a088u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_17a08c:
    // 0x17a08c: 0x10000004  b           . + 4 + (0x4 << 2)
label_17a090:
    if (ctx->pc == 0x17A090u) {
        ctx->pc = 0x17A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A08Cu;
        // 0x17a090: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A094u;
        goto label_17a094;
    }
    ctx->pc = 0x17A08Cu;
    {
        const bool branch_taken_0x17a08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A08Cu;
        // 0x17a090: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a08c) {
            ctx->pc = 0x17A0A0u;
            goto label_17a0a0;
        }
    }
    ctx->pc = 0x17A094u;
label_17a094:
    // 0x17a094: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17a098:
    // 0x17a098: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x17a098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17a09c:
    // 0x17a09c: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x17a09cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_17a0a0:
    // 0x17a0a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_17a0a4:
    // 0x17a0a4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x17a0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_17a0a8:
    // 0x17a0a8: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_17a0ac:
    if (ctx->pc == 0x17A0ACu) {
        ctx->pc = 0x17A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0A8u;
        // 0x17a0ac: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A0B0u;
        goto label_17a0b0;
    }
    ctx->pc = 0x17A0A8u;
    {
        const bool branch_taken_0x17a0a8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x17A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0A8u;
        // 0x17a0ac: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a0a8) {
            ctx->pc = 0x17A0C4u;
            goto label_17a0c4;
        }
    }
    ctx->pc = 0x17A0B0u;
label_17a0b0:
    // 0x17a0b0: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x17a0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_17a0b4:
    // 0x17a0b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x17a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_17a0b8:
    // 0x17a0b8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x17a0b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_17a0bc:
    // 0x17a0bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_17a0c0:
    if (ctx->pc == 0x17A0C0u) {
        ctx->pc = 0x17A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0BCu;
        // 0x17a0c0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A0C4u;
        goto label_17a0c4;
    }
    ctx->pc = 0x17A0BCu;
    {
        const bool branch_taken_0x17a0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0BCu;
        // 0x17a0c0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a0bc) {
            ctx->pc = 0x17A0C8u;
            goto label_17a0c8;
        }
    }
    ctx->pc = 0x17A0C4u;
label_17a0c4:
    // 0x17a0c4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x17a0c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17a0c8:
    // 0x17a0c8: 0xc0f809  jalr        $a2
label_17a0cc:
    if (ctx->pc == 0x17A0CCu) {
        ctx->pc = 0x17A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0C8u;
        // 0x17a0cc: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A0D0u;
        goto label_17a0d0;
    }
    ctx->pc = 0x17A0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x17A0D0u);
        ctx->pc = 0x17A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0C8u;
        // 0x17a0cc: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A0C8u, 0x17A0D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A0D0u;
label_17a0d0:
    // 0x17a0d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17a0d4:
    // 0x17a0d4: 0xc0aa1fa  jal         func_2A87E8
label_17a0d8:
    if (ctx->pc == 0x17A0D8u) {
        ctx->pc = 0x17A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0D4u;
        // 0x17a0d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A0DCu;
        goto label_17a0dc;
    }
    ctx->pc = 0x17A0D4u;
    SET_GPR_U32(ctx, 31, 0x17A0DCu);
    ctx->pc = 0x17A0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A0D4u;
    // 0x17a0d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x17A0D4u, 0x17A0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A0DCu;
label_17a0dc:
    // 0x17a0dc: 0xc06ddb6  jal         func_1B76D8
label_17a0e0:
    if (ctx->pc == 0x17A0E0u) {
        ctx->pc = 0x17A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0DCu;
        // 0x17a0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A0E4u;
        goto label_17a0e4;
    }
    ctx->pc = 0x17A0DCu;
    SET_GPR_U32(ctx, 31, 0x17A0E4u);
    ctx->pc = 0x17A0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A0DCu;
    // 0x17a0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x17A0DCu, 0x17A0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A0E4u;
label_17a0e4:
    // 0x17a0e4: 0x10000004  b           . + 4 + (0x4 << 2)
label_17a0e8:
    if (ctx->pc == 0x17A0E8u) {
        ctx->pc = 0x17A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0E4u;
        // 0x17a0e8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A0ECu;
        goto label_17a0ec;
    }
    ctx->pc = 0x17A0E4u;
    {
        const bool branch_taken_0x17a0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0E4u;
        // 0x17a0e8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a0e4) {
            ctx->pc = 0x17A0F8u;
            goto label_17a0f8;
        }
    }
    ctx->pc = 0x17A0ECu;
label_17a0ec:
    // 0x17a0ec: 0xc071f8c  jal         func_1C7E30
label_17a0f0:
    if (ctx->pc == 0x17A0F0u) {
        ctx->pc = 0x17A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0ECu;
        // 0x17a0f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A0F4u;
        goto label_17a0f4;
    }
    ctx->pc = 0x17A0ECu;
    SET_GPR_U32(ctx, 31, 0x17A0F4u);
    ctx->pc = 0x17A0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A0ECu;
    // 0x17a0f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E30u, 0x17A0ECu, 0x17A0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A0F4u;
label_17a0f4:
    // 0x17a0f4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17a0f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17a0f8:
    // 0x17a0f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17a0f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17a0fc:
    // 0x17a0fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17a0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17a100:
    // 0x17a100: 0x3e00008  jr          $ra
label_17a104:
    if (ctx->pc == 0x17A104u) {
        ctx->pc = 0x17A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A100u;
        // 0x17a104: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A108u;
        goto label_fallthrough_0x17a100;
    }
    ctx->pc = 0x17A100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A100u;
        // 0x17a104: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17a100:
    ctx->pc = 0x17A108u;
}
