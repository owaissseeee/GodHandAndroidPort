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

// Function: func_001FF858
// Address: 0x1ff858 - 0x1ff9c0
void func_001FF858_0x1ff858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FF858_0x1ff858");
#endif

    switch (ctx->pc) {
        case 0x1ff884u: goto label_1ff884;
        case 0x1ff8b8u: goto label_1ff8b8;
        case 0x1ff900u: goto label_1ff900;
        case 0x1ff910u: goto label_1ff910;
        case 0x1ff924u: goto label_1ff924;
        case 0x1ff950u: goto label_1ff950;
        default: break;
    }

    ctx->pc = 0x1ff858u;

    // 0x1ff858: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ff858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ff85c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ff85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff860: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ff860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ff864: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1ff864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ff868: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ff868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff86c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ff86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ff870: 0x26300019  addiu       $s0, $s1, 0x19
    ctx->pc = 0x1ff870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 25));
    // 0x1ff874: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ff874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ff878: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ff878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ff87c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1FF87Cu;
    SET_GPR_U32(ctx, 31, 0x1FF884u);
    ctx->pc = 0x1FF880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF87Cu;
    // 0x1ff880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1FF87Cu, 0x1FF884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF884u;
label_1ff884:
    // 0x1ff884: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1ff884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1ff888: 0x2466c6b0  addiu       $a2, $v1, -0x3950
    ctx->pc = 0x1ff888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952624));
    // 0x1ff88c: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x1ff88cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ff890: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x1ff890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ff894: 0xb2220020  sdl         $v0, 0x20($s1)
    ctx->pc = 0x1ff894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff898: 0xb6220019  sdr         $v0, 0x19($s1)
    ctx->pc = 0x1ff898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 25); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff89c: 0x82220019  lb          $v0, 0x19($s1)
    ctx->pc = 0x1ff89cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x1ff8a0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FF8A0u;
    {
        const bool branch_taken_0x1ff8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF8A0u;
        // 0x1ff8a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff8a0) {
            ctx->pc = 0x1FF8ECu;
            goto label_1ff8ec;
        }
    }
    ctx->pc = 0x1FF8A8u;
    // 0x1ff8a8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ff8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ff8ac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ff8acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff8b0: 0x2448f039  addiu       $t0, $v0, -0xFC7
    ctx->pc = 0x1ff8b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963257));
    // 0x1ff8b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ff8b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ff8b8:
    // 0x1ff8b8: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x1ff8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1ff8bc: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x1ff8bcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ff8c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ff8c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ff8c4: 0xa82021  addu        $a0, $a1, $t0
    ctx->pc = 0x1ff8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1ff8c8: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x1ff8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1ff8cc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1ff8ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ff8d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ff8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ff8d4: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x1ff8d4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x1ff8d8: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x1ff8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff8dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ff8e0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1ff8e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ff8e4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1FF8E4u;
    {
        const bool branch_taken_0x1ff8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF8E4u;
        // 0x1ff8e8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff8e4) {
            ctx->pc = 0x1FF8B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff8b8;
        }
    }
    ctx->pc = 0x1FF8ECu;
label_1ff8ec:
    // 0x1ff8ec: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1ff8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1ff8f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ff8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff8f4: 0x24a5c6b8  addiu       $a1, $a1, -0x3948
    ctx->pc = 0x1ff8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952632));
    // 0x1ff8f8: 0xc07fefc  jal         func_1FFBF0
    ctx->pc = 0x1FF8F8u;
    SET_GPR_U32(ctx, 31, 0x1FF900u);
    ctx->pc = 0x1FF8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF8F8u;
    // 0x1ff8fc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFBF0u, 0x1FF8F8u, 0x1FF900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF900u;
label_1ff900:
    // 0x1ff900: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1ff900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1ff904: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ff904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff908: 0xc07ff18  jal         func_1FFC60
    ctx->pc = 0x1FF908u;
    SET_GPR_U32(ctx, 31, 0x1FF910u);
    ctx->pc = 0x1FF90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF908u;
    // 0x1ff90c: 0x24a5c6c8  addiu       $a1, $a1, -0x3938 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFC60u, 0x1FF908u, 0x1FF910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF910u;
label_1ff910:
    // 0x1ff910: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ff910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff914: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ff914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff918: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1ff918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1ff91c: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x1FF91Cu;
    SET_GPR_U32(ctx, 31, 0x1FF924u);
    ctx->pc = 0x1FF920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF91Cu;
    // 0x1ff920: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x1FF91Cu, 0x1FF924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF924u;
label_1ff924:
    // 0x1ff924: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1ff924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ff928: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1ff928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1ff92c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1ff92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ff930: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ff930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ff934: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1ff934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ff938: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ff938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ff93c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ff93cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1ff940: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ff940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff944: 0x18a00014  blez        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FF944u;
    {
        const bool branch_taken_0x1ff944 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x1FF948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF944u;
        // 0x1ff948: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff944) {
            ctx->pc = 0x1FF998u;
            goto label_1ff998;
        }
    }
    ctx->pc = 0x1FF94Cu;
    // 0x1ff94c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ff94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff950:
    // 0x1ff950: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1ff950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ff954: 0x54450008  bnel        $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FF954u;
    {
        const bool branch_taken_0x1ff954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1ff954) {
            ctx->pc = 0x1FF958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF954u;
            // 0x1ff958: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF978u;
            goto label_1ff978;
        }
    }
    ctx->pc = 0x1FF95Cu;
    // 0x1ff95c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ff95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ff960: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF960u;
    {
        const bool branch_taken_0x1ff960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff960) {
            ctx->pc = 0x1FF964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF960u;
            // 0x1ff964: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF978u;
            goto label_1ff978;
        }
    }
    ctx->pc = 0x1FF968u;
    // 0x1ff968: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ff968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ff96c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ff96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ff970: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1ff970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1ff974: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ff974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ff978:
    // 0x1ff978: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ff978u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ff97c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1ff97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ff980: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ff980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ff984: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1ff984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1ff988: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1ff988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ff98c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1ff98cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ff990: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1FF990u;
    {
        const bool branch_taken_0x1ff990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF990u;
        // 0x1ff994: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff990) {
            ctx->pc = 0x1FF950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff950;
        }
    }
    ctx->pc = 0x1FF998u;
label_1ff998:
    // 0x1ff998: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ff998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ff99c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff9a0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ff9a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ff9a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ff9a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff9a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ff9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF9ACu;
        // 0x1ff9b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF9B4u;
    // 0x1ff9b4: 0x0  nop
    ctx->pc = 0x1ff9b4u;
    // NOP
    // 0x1ff9b8: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x1ff9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1ff9bc: 0x0  nop
    ctx->pc = 0x1ff9bcu;
    // NOP
    ctx->pc = 0x1ff9c0u;
}
