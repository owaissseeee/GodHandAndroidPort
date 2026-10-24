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

// Function: func_0033B0F0
// Address: 0x33b0f0 - 0x33b200
void func_0033B0F0_0x33b0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033B0F0_0x33b0f0");
#endif

    switch (ctx->pc) {
        case 0x33b0f0u: goto label_33b0f0;
        case 0x33b0f4u: goto label_33b0f4;
        case 0x33b0f8u: goto label_33b0f8;
        case 0x33b0fcu: goto label_33b0fc;
        case 0x33b100u: goto label_33b100;
        case 0x33b104u: goto label_33b104;
        case 0x33b108u: goto label_33b108;
        case 0x33b10cu: goto label_33b10c;
        case 0x33b110u: goto label_33b110;
        case 0x33b114u: goto label_33b114;
        case 0x33b118u: goto label_33b118;
        case 0x33b11cu: goto label_33b11c;
        case 0x33b120u: goto label_33b120;
        case 0x33b124u: goto label_33b124;
        case 0x33b128u: goto label_33b128;
        case 0x33b12cu: goto label_33b12c;
        case 0x33b130u: goto label_33b130;
        case 0x33b134u: goto label_33b134;
        case 0x33b138u: goto label_33b138;
        case 0x33b13cu: goto label_33b13c;
        case 0x33b140u: goto label_33b140;
        case 0x33b144u: goto label_33b144;
        case 0x33b148u: goto label_33b148;
        case 0x33b14cu: goto label_33b14c;
        case 0x33b150u: goto label_33b150;
        case 0x33b154u: goto label_33b154;
        case 0x33b158u: goto label_33b158;
        case 0x33b15cu: goto label_33b15c;
        case 0x33b160u: goto label_33b160;
        case 0x33b164u: goto label_33b164;
        case 0x33b168u: goto label_33b168;
        case 0x33b16cu: goto label_33b16c;
        case 0x33b170u: goto label_33b170;
        case 0x33b174u: goto label_33b174;
        case 0x33b178u: goto label_33b178;
        case 0x33b17cu: goto label_33b17c;
        case 0x33b180u: goto label_33b180;
        case 0x33b184u: goto label_33b184;
        case 0x33b188u: goto label_33b188;
        case 0x33b18cu: goto label_33b18c;
        case 0x33b190u: goto label_33b190;
        case 0x33b194u: goto label_33b194;
        case 0x33b198u: goto label_33b198;
        case 0x33b19cu: goto label_33b19c;
        case 0x33b1a0u: goto label_33b1a0;
        case 0x33b1a4u: goto label_33b1a4;
        case 0x33b1a8u: goto label_33b1a8;
        case 0x33b1acu: goto label_33b1ac;
        case 0x33b1b0u: goto label_33b1b0;
        case 0x33b1b4u: goto label_33b1b4;
        case 0x33b1b8u: goto label_33b1b8;
        case 0x33b1bcu: goto label_33b1bc;
        case 0x33b1c0u: goto label_33b1c0;
        case 0x33b1c4u: goto label_33b1c4;
        case 0x33b1c8u: goto label_33b1c8;
        case 0x33b1ccu: goto label_33b1cc;
        case 0x33b1d0u: goto label_33b1d0;
        case 0x33b1d4u: goto label_33b1d4;
        case 0x33b1d8u: goto label_33b1d8;
        case 0x33b1dcu: goto label_33b1dc;
        case 0x33b1e0u: goto label_33b1e0;
        case 0x33b1e4u: goto label_33b1e4;
        case 0x33b1e8u: goto label_33b1e8;
        case 0x33b1ecu: goto label_33b1ec;
        case 0x33b1f0u: goto label_33b1f0;
        case 0x33b1f4u: goto label_33b1f4;
        case 0x33b1f8u: goto label_33b1f8;
        case 0x33b1fcu: goto label_33b1fc;
        default: break;
    }

    ctx->pc = 0x33b0f0u;

label_33b0f0:
    // 0x33b0f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x33b0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_33b0f4:
    // 0x33b0f4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x33b0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_33b0f8:
    // 0x33b0f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x33b0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_33b0fc:
    // 0x33b0fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x33b0fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33b100:
    // 0x33b100: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x33b100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_33b104:
    // 0x33b104: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x33b104u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33b108:
    // 0x33b108: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x33b108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_33b10c:
    // 0x33b10c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x33b10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_33b110:
    // 0x33b110: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x33b110u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33b114:
    // 0x33b114: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x33b114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_33b118:
    // 0x33b118: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x33b118u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33b11c:
    // 0x33b11c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x33b11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_33b120:
    // 0x33b120: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x33b120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_33b124:
    // 0x33b124: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x33b124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_33b128:
    // 0x33b128: 0xc0ce27e  jal         func_3389F8
label_33b12c:
    if (ctx->pc == 0x33B12Cu) {
        ctx->pc = 0x33B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B128u;
        // 0x33b12c: 0x26d50010  addiu       $s5, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B130u;
        goto label_33b130;
    }
    ctx->pc = 0x33B128u;
    SET_GPR_U32(ctx, 31, 0x33B130u);
    ctx->pc = 0x33B12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B128u;
    // 0x33b12c: 0x26d50010  addiu       $s5, $s6, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x33B128u, 0x33B130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B130u;
label_33b130:
    // 0x33b130: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33b130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_33b134:
    // 0x33b134: 0x24518de8  addiu       $s1, $v0, -0x7218
    ctx->pc = 0x33b134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938088));
label_33b138:
    // 0x33b138: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x33b138u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_33b13c:
    // 0x33b13c: 0x5457001f  bnel        $v0, $s7, . + 4 + (0x1F << 2)
label_33b140:
    if (ctx->pc == 0x33B140u) {
        ctx->pc = 0x33B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B13Cu;
        // 0x33b140: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B144u;
        goto label_33b144;
    }
    ctx->pc = 0x33B13Cu;
    {
        const bool branch_taken_0x33b13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x33b13c) {
            ctx->pc = 0x33B140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B13Cu;
            // 0x33b140: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B1BCu;
            goto label_33b1bc;
        }
    }
    ctx->pc = 0x33B144u;
label_33b144:
    // 0x33b144: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x33b144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_33b148:
    // 0x33b148: 0x24140080  addiu       $s4, $zero, 0x80
    ctx->pc = 0x33b148u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_33b14c:
    // 0x33b14c: 0x1000000e  b           . + 4 + (0xE << 2)
label_33b150:
    if (ctx->pc == 0x33B150u) {
        ctx->pc = 0x33B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B14Cu;
        // 0x33b150: 0x558021  addu        $s0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B154u;
        goto label_33b154;
    }
    ctx->pc = 0x33B14Cu;
    {
        const bool branch_taken_0x33b14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B14Cu;
        // 0x33b150: 0x558021  addu        $s0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b14c) {
            ctx->pc = 0x33B188u;
            goto label_33b188;
        }
    }
    ctx->pc = 0x33B154u;
label_33b154:
    // 0x33b154: 0x0  nop
    ctx->pc = 0x33b154u;
    // NOP
label_33b158:
    // 0x33b158: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x33b158u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_33b15c:
    // 0x33b15c: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x33b15cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_33b160:
    // 0x33b160: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x33b160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_33b164:
    // 0x33b164: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x33b164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_33b168:
    // 0x33b168: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x33b168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_33b16c:
    // 0x33b16c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x33b16cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_33b170:
    // 0x33b170: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x33b170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_33b174:
    // 0x33b174: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x33b174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_33b178:
    // 0x33b178: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x33b178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_33b17c:
    // 0x33b17c: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x33b17cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_33b180:
    // 0x33b180: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x33b180u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_33b184:
    // 0x33b184: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x33b184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_33b188:
    // 0x33b188: 0x1254000f  beq         $s2, $s4, . + 4 + (0xF << 2)
label_33b18c:
    if (ctx->pc == 0x33B18Cu) {
        ctx->pc = 0x33B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B188u;
        // 0x33b18c: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B190u;
        goto label_33b190;
    }
    ctx->pc = 0x33B188u;
    {
        const bool branch_taken_0x33b188 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        ctx->pc = 0x33B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B188u;
        // 0x33b18c: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b188) {
            ctx->pc = 0x33B1C8u;
            goto label_33b1c8;
        }
    }
    ctx->pc = 0x33B190u;
label_33b190:
    // 0x33b190: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x33b190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_33b194:
    // 0x33b194: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x33b194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_33b198:
    // 0x33b198: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x33b198u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_33b19c:
    // 0x33b19c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33b19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33b1a0:
    // 0x33b1a0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x33b1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_33b1a4:
    // 0x33b1a4: 0x40f809  jalr        $v0
label_33b1a8:
    if (ctx->pc == 0x33B1A8u) {
        ctx->pc = 0x33B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B1A4u;
        // 0x33b1a8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B1ACu;
        goto label_33b1ac;
    }
    ctx->pc = 0x33B1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33B1ACu);
        ctx->pc = 0x33B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B1A4u;
        // 0x33b1a8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B1A4u, 0x33B1ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33B1ACu;
label_33b1ac:
    // 0x33b1ac: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x33b1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_33b1b0:
    // 0x33b1b0: 0x5460ffe9  bnel        $v1, $zero, . + 4 + (-0x17 << 2)
label_33b1b4:
    if (ctx->pc == 0x33B1B4u) {
        ctx->pc = 0x33B1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B1B0u;
        // 0x33b1b4: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B1B8u;
        goto label_33b1b8;
    }
    ctx->pc = 0x33B1B0u;
    {
        const bool branch_taken_0x33b1b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b1b0) {
            ctx->pc = 0x33B1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B1B0u;
            // 0x33b1b4: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b158;
        }
    }
    ctx->pc = 0x33B1B8u;
label_33b1b8:
    // 0x33b1b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x33b1b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_33b1bc:
    // 0x33b1bc: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x33b1bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
label_33b1c0:
    // 0x33b1c0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_33b1c4:
    if (ctx->pc == 0x33B1C4u) {
        ctx->pc = 0x33B1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B1C0u;
        // 0x33b1c4: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B1C8u;
        goto label_33b1c8;
    }
    ctx->pc = 0x33B1C0u;
    {
        const bool branch_taken_0x33b1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B1C0u;
        // 0x33b1c4: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b1c0) {
            ctx->pc = 0x33B138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b138;
        }
    }
    ctx->pc = 0x33B1C8u;
label_33b1c8:
    // 0x33b1c8: 0xc0ce284  jal         func_338A10
label_33b1cc:
    if (ctx->pc == 0x33B1CCu) {
        ctx->pc = 0x33B1D0u;
        goto label_33b1d0;
    }
    ctx->pc = 0x33B1C8u;
    SET_GPR_U32(ctx, 31, 0x33B1D0u);
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x33B1C8u, 0x33B1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B1D0u;
label_33b1d0:
    // 0x33b1d0: 0xaed20000  sw          $s2, 0x0($s6)
    ctx->pc = 0x33b1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 18));
label_33b1d4:
    // 0x33b1d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x33b1d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33b1d8:
    // 0x33b1d8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x33b1d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33b1dc:
    // 0x33b1dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x33b1dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33b1e0:
    // 0x33b1e0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x33b1e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_33b1e4:
    // 0x33b1e4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x33b1e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_33b1e8:
    // 0x33b1e8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x33b1e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_33b1ec:
    // 0x33b1ec: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x33b1ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_33b1f0:
    // 0x33b1f0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x33b1f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_33b1f4:
    // 0x33b1f4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x33b1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_33b1f8:
    // 0x33b1f8: 0x3e00008  jr          $ra
label_33b1fc:
    if (ctx->pc == 0x33B1FCu) {
        ctx->pc = 0x33B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B1F8u;
        // 0x33b1fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B200u;
        goto label_fallthrough_0x33b1f8;
    }
    ctx->pc = 0x33B1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B1F8u;
        // 0x33b1fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33b1f8:
    ctx->pc = 0x33B200u;
}
