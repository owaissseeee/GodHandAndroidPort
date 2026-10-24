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

// Function: func_003336F8
// Address: 0x3336f8 - 0x333880
void func_003336F8_0x3336f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003336F8_0x3336f8");
#endif

    switch (ctx->pc) {
        case 0x333748u: goto label_333748;
        case 0x33375cu: goto label_33375c;
        case 0x33377cu: goto label_33377c;
        case 0x33378cu: goto label_33378c;
        case 0x333794u: goto label_333794;
        case 0x333798u: goto label_333798;
        case 0x3337a0u: goto label_3337a0;
        case 0x3337b0u: goto label_3337b0;
        case 0x3337b8u: goto label_3337b8;
        case 0x3337c4u: goto label_3337c4;
        case 0x3337e0u: goto label_3337e0;
        case 0x3337fcu: goto label_3337fc;
        case 0x333810u: goto label_333810;
        case 0x333824u: goto label_333824;
        case 0x333838u: goto label_333838;
        case 0x333840u: goto label_333840;
        case 0x333848u: goto label_333848;
        case 0x333850u: goto label_333850;
        case 0x333860u: goto label_333860;
        default: break;
    }

    ctx->pc = 0x3336f8u;

    // 0x3336f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3336f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3336fc: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x3336fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x333700: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x333700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x333704: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x333704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333708: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x333708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x33370c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33370cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333710: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x333710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x333714: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x333714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x333718: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x333718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x33371c: 0x246544f0  addiu       $a1, $v1, 0x44F0
    ctx->pc = 0x33371cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 17648));
    // 0x333720: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x333720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x333724: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x333724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333728: 0x8a230003  lwl         $v1, 0x3($s1)
    ctx->pc = 0x333728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x33372c: 0x9a230000  lwr         $v1, 0x0($s1)
    ctx->pc = 0x33372cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x333730: 0x82260004  lb          $a2, 0x4($s1)
    ctx->pc = 0x333730u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x333734: 0xa8430003  swl         $v1, 0x3($v0)
    ctx->pc = 0x333734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x333738: 0xb8430000  swr         $v1, 0x0($v0)
    ctx->pc = 0x333738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x33373c: 0xa0460004  sb          $a2, 0x4($v0)
    ctx->pc = 0x33373cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x333740: 0xc0ea498  jal         func_3A9260
    ctx->pc = 0x333740u;
    SET_GPR_U32(ctx, 31, 0x333748u);
    ctx->pc = 0x333744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333740u;
    // 0x333744: 0xa3a00044  sb          $zero, 0x44($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9260u, 0x333740u, 0x333748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333748u;
label_333748:
    // 0x333748: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x333748u;
    {
        const bool branch_taken_0x333748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x333748) {
            ctx->pc = 0x33374Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333748u;
            // 0x33374c: 0x3c13003e  lui         $s3, 0x3E (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)62 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333768u;
            goto label_333768;
        }
    }
    ctx->pc = 0x333750u;
    // 0x333750: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x333750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x333754: 0xc0cd3e4  jal         func_334F90
    ctx->pc = 0x333754u;
    SET_GPR_U32(ctx, 31, 0x33375Cu);
    ctx->pc = 0x333758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333754u;
    // 0x333758: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334F90u, 0x333754u, 0x33375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33375Cu;
label_33375c:
    // 0x33375c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x33375Cu;
    {
        const bool branch_taken_0x33375c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33375Cu;
        // 0x333760: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33375c) {
            ctx->pc = 0x333868u;
            goto label_333868;
        }
    }
    ctx->pc = 0x333764u;
    // 0x333764: 0x0  nop
    ctx->pc = 0x333764u;
    // NOP
label_333768:
    // 0x333768: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x333768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33376c: 0x26709ee8  addiu       $s0, $s3, -0x6118
    ctx->pc = 0x33376cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942440));
    // 0x333770: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x333770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333774: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x333774u;
    SET_GPR_U32(ctx, 31, 0x33377Cu);
    ctx->pc = 0x333778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333774u;
    // 0x333778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x333774u, 0x33377Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33377Cu;
label_33377c:
    // 0x33377c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33377cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333780: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x333780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333784: 0xc0ccce4  jal         func_333390
    ctx->pc = 0x333784u;
    SET_GPR_U32(ctx, 31, 0x33378Cu);
    ctx->pc = 0x333788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333784u;
    // 0x333788: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333390u, 0x333784u, 0x33378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33378Cu;
label_33378c:
    // 0x33378c: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x33378Cu;
    SET_GPR_U32(ctx, 31, 0x333794u);
    ctx->pc = 0x333790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33378Cu;
    // 0x333790: 0x34049000  ori         $a0, $zero, 0x9000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x33378Cu, 0x333794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333794u;
label_333794:
    // 0x333794: 0x0  nop
    ctx->pc = 0x333794u;
    // NOP
label_333798:
    // 0x333798: 0xc0e6368  jal         func_398DA0
    ctx->pc = 0x333798u;
    SET_GPR_U32(ctx, 31, 0x3337A0u);
    ctx->pc = 0x33379Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333798u;
    // 0x33379c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DA0u, 0x333798u, 0x3337A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3337A0u;
label_3337a0:
    // 0x3337a0: 0x1050fffd  beq         $v0, $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x3337A0u;
    {
        const bool branch_taken_0x3337a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x3337a0) {
            ctx->pc = 0x333798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333798;
        }
    }
    ctx->pc = 0x3337A8u;
    // 0x3337a8: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x3337A8u;
    SET_GPR_U32(ctx, 31, 0x3337B0u);
    ctx->pc = 0x3337ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3337A8u;
    // 0x3337ac: 0x34049001  ori         $a0, $zero, 0x9001 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36865);
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x3337A8u, 0x3337B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3337B0u;
label_3337b0:
    // 0x3337b0: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x3337B0u;
    SET_GPR_U32(ctx, 31, 0x3337B8u);
    ctx->pc = 0x3337B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3337B0u;
    // 0x3337b4: 0x34049100  ori         $a0, $zero, 0x9100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37120);
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x3337B0u, 0x3337B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3337B8u;
label_3337b8:
    // 0x3337b8: 0x26659ee8  addiu       $a1, $s3, -0x6118
    ctx->pc = 0x3337b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942440));
    // 0x3337bc: 0xc0cca0e  jal         func_332838
    ctx->pc = 0x3337BCu;
    SET_GPR_U32(ctx, 31, 0x3337C4u);
    ctx->pc = 0x3337C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3337BCu;
    // 0x3337c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332838u, 0x3337BCu, 0x3337C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3337C4u;
label_3337c4:
    // 0x3337c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3337C4u;
    {
        const bool branch_taken_0x3337c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3337c4) {
            ctx->pc = 0x3337D8u;
            goto label_3337d8;
        }
    }
    ctx->pc = 0x3337CCu;
    // 0x3337cc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3337CCu;
    {
        const bool branch_taken_0x3337cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3337D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3337CCu;
        // 0x3337d0: 0x34049101  ori         $a0, $zero, 0x9101 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37121);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3337cc) {
            ctx->pc = 0x33381Cu;
            goto label_33381c;
        }
    }
    ctx->pc = 0x3337D4u;
    // 0x3337d4: 0x0  nop
    ctx->pc = 0x3337d4u;
    // NOP
label_3337d8:
    // 0x3337d8: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x3337D8u;
    SET_GPR_U32(ctx, 31, 0x3337E0u);
    ctx->pc = 0x3337DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3337D8u;
    // 0x3337dc: 0x34049102  ori         $a0, $zero, 0x9102 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37122);
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x3337D8u, 0x3337E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3337E0u;
label_3337e0:
    // 0x3337e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3337e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3337e4: 0x34049200  ori         $a0, $zero, 0x9200
    ctx->pc = 0x3337e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37376);
    // 0x3337e8: 0xa3a20031  sb          $v0, 0x31($sp)
    ctx->pc = 0x3337e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x3337ec: 0xa3a00030  sb          $zero, 0x30($sp)
    ctx->pc = 0x3337ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x3337f0: 0xa3a00032  sb          $zero, 0x32($sp)
    ctx->pc = 0x3337f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x3337f4: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x3337F4u;
    SET_GPR_U32(ctx, 31, 0x3337FCu);
    ctx->pc = 0x3337F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3337F4u;
    // 0x3337f8: 0xa3a00033  sb          $zero, 0x33($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 51), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x3337F4u, 0x3337FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3337FCu;
label_3337fc:
    // 0x3337fc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3337fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333800: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x333800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x333804: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x333804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333808: 0xc0e65ca  jal         func_399728
    ctx->pc = 0x333808u;
    SET_GPR_U32(ctx, 31, 0x333810u);
    ctx->pc = 0x33380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333808u;
    // 0x33380c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399728u, 0x333808u, 0x333810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333810u;
label_333810:
    // 0x333810: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x333810u;
    {
        const bool branch_taken_0x333810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x333810) {
            ctx->pc = 0x333830u;
            goto label_333830;
        }
    }
    ctx->pc = 0x333818u;
    // 0x333818: 0x34049201  ori         $a0, $zero, 0x9201
    ctx->pc = 0x333818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37377);
label_33381c:
    // 0x33381c: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x33381Cu;
    SET_GPR_U32(ctx, 31, 0x333824u);
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x33381Cu, 0x333824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333824u;
label_333824:
    // 0x333824: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x333824u;
    {
        const bool branch_taken_0x333824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333824u;
        // 0x333828: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333824) {
            ctx->pc = 0x333864u;
            goto label_333864;
        }
    }
    ctx->pc = 0x33382Cu;
    // 0x33382c: 0x0  nop
    ctx->pc = 0x33382cu;
    // NOP
label_333830:
    // 0x333830: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x333830u;
    SET_GPR_U32(ctx, 31, 0x333838u);
    ctx->pc = 0x333834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333830u;
    // 0x333834: 0x34049202  ori         $a0, $zero, 0x9202 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37378);
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x333830u, 0x333838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333838u;
label_333838:
    // 0x333838: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x333838u;
    SET_GPR_U32(ctx, 31, 0x333840u);
    ctx->pc = 0x33383Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333838u;
    // 0x33383c: 0x34049300  ori         $a0, $zero, 0x9300 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37632);
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x333838u, 0x333840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333840u;
label_333840:
    // 0x333840: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x333840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x333844: 0x0  nop
    ctx->pc = 0x333844u;
    // NOP
label_333848:
    // 0x333848: 0xc0e6368  jal         func_398DA0
    ctx->pc = 0x333848u;
    SET_GPR_U32(ctx, 31, 0x333850u);
    ctx->pc = 0x33384Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333848u;
    // 0x33384c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DA0u, 0x333848u, 0x333850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333850u;
label_333850:
    // 0x333850: 0x1050fffd  beq         $v0, $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x333850u;
    {
        const bool branch_taken_0x333850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x333850) {
            ctx->pc = 0x333848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333848;
        }
    }
    ctx->pc = 0x333858u;
    // 0x333858: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x333858u;
    SET_GPR_U32(ctx, 31, 0x333860u);
    ctx->pc = 0x33385Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333858u;
    // 0x33385c: 0x34049301  ori         $a0, $zero, 0x9301 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37633);
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x333858u, 0x333860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333860u;
label_333860:
    // 0x333860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x333860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_333864:
    // 0x333864: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x333864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_333868:
    // 0x333868: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x333868u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x33386c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x33386cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x333870: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x333870u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x333874: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x333874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x333878: 0x3e00008  jr          $ra
    ctx->pc = 0x333878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333878u;
        // 0x33387c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333880u;
}
