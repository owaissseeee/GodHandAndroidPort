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

// Function: func_00181AE8
// Address: 0x181ae8 - 0x181c20
void func_00181AE8_0x181ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00181AE8_0x181ae8");
#endif

    switch (ctx->pc) {
        case 0x181ae8u: goto label_181ae8;
        case 0x181aecu: goto label_181aec;
        case 0x181af0u: goto label_181af0;
        case 0x181af4u: goto label_181af4;
        case 0x181af8u: goto label_181af8;
        case 0x181afcu: goto label_181afc;
        case 0x181b00u: goto label_181b00;
        case 0x181b04u: goto label_181b04;
        case 0x181b08u: goto label_181b08;
        case 0x181b0cu: goto label_181b0c;
        case 0x181b10u: goto label_181b10;
        case 0x181b14u: goto label_181b14;
        case 0x181b18u: goto label_181b18;
        case 0x181b1cu: goto label_181b1c;
        case 0x181b20u: goto label_181b20;
        case 0x181b24u: goto label_181b24;
        case 0x181b28u: goto label_181b28;
        case 0x181b2cu: goto label_181b2c;
        case 0x181b30u: goto label_181b30;
        case 0x181b34u: goto label_181b34;
        case 0x181b38u: goto label_181b38;
        case 0x181b3cu: goto label_181b3c;
        case 0x181b40u: goto label_181b40;
        case 0x181b44u: goto label_181b44;
        case 0x181b48u: goto label_181b48;
        case 0x181b4cu: goto label_181b4c;
        case 0x181b50u: goto label_181b50;
        case 0x181b54u: goto label_181b54;
        case 0x181b58u: goto label_181b58;
        case 0x181b5cu: goto label_181b5c;
        case 0x181b60u: goto label_181b60;
        case 0x181b64u: goto label_181b64;
        case 0x181b68u: goto label_181b68;
        case 0x181b6cu: goto label_181b6c;
        case 0x181b70u: goto label_181b70;
        case 0x181b74u: goto label_181b74;
        case 0x181b78u: goto label_181b78;
        case 0x181b7cu: goto label_181b7c;
        case 0x181b80u: goto label_181b80;
        case 0x181b84u: goto label_181b84;
        case 0x181b88u: goto label_181b88;
        case 0x181b8cu: goto label_181b8c;
        case 0x181b90u: goto label_181b90;
        case 0x181b94u: goto label_181b94;
        case 0x181b98u: goto label_181b98;
        case 0x181b9cu: goto label_181b9c;
        case 0x181ba0u: goto label_181ba0;
        case 0x181ba4u: goto label_181ba4;
        case 0x181ba8u: goto label_181ba8;
        case 0x181bacu: goto label_181bac;
        case 0x181bb0u: goto label_181bb0;
        case 0x181bb4u: goto label_181bb4;
        case 0x181bb8u: goto label_181bb8;
        case 0x181bbcu: goto label_181bbc;
        case 0x181bc0u: goto label_181bc0;
        case 0x181bc4u: goto label_181bc4;
        case 0x181bc8u: goto label_181bc8;
        case 0x181bccu: goto label_181bcc;
        case 0x181bd0u: goto label_181bd0;
        case 0x181bd4u: goto label_181bd4;
        case 0x181bd8u: goto label_181bd8;
        case 0x181bdcu: goto label_181bdc;
        case 0x181be0u: goto label_181be0;
        case 0x181be4u: goto label_181be4;
        case 0x181be8u: goto label_181be8;
        case 0x181becu: goto label_181bec;
        case 0x181bf0u: goto label_181bf0;
        case 0x181bf4u: goto label_181bf4;
        case 0x181bf8u: goto label_181bf8;
        case 0x181bfcu: goto label_181bfc;
        case 0x181c00u: goto label_181c00;
        case 0x181c04u: goto label_181c04;
        case 0x181c08u: goto label_181c08;
        case 0x181c0cu: goto label_181c0c;
        case 0x181c10u: goto label_181c10;
        case 0x181c14u: goto label_181c14;
        case 0x181c18u: goto label_181c18;
        case 0x181c1cu: goto label_181c1c;
        default: break;
    }

    ctx->pc = 0x181ae8u;

label_181ae8:
    // 0x181ae8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x181ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_181aec:
    // 0x181aec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x181aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_181af0:
    // 0x181af0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x181af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_181af4:
    // 0x181af4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x181af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_181af8:
    // 0x181af8: 0xc06ddac  jal         func_1B76B0
label_181afc:
    if (ctx->pc == 0x181AFCu) {
        ctx->pc = 0x181AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181AF8u;
        // 0x181afc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181B00u;
        goto label_181b00;
    }
    ctx->pc = 0x181AF8u;
    SET_GPR_U32(ctx, 31, 0x181B00u);
    ctx->pc = 0x181AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181AF8u;
    // 0x181afc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x181AF8u, 0x181B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181B00u;
label_181b00:
    // 0x181b00: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
label_181b04:
    if (ctx->pc == 0x181B04u) {
        ctx->pc = 0x181B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B00u;
        // 0x181b04: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181B08u;
        goto label_181b08;
    }
    ctx->pc = 0x181B00u;
    {
        const bool branch_taken_0x181b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181b00) {
            ctx->pc = 0x181B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181B00u;
            // 0x181b04: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181C10u;
            goto label_181c10;
        }
    }
    ctx->pc = 0x181B08u;
label_181b08:
    // 0x181b08: 0x9e0205b0  lwu         $v0, 0x5B0($s0)
    ctx->pc = 0x181b08u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1456)));
label_181b0c:
    // 0x181b0c: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x181b0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
label_181b10:
    // 0x181b10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x181b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_181b14:
    // 0x181b14: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_181b18:
    if (ctx->pc == 0x181B18u) {
        ctx->pc = 0x181B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B14u;
        // 0x181b18: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181B1Cu;
        goto label_181b1c;
    }
    ctx->pc = 0x181B14u;
    {
        const bool branch_taken_0x181b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B14u;
        // 0x181b18: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b14) {
            ctx->pc = 0x181C04u;
            goto label_181c04;
        }
    }
    ctx->pc = 0x181B1Cu;
label_181b1c:
    // 0x181b1c: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x181b1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_181b20:
    // 0x181b20: 0x24472838  addiu       $a3, $v0, 0x2838
    ctx->pc = 0x181b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 10296));
label_181b24:
    // 0x181b24: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x181b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_181b28:
    // 0x181b28: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x181b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_181b2c:
    // 0x181b2c: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x181b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_181b30:
    // 0x181b30: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x181b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_181b34:
    // 0x181b34: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x181b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_181b38:
    // 0x181b38: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x181b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_181b3c:
    // 0x181b3c: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x181b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_181b40:
    // 0x181b40: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x181b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_181b44:
    // 0x181b44: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x181b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_181b48:
    // 0x181b48: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x181b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_181b4c:
    // 0x181b4c: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x181b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_181b50:
    // 0x181b50: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x181b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_181b54:
    // 0x181b54: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x181b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_181b58:
    // 0x181b58: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x181b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_181b5c:
    // 0x181b5c: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x181b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_181b60:
    // 0x181b60: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x181b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_181b64:
    // 0x181b64: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x181b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_181b68:
    // 0x181b68: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x181b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_181b6c:
    // 0x181b6c: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x181b6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_181b70:
    // 0x181b70: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x181b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_181b74:
    // 0x181b74: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x181b74u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_181b78:
    // 0x181b78: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_181b7c:
    if (ctx->pc == 0x181B7Cu) {
        ctx->pc = 0x181B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B78u;
        // 0x181b7c: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181B80u;
        goto label_181b80;
    }
    ctx->pc = 0x181B78u;
    {
        const bool branch_taken_0x181b78 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x181B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B78u;
        // 0x181b7c: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b78) {
            ctx->pc = 0x181BACu;
            goto label_181bac;
        }
    }
    ctx->pc = 0x181B80u;
label_181b80:
    // 0x181b80: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x181b80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_181b84:
    // 0x181b84: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x181b84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_181b88:
    // 0x181b88: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x181b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_181b8c:
    // 0x181b8c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x181b8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_181b90:
    // 0x181b90: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x181b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_181b94:
    // 0x181b94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x181b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_181b98:
    // 0x181b98: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x181b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_181b9c:
    // 0x181b9c: 0xdc91fff8  ld          $s1, -0x8($a0)
    ctx->pc = 0x181b9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_181ba0:
    // 0x181ba0: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x181ba0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_181ba4:
    // 0x181ba4: 0x10000004  b           . + 4 + (0x4 << 2)
label_181ba8:
    if (ctx->pc == 0x181BA8u) {
        ctx->pc = 0x181BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181BA4u;
        // 0x181ba8: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181BACu;
        goto label_181bac;
    }
    ctx->pc = 0x181BA4u;
    {
        const bool branch_taken_0x181ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181BA4u;
        // 0x181ba8: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181ba4) {
            ctx->pc = 0x181BB8u;
            goto label_181bb8;
        }
    }
    ctx->pc = 0x181BACu;
label_181bac:
    // 0x181bac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x181bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_181bb0:
    // 0x181bb0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x181bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_181bb4:
    // 0x181bb4: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x181bb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_181bb8:
    // 0x181bb8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x181bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_181bbc:
    // 0x181bbc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x181bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_181bc0:
    // 0x181bc0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_181bc4:
    if (ctx->pc == 0x181BC4u) {
        ctx->pc = 0x181BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181BC0u;
        // 0x181bc4: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181BC8u;
        goto label_181bc8;
    }
    ctx->pc = 0x181BC0u;
    {
        const bool branch_taken_0x181bc0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x181BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181BC0u;
        // 0x181bc4: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181bc0) {
            ctx->pc = 0x181BDCu;
            goto label_181bdc;
        }
    }
    ctx->pc = 0x181BC8u;
label_181bc8:
    // 0x181bc8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x181bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_181bcc:
    // 0x181bcc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x181bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_181bd0:
    // 0x181bd0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x181bd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_181bd4:
    // 0x181bd4: 0x10000002  b           . + 4 + (0x2 << 2)
label_181bd8:
    if (ctx->pc == 0x181BD8u) {
        ctx->pc = 0x181BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181BD4u;
        // 0x181bd8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181BDCu;
        goto label_181bdc;
    }
    ctx->pc = 0x181BD4u;
    {
        const bool branch_taken_0x181bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181BD4u;
        // 0x181bd8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181bd4) {
            ctx->pc = 0x181BE0u;
            goto label_181be0;
        }
    }
    ctx->pc = 0x181BDCu;
label_181bdc:
    // 0x181bdc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x181bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_181be0:
    // 0x181be0: 0xc0f809  jalr        $a2
label_181be4:
    if (ctx->pc == 0x181BE4u) {
        ctx->pc = 0x181BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181BE0u;
        // 0x181be4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181BE8u;
        goto label_181be8;
    }
    ctx->pc = 0x181BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x181BE8u);
        ctx->pc = 0x181BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181BE0u;
        // 0x181be4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181BE0u, 0x181BE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x181BE8u;
label_181be8:
    // 0x181be8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181bec:
    // 0x181bec: 0xc0aa1fa  jal         func_2A87E8
label_181bf0:
    if (ctx->pc == 0x181BF0u) {
        ctx->pc = 0x181BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181BECu;
        // 0x181bf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181BF4u;
        goto label_181bf4;
    }
    ctx->pc = 0x181BECu;
    SET_GPR_U32(ctx, 31, 0x181BF4u);
    ctx->pc = 0x181BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181BECu;
    // 0x181bf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x181BECu, 0x181BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181BF4u;
label_181bf4:
    // 0x181bf4: 0xc06ddb6  jal         func_1B76D8
label_181bf8:
    if (ctx->pc == 0x181BF8u) {
        ctx->pc = 0x181BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181BF4u;
        // 0x181bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181BFCu;
        goto label_181bfc;
    }
    ctx->pc = 0x181BF4u;
    SET_GPR_U32(ctx, 31, 0x181BFCu);
    ctx->pc = 0x181BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181BF4u;
    // 0x181bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x181BF4u, 0x181BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181BFCu;
label_181bfc:
    // 0x181bfc: 0x10000004  b           . + 4 + (0x4 << 2)
label_181c00:
    if (ctx->pc == 0x181C00u) {
        ctx->pc = 0x181C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181BFCu;
        // 0x181c00: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181C04u;
        goto label_181c04;
    }
    ctx->pc = 0x181BFCu;
    {
        const bool branch_taken_0x181bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181BFCu;
        // 0x181c00: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181bfc) {
            ctx->pc = 0x181C10u;
            goto label_181c10;
        }
    }
    ctx->pc = 0x181C04u;
label_181c04:
    // 0x181c04: 0xc071f8c  jal         func_1C7E30
label_181c08:
    if (ctx->pc == 0x181C08u) {
        ctx->pc = 0x181C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C04u;
        // 0x181c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181C0Cu;
        goto label_181c0c;
    }
    ctx->pc = 0x181C04u;
    SET_GPR_U32(ctx, 31, 0x181C0Cu);
    ctx->pc = 0x181C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181C04u;
    // 0x181c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E30u, 0x181C04u, 0x181C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181C0Cu;
label_181c0c:
    // 0x181c0c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x181c0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_181c10:
    // 0x181c10: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x181c10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_181c14:
    // 0x181c14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x181c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_181c18:
    // 0x181c18: 0x3e00008  jr          $ra
label_181c1c:
    if (ctx->pc == 0x181C1Cu) {
        ctx->pc = 0x181C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C18u;
        // 0x181c1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181C20u;
        goto label_fallthrough_0x181c18;
    }
    ctx->pc = 0x181C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C18u;
        // 0x181c1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x181c18:
    ctx->pc = 0x181C20u;
}
