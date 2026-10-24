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

// Function: UpdateStateTableWithPendingEntry
// Address: 0x28a8d0 - 0x28a9e8
void UpdateStateTableWithPendingEntry_0x28a8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateStateTableWithPendingEntry_0x28a8d0");
#endif

    switch (ctx->pc) {
        case 0x28a8d0u: goto label_28a8d0;
        case 0x28a8d4u: goto label_28a8d4;
        case 0x28a8d8u: goto label_28a8d8;
        case 0x28a8dcu: goto label_28a8dc;
        case 0x28a8e0u: goto label_28a8e0;
        case 0x28a8e4u: goto label_28a8e4;
        case 0x28a8e8u: goto label_28a8e8;
        case 0x28a8ecu: goto label_28a8ec;
        case 0x28a8f0u: goto label_28a8f0;
        case 0x28a8f4u: goto label_28a8f4;
        case 0x28a8f8u: goto label_28a8f8;
        case 0x28a8fcu: goto label_28a8fc;
        case 0x28a900u: goto label_28a900;
        case 0x28a904u: goto label_28a904;
        case 0x28a908u: goto label_28a908;
        case 0x28a90cu: goto label_28a90c;
        case 0x28a910u: goto label_28a910;
        case 0x28a914u: goto label_28a914;
        case 0x28a918u: goto label_28a918;
        case 0x28a91cu: goto label_28a91c;
        case 0x28a920u: goto label_28a920;
        case 0x28a924u: goto label_28a924;
        case 0x28a928u: goto label_28a928;
        case 0x28a92cu: goto label_28a92c;
        case 0x28a930u: goto label_28a930;
        case 0x28a934u: goto label_28a934;
        case 0x28a938u: goto label_28a938;
        case 0x28a93cu: goto label_28a93c;
        case 0x28a940u: goto label_28a940;
        case 0x28a944u: goto label_28a944;
        case 0x28a948u: goto label_28a948;
        case 0x28a94cu: goto label_28a94c;
        case 0x28a950u: goto label_28a950;
        case 0x28a954u: goto label_28a954;
        case 0x28a958u: goto label_28a958;
        case 0x28a95cu: goto label_28a95c;
        case 0x28a960u: goto label_28a960;
        case 0x28a964u: goto label_28a964;
        case 0x28a968u: goto label_28a968;
        case 0x28a96cu: goto label_28a96c;
        case 0x28a970u: goto label_28a970;
        case 0x28a974u: goto label_28a974;
        case 0x28a978u: goto label_28a978;
        case 0x28a97cu: goto label_28a97c;
        case 0x28a980u: goto label_28a980;
        case 0x28a984u: goto label_28a984;
        case 0x28a988u: goto label_28a988;
        case 0x28a98cu: goto label_28a98c;
        case 0x28a990u: goto label_28a990;
        case 0x28a994u: goto label_28a994;
        case 0x28a998u: goto label_28a998;
        case 0x28a99cu: goto label_28a99c;
        case 0x28a9a0u: goto label_28a9a0;
        case 0x28a9a4u: goto label_28a9a4;
        case 0x28a9a8u: goto label_28a9a8;
        case 0x28a9acu: goto label_28a9ac;
        case 0x28a9b0u: goto label_28a9b0;
        case 0x28a9b4u: goto label_28a9b4;
        case 0x28a9b8u: goto label_28a9b8;
        case 0x28a9bcu: goto label_28a9bc;
        case 0x28a9c0u: goto label_28a9c0;
        case 0x28a9c4u: goto label_28a9c4;
        case 0x28a9c8u: goto label_28a9c8;
        case 0x28a9ccu: goto label_28a9cc;
        case 0x28a9d0u: goto label_28a9d0;
        case 0x28a9d4u: goto label_28a9d4;
        case 0x28a9d8u: goto label_28a9d8;
        case 0x28a9dcu: goto label_28a9dc;
        case 0x28a9e0u: goto label_28a9e0;
        case 0x28a9e4u: goto label_28a9e4;
        default: break;
    }

    ctx->pc = 0x28a8d0u;

label_28a8d0:
    // 0x28a8d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28a8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_28a8d4:
    // 0x28a8d4: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x28a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_28a8d8:
    // 0x28a8d8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x28a8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_28a8dc:
    // 0x28a8dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28a8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_28a8e0:
    // 0x28a8e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28a8e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28a8e4:
    // 0x28a8e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28a8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_28a8e8:
    // 0x28a8e8: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x28a8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_28a8ec:
    // 0x28a8ec: 0x24478e00  addiu       $a3, $v0, -0x7200
    ctx->pc = 0x28a8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938112));
label_28a8f0:
    // 0x28a8f0: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x28a8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_28a8f4:
    // 0x28a8f4: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x28a8f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_28a8f8:
    // 0x28a8f8: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x28a8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_28a8fc:
    // 0x28a8fc: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x28a8fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_28a900:
    // 0x28a900: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x28a900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28a904:
    // 0x28a904: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x28a904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28a908:
    // 0x28a908: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x28a908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28a90c:
    // 0x28a90c: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x28a90cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28a910:
    // 0x28a910: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_28a914:
    if (ctx->pc == 0x28A914u) {
        ctx->pc = 0x28A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A910u;
        // 0x28a914: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A918u;
        goto label_28a918;
    }
    ctx->pc = 0x28A910u;
    {
        const bool branch_taken_0x28a910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a910) {
            ctx->pc = 0x28A914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A910u;
            // 0x28a914: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A940u;
            goto label_28a940;
        }
    }
    ctx->pc = 0x28A918u;
label_28a918:
    // 0x28a918: 0xc070924  jal         func_1C2490
label_28a91c:
    if (ctx->pc == 0x28A91Cu) {
        ctx->pc = 0x28A920u;
        goto label_28a920;
    }
    ctx->pc = 0x28A918u;
    SET_GPR_U32(ctx, 31, 0x28A920u);
    ctx->pc = 0x1C2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2490u, 0x28A918u, 0x28A920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A920u;
label_28a920:
    // 0x28a920: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_28a924:
    if (ctx->pc == 0x28A924u) {
        ctx->pc = 0x28A928u;
        goto label_28a928;
    }
    ctx->pc = 0x28A920u;
    {
        const bool branch_taken_0x28a920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a920) {
            ctx->pc = 0x28A930u;
            goto label_28a930;
        }
    }
    ctx->pc = 0x28A928u;
label_28a928:
    // 0x28a928: 0x10000003  b           . + 4 + (0x3 << 2)
label_28a92c:
    if (ctx->pc == 0x28A92Cu) {
        ctx->pc = 0x28A92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A928u;
        // 0x28a92c: 0xae0015b0  sw          $zero, 0x15B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A930u;
        goto label_28a930;
    }
    ctx->pc = 0x28A928u;
    {
        const bool branch_taken_0x28a928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A928u;
        // 0x28a92c: 0xae0015b0  sw          $zero, 0x15B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a928) {
            ctx->pc = 0x28A938u;
            goto label_28a938;
        }
    }
    ctx->pc = 0x28A930u;
label_28a930:
    // 0x28a930: 0xc0708dc  jal         func_1C2370
label_28a934:
    if (ctx->pc == 0x28A934u) {
        ctx->pc = 0x28A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A930u;
        // 0x28a934: 0x8e0415b0  lw          $a0, 0x15B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A938u;
        goto label_28a938;
    }
    ctx->pc = 0x28A930u;
    SET_GPR_U32(ctx, 31, 0x28A938u);
    ctx->pc = 0x28A934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A930u;
    // 0x28a934: 0x8e0415b0  lw          $a0, 0x15B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2370u, 0x28A930u, 0x28A938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A938u;
label_28a938:
    // 0x28a938: 0xae0015b0  sw          $zero, 0x15B0($s0)
    ctx->pc = 0x28a938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 0));
label_28a93c:
    // 0x28a93c: 0x920202f5  lbu         $v0, 0x2F5($s0)
    ctx->pc = 0x28a93cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_28a940:
    // 0x28a940: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x28a940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_28a944:
    // 0x28a944: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_28a948:
    if (ctx->pc == 0x28A948u) {
        ctx->pc = 0x28A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A944u;
        // 0x28a948: 0xa20002f5  sb          $zero, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A94Cu;
        goto label_28a94c;
    }
    ctx->pc = 0x28A944u;
    {
        const bool branch_taken_0x28a944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a944) {
            ctx->pc = 0x28A948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A944u;
            // 0x28a948: 0xa20002f5  sb          $zero, 0x2F5($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A94Cu;
            goto label_28a94c;
        }
    }
    ctx->pc = 0x28A94Cu;
label_28a94c:
    // 0x28a94c: 0x920202f5  lbu         $v0, 0x2F5($s0)
    ctx->pc = 0x28a94cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_28a950:
    // 0x28a950: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x28a950u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_28a954:
    // 0x28a954: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x28a954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28a958:
    // 0x28a958: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x28a958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_28a95c:
    // 0x28a95c: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x28a95cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_28a960:
    // 0x28a960: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28a960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_28a964:
    // 0x28a964: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x28a964u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_28a968:
    // 0x28a968: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_28a96c:
    if (ctx->pc == 0x28A96Cu) {
        ctx->pc = 0x28A96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A968u;
        // 0x28a96c: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A970u;
        goto label_28a970;
    }
    ctx->pc = 0x28A968u;
    {
        const bool branch_taken_0x28a968 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x28A96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A968u;
        // 0x28a96c: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a968) {
            ctx->pc = 0x28A99Cu;
            goto label_28a99c;
        }
    }
    ctx->pc = 0x28A970u;
label_28a970:
    // 0x28a970: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x28a970u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_28a974:
    // 0x28a974: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x28a974u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_28a978:
    // 0x28a978: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28a978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_28a97c:
    // 0x28a97c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x28a97cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_28a980:
    // 0x28a980: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x28a980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_28a984:
    // 0x28a984: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28a984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28a988:
    // 0x28a988: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x28a988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_28a98c:
    // 0x28a98c: 0xdc91fff8  ld          $s1, -0x8($a0)
    ctx->pc = 0x28a98cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_28a990:
    // 0x28a990: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x28a990u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_28a994:
    // 0x28a994: 0x10000004  b           . + 4 + (0x4 << 2)
label_28a998:
    if (ctx->pc == 0x28A998u) {
        ctx->pc = 0x28A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A994u;
        // 0x28a998: 0x710c0  sll         $v0, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A99Cu;
        goto label_28a99c;
    }
    ctx->pc = 0x28A994u;
    {
        const bool branch_taken_0x28a994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A994u;
        // 0x28a998: 0x710c0  sll         $v0, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a994) {
            ctx->pc = 0x28A9A8u;
            goto label_28a9a8;
        }
    }
    ctx->pc = 0x28A99Cu;
label_28a99c:
    // 0x28a99c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x28a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_28a9a0:
    // 0x28a9a0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x28a9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28a9a4:
    // 0x28a9a4: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x28a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_28a9a8:
    // 0x28a9a8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x28a9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_28a9ac:
    // 0x28a9ac: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_28a9b0:
    if (ctx->pc == 0x28A9B0u) {
        ctx->pc = 0x28A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9ACu;
        // 0x28a9b0: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A9B4u;
        goto label_28a9b4;
    }
    ctx->pc = 0x28A9ACu;
    {
        const bool branch_taken_0x28a9ac = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x28A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9ACu;
        // 0x28a9b0: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a9ac) {
            ctx->pc = 0x28A9C8u;
            goto label_28a9c8;
        }
    }
    ctx->pc = 0x28A9B4u;
label_28a9b4:
    // 0x28a9b4: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x28a9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_28a9b8:
    // 0x28a9b8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_28a9bc:
    // 0x28a9bc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x28a9bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_28a9c0:
    // 0x28a9c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_28a9c4:
    if (ctx->pc == 0x28A9C4u) {
        ctx->pc = 0x28A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9C0u;
        // 0x28a9c4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A9C8u;
        goto label_28a9c8;
    }
    ctx->pc = 0x28A9C0u;
    {
        const bool branch_taken_0x28a9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9C0u;
        // 0x28a9c4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a9c0) {
            ctx->pc = 0x28A9CCu;
            goto label_28a9cc;
        }
    }
    ctx->pc = 0x28A9C8u;
label_28a9c8:
    // 0x28a9c8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x28a9c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28a9cc:
    // 0x28a9cc: 0xc0f809  jalr        $a2
label_28a9d0:
    if (ctx->pc == 0x28A9D0u) {
        ctx->pc = 0x28A9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9CCu;
        // 0x28a9d0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A9D4u;
        goto label_28a9d4;
    }
    ctx->pc = 0x28A9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x28A9D4u);
        ctx->pc = 0x28A9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9CCu;
        // 0x28a9d0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A9CCu, 0x28A9D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28A9D4u;
label_28a9d4:
    // 0x28a9d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28a9d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28a9d8:
    // 0x28a9d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28a9d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28a9dc:
    // 0x28a9dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28a9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28a9e0:
    // 0x28a9e0: 0x3e00008  jr          $ra
label_28a9e4:
    if (ctx->pc == 0x28A9E4u) {
        ctx->pc = 0x28A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9E0u;
        // 0x28a9e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A9E8u;
        goto label_fallthrough_0x28a9e0;
    }
    ctx->pc = 0x28A9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9E0u;
        // 0x28a9e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28a9e0:
    ctx->pc = 0x28A9E8u;
}
