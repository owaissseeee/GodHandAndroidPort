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

// Function: UpdateSequenceEntry_373298
// Address: 0x373298 - 0x3733c8
void UpdateSequenceEntry_373298_0x373298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateSequenceEntry_373298_0x373298");
#endif

    switch (ctx->pc) {
        case 0x373328u: goto label_373328;
        case 0x373344u: goto label_373344;
        case 0x373398u: goto label_373398;
        case 0x3733acu: goto label_3733ac;
        default: break;
    }

    ctx->pc = 0x373298u;

    // 0x373298: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x373298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37329c: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x37329cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x3732a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3732a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3732a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3732a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3732a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3732a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3732ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3732acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3732b0: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x3732b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x3732b4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3732b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3732b8: 0xae040070  sw          $a0, 0x70($s0)
    ctx->pc = 0x3732b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
    // 0x3732bc: 0x9083000a  lbu         $v1, 0xA($a0)
    ctx->pc = 0x3732bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x3732c0: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x3732c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x3732c4: 0x9082000b  lbu         $v0, 0xB($a0)
    ctx->pc = 0x3732c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x3732c8: 0xae050078  sw          $a1, 0x78($s0)
    ctx->pc = 0x3732c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 5));
    // 0x3732cc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3732ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3732d0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3732d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x3732d4: 0x68820018  ldl         $v0, 0x18($a0)
    ctx->pc = 0x3732d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3732d8: 0x6c820011  ldr         $v0, 0x11($a0)
    ctx->pc = 0x3732d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 17); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3732dc: 0x8883001c  lwl         $v1, 0x1C($a0)
    ctx->pc = 0x3732dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 28); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x3732e0: 0x98830019  lwr         $v1, 0x19($a0)
    ctx->pc = 0x3732e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 25); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x3732e4: 0x8085001d  lb          $a1, 0x1D($a0)
    ctx->pc = 0x3732e4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
    // 0x3732e8: 0x8086001e  lb          $a2, 0x1E($a0)
    ctx->pc = 0x3732e8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x3732ec: 0xb2020063  sdl         $v0, 0x63($s0)
    ctx->pc = 0x3732ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3732f0: 0xb602005c  sdr         $v0, 0x5C($s0)
    ctx->pc = 0x3732f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3732f4: 0xaa030067  swl         $v1, 0x67($s0)
    ctx->pc = 0x3732f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 103); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3732f8: 0xba030064  swr         $v1, 0x64($s0)
    ctx->pc = 0x3732f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 100); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3732fc: 0xa2050068  sb          $a1, 0x68($s0)
    ctx->pc = 0x3732fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 5));
    // 0x373300: 0xa2060069  sb          $a2, 0x69($s0)
    ctx->pc = 0x373300u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 6));
    // 0x373304: 0x8082001f  lb          $v0, 0x1F($a0)
    ctx->pc = 0x373304u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 31)));
    // 0x373308: 0xa202006a  sb          $v0, 0x6A($s0)
    ctx->pc = 0x373308u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 2));
    // 0x37330c: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x37330cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x373310: 0x90430010  lbu         $v1, 0x10($v0)
    ctx->pc = 0x373310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x373314: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x373314u;
    {
        const bool branch_taken_0x373314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x373318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373314u;
        // 0x373318: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373314) {
            ctx->pc = 0x373320u;
            goto label_373320;
        }
    }
    ctx->pc = 0x37331Cu;
    // 0x37331c: 0x8e11007c  lw          $s1, 0x7C($s0)
    ctx->pc = 0x37331cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_373320:
    // 0x373320: 0xc0dcec8  jal         func_373B20
    ctx->pc = 0x373320u;
    SET_GPR_U32(ctx, 31, 0x373328u);
    ctx->pc = 0x373324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373320u;
    // 0x373324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B20u, 0x373320u, 0x373328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373328u;
label_373328:
    // 0x373328: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x373328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37332c: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x37332Cu;
    {
        const bool branch_taken_0x37332c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x37332c) {
            ctx->pc = 0x373330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37332Cu;
            // 0x373330: 0x8e030070  lw          $v1, 0x70($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37334Cu;
            goto label_37334c;
        }
    }
    ctx->pc = 0x373334u;
    // 0x373334: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x373334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x373338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x373338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37333c: 0xc0dd142  jal         func_374508
    ctx->pc = 0x37333Cu;
    SET_GPR_U32(ctx, 31, 0x373344u);
    ctx->pc = 0x373340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37333Cu;
    // 0x373340: 0x8e060070  lw          $a2, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374508u, 0x37333Cu, 0x373344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373344u;
label_373344:
    // 0x373344: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x373344u;
    {
        const bool branch_taken_0x373344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373344u;
        // 0x373348: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373344) {
            ctx->pc = 0x37339Cu;
            goto label_37339c;
        }
    }
    ctx->pc = 0x37334Cu;
label_37334c:
    // 0x37334c: 0x9062000b  lbu         $v0, 0xB($v1)
    ctx->pc = 0x37334cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x373350: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x373350u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x373354: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x373354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x373358: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x373358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x37335c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37335Cu;
    {
        const bool branch_taken_0x37335c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x373360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37335Cu;
        // 0x373360: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37335c) {
            ctx->pc = 0x373370u;
            goto label_373370;
        }
    }
    ctx->pc = 0x373364u;
    // 0x373364: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x373364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x373368: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x373368u;
    {
        const bool branch_taken_0x373368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373368u;
        // 0x37336c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373368) {
            ctx->pc = 0x373384u;
            goto label_373384;
        }
    }
    ctx->pc = 0x373370u;
label_373370:
    // 0x373370: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x373370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x373374: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x373374u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373378: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x373378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x37337c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x37337cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x373380: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x373380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_373384:
    // 0x373384: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x373384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x373388: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x373388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37338c: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x37338cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x373390: 0xc0dcfce  jal         func_373F38
    ctx->pc = 0x373390u;
    SET_GPR_U32(ctx, 31, 0x373398u);
    ctx->pc = 0x373394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373390u;
    // 0x373394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373F38u, 0x373390u, 0x373398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373398u;
label_373398:
    // 0x373398: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x373398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37339c:
    // 0x37339c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37339Cu;
    {
        const bool branch_taken_0x37339c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3733A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37339Cu;
        // 0x3733a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37339c) {
            ctx->pc = 0x3733B0u;
            goto label_3733b0;
        }
    }
    ctx->pc = 0x3733A4u;
    // 0x3733a4: 0xc0dccf2  jal         func_3733C8
    ctx->pc = 0x3733A4u;
    SET_GPR_U32(ctx, 31, 0x3733ACu);
    ctx->pc = 0x3733A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3733A4u;
    // 0x3733a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3733C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3733C8u, 0x3733A4u, 0x3733ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3733ACu;
label_3733ac:
    // 0x3733ac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3733acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3733b0:
    // 0x3733b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3733b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3733b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3733b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3733b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3733b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3733bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3733BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3733C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3733BCu;
        // 0x3733c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3733BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3733C4u;
    // 0x3733c4: 0x0  nop
    ctx->pc = 0x3733c4u;
    // NOP
    ctx->pc = 0x3733c8u;
}
