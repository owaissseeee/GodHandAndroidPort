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

// Function: SetSequenceEntry_373158
// Address: 0x373158 - 0x373298
void SetSequenceEntry_373158_0x373158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSequenceEntry_373158_0x373158");
#endif

    switch (ctx->pc) {
        case 0x3731e8u: goto label_3731e8;
        case 0x373204u: goto label_373204;
        case 0x373260u: goto label_373260;
        case 0x37327cu: goto label_37327c;
        default: break;
    }

    ctx->pc = 0x373158u;

    // 0x373158: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x373158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37315c: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x37315cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x373160: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x373160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x373164: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x373164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x373168: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x373168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37316c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37316cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373170: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x373170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x373174: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x373174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x373178: 0xae040070  sw          $a0, 0x70($s0)
    ctx->pc = 0x373178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
    // 0x37317c: 0x9083000a  lbu         $v1, 0xA($a0)
    ctx->pc = 0x37317cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x373180: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x373180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x373184: 0x9082000b  lbu         $v0, 0xB($a0)
    ctx->pc = 0x373184u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x373188: 0xae050078  sw          $a1, 0x78($s0)
    ctx->pc = 0x373188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 5));
    // 0x37318c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x37318cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x373190: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x373190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x373194: 0x68820018  ldl         $v0, 0x18($a0)
    ctx->pc = 0x373194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x373198: 0x6c820011  ldr         $v0, 0x11($a0)
    ctx->pc = 0x373198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 17); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x37319c: 0x8883001c  lwl         $v1, 0x1C($a0)
    ctx->pc = 0x37319cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 28); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x3731a0: 0x98830019  lwr         $v1, 0x19($a0)
    ctx->pc = 0x3731a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 25); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x3731a4: 0x8085001d  lb          $a1, 0x1D($a0)
    ctx->pc = 0x3731a4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
    // 0x3731a8: 0x8086001e  lb          $a2, 0x1E($a0)
    ctx->pc = 0x3731a8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x3731ac: 0xb2020063  sdl         $v0, 0x63($s0)
    ctx->pc = 0x3731acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3731b0: 0xb602005c  sdr         $v0, 0x5C($s0)
    ctx->pc = 0x3731b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3731b4: 0xaa030067  swl         $v1, 0x67($s0)
    ctx->pc = 0x3731b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 103); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3731b8: 0xba030064  swr         $v1, 0x64($s0)
    ctx->pc = 0x3731b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 100); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3731bc: 0xa2050068  sb          $a1, 0x68($s0)
    ctx->pc = 0x3731bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 5));
    // 0x3731c0: 0xa2060069  sb          $a2, 0x69($s0)
    ctx->pc = 0x3731c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 6));
    // 0x3731c4: 0x8082001f  lb          $v0, 0x1F($a0)
    ctx->pc = 0x3731c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 31)));
    // 0x3731c8: 0xa202006a  sb          $v0, 0x6A($s0)
    ctx->pc = 0x3731c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 2));
    // 0x3731cc: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x3731ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x3731d0: 0x90430010  lbu         $v1, 0x10($v0)
    ctx->pc = 0x3731d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3731d4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3731D4u;
    {
        const bool branch_taken_0x3731d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3731D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3731D4u;
        // 0x3731d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3731d4) {
            ctx->pc = 0x3731E0u;
            goto label_3731e0;
        }
    }
    ctx->pc = 0x3731DCu;
    // 0x3731dc: 0x8e11007c  lw          $s1, 0x7C($s0)
    ctx->pc = 0x3731dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_3731e0:
    // 0x3731e0: 0xc0dcec8  jal         func_373B20
    ctx->pc = 0x3731E0u;
    SET_GPR_U32(ctx, 31, 0x3731E8u);
    ctx->pc = 0x3731E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3731E0u;
    // 0x3731e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B20u, 0x3731E0u, 0x3731E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3731E8u;
label_3731e8:
    // 0x3731e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3731e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3731ec: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3731ECu;
    {
        const bool branch_taken_0x3731ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3731ec) {
            ctx->pc = 0x3731F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3731ECu;
            // 0x3731f0: 0x8e030070  lw          $v1, 0x70($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37320Cu;
            goto label_37320c;
        }
    }
    ctx->pc = 0x3731F4u;
    // 0x3731f4: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x3731f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x3731f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3731f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3731fc: 0xc0dd0d8  jal         func_374360
    ctx->pc = 0x3731FCu;
    SET_GPR_U32(ctx, 31, 0x373204u);
    ctx->pc = 0x373200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3731FCu;
    // 0x373200: 0x8e060070  lw          $a2, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374360u, 0x3731FCu, 0x373204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373204u;
label_373204:
    // 0x373204: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x373204u;
    {
        const bool branch_taken_0x373204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373204u;
        // 0x373208: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373204) {
            ctx->pc = 0x373264u;
            goto label_373264;
        }
    }
    ctx->pc = 0x37320Cu;
label_37320c:
    // 0x37320c: 0x9062000b  lbu         $v0, 0xB($v1)
    ctx->pc = 0x37320cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x373210: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x373210u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x373214: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x373214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x373218: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x373218u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x37321c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x37321Cu;
    {
        const bool branch_taken_0x37321c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37321c) {
            ctx->pc = 0x373220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37321Cu;
            // 0x373220: 0x8e03004c  lw          $v1, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x373238u;
            goto label_373238;
        }
    }
    ctx->pc = 0x373224u;
    // 0x373224: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x373224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x373228: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x373228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x37322c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x37322Cu;
    {
        const bool branch_taken_0x37322c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37322Cu;
        // 0x373230: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37322c) {
            ctx->pc = 0x37324Cu;
            goto label_37324c;
        }
    }
    ctx->pc = 0x373234u;
    // 0x373234: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x373234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_373238:
    // 0x373238: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x373238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x37323c: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x37323cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x373240: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x373240u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373244: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x373244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x373248: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x373248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
label_37324c:
    // 0x37324c: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x37324cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x373250: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x373250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373254: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x373254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x373258: 0xc0dcf64  jal         func_373D90
    ctx->pc = 0x373258u;
    SET_GPR_U32(ctx, 31, 0x373260u);
    ctx->pc = 0x37325Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373258u;
    // 0x37325c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373D90u, 0x373258u, 0x373260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373260u;
label_373260:
    // 0x373260: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x373260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_373264:
    // 0x373264: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x373264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x373268: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x373268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x37326c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37326Cu;
    {
        const bool branch_taken_0x37326c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x373270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37326Cu;
        // 0x373270: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37326c) {
            ctx->pc = 0x37327Cu;
            goto label_37327c;
        }
    }
    ctx->pc = 0x373274u;
    // 0x373274: 0xc0dccf2  jal         func_3733C8
    ctx->pc = 0x373274u;
    SET_GPR_U32(ctx, 31, 0x37327Cu);
    ctx->pc = 0x373278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373274u;
    // 0x373278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3733C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3733C8u, 0x373274u, 0x37327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37327Cu;
label_37327c:
    // 0x37327c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x37327cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373280: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x373280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373284: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x373284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37328c: 0x3e00008  jr          $ra
    ctx->pc = 0x37328Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37328Cu;
        // 0x373290: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37328Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373294u;
    // 0x373294: 0x0  nop
    ctx->pc = 0x373294u;
    // NOP
    ctx->pc = 0x373298u;
}
