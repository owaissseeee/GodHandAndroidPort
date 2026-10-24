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

// Function: func_001134C8
// Address: 0x1134c8 - 0x113768
void func_001134C8_0x1134c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001134C8_0x1134c8");
#endif

    switch (ctx->pc) {
        case 0x113508u: goto label_113508;
        case 0x113510u: goto label_113510;
        case 0x11351cu: goto label_11351c;
        case 0x113548u: goto label_113548;
        case 0x113560u: goto label_113560;
        case 0x1135a0u: goto label_1135a0;
        case 0x1135bcu: goto label_1135bc;
        case 0x1135ccu: goto label_1135cc;
        case 0x1135f8u: goto label_1135f8;
        case 0x11360cu: goto label_11360c;
        case 0x113620u: goto label_113620;
        case 0x113628u: goto label_113628;
        case 0x113638u: goto label_113638;
        case 0x113648u: goto label_113648;
        case 0x113684u: goto label_113684;
        case 0x113694u: goto label_113694;
        case 0x1136c4u: goto label_1136c4;
        case 0x1136d0u: goto label_1136d0;
        case 0x1136d8u: goto label_1136d8;
        case 0x1136fcu: goto label_1136fc;
        case 0x113708u: goto label_113708;
        case 0x113718u: goto label_113718;
        case 0x113728u: goto label_113728;
        default: break;
    }

    ctx->pc = 0x1134c8u;

    // 0x1134c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1134c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1134cc: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1134ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1134d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1134d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1134d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1134d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1134d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1134d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1134dc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1134dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1134e0: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x1134e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x1134e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1134e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1134e8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1134e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1134ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1134ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1134f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1134f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1134f4: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1134f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1134f8: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x1134f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x1134fc: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x1134fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x113500: 0xc0a480c  jal         func_292030
    ctx->pc = 0x113500u;
    SET_GPR_U32(ctx, 31, 0x113508u);
    ctx->pc = 0x113504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113500u;
    // 0x113504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x113500u, 0x113508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113508u;
label_113508:
    // 0x113508: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x113508u;
    SET_GPR_U32(ctx, 31, 0x113510u);
    ctx->pc = 0x11350Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113508u;
    // 0x11350c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x113508u, 0x113510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113510u;
label_113510:
    // 0x113510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113514: 0xc0a4bbc  jal         func_292EF0
    ctx->pc = 0x113514u;
    SET_GPR_U32(ctx, 31, 0x11351Cu);
    ctx->pc = 0x113518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113514u;
    // 0x113518: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292EF0u, 0x113514u, 0x11351Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11351Cu;
label_11351c:
    // 0x11351c: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x11351cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x113520: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x113520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x113524: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x113524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x113528: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x113528u;
    {
        const bool branch_taken_0x113528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113528u;
        // 0x11352c: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113528) {
            ctx->pc = 0x113560u;
            goto label_113560;
        }
    }
    ctx->pc = 0x113530u;
    // 0x113530: 0x92220649  lbu         $v0, 0x649($s1)
    ctx->pc = 0x113530u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1609)));
    // 0x113534: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x113534u;
    {
        const bool branch_taken_0x113534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113534) {
            ctx->pc = 0x113538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113534u;
            // 0x113538: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113564u;
            goto label_113564;
        }
    }
    ctx->pc = 0x11353Cu;
    // 0x11353c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11353cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113540: 0xc042cba  jal         func_10B2E8
    ctx->pc = 0x113540u;
    SET_GPR_U32(ctx, 31, 0x113548u);
    ctx->pc = 0x113544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113540u;
    // 0x113544: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B2E8u, 0x113540u, 0x113548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113548u;
label_113548:
    // 0x113548: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x113548u;
    {
        const bool branch_taken_0x113548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113548u;
        // 0x11354c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113548) {
            ctx->pc = 0x113560u;
            goto label_113560;
        }
    }
    ctx->pc = 0x113550u;
    // 0x113550: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x113550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x113554: 0xa2220649  sb          $v0, 0x649($s1)
    ctx->pc = 0x113554u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1609), (uint8_t)GPR_U32(ctx, 2));
    // 0x113558: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x113558u;
    SET_GPR_U32(ctx, 31, 0x113560u);
    ctx->pc = 0x11355Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113558u;
    // 0x11355c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x113558u, 0x113560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113560u;
label_113560:
    // 0x113560: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x113560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_113564:
    // 0x113564: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x113564u;
    {
        const bool branch_taken_0x113564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113564u;
        // 0x113568: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113564) {
            ctx->pc = 0x11357Cu;
            goto label_11357c;
        }
    }
    ctx->pc = 0x11356Cu;
    // 0x11356c: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x11356Cu;
    {
        const bool branch_taken_0x11356c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11356c) {
            ctx->pc = 0x113618u;
            goto label_113618;
        }
    }
    ctx->pc = 0x113574u;
    // 0x113574: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x113574u;
    {
        const bool branch_taken_0x113574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x113574) {
            ctx->pc = 0x1136D0u;
            goto label_1136d0;
        }
    }
    ctx->pc = 0x11357Cu;
label_11357c:
    // 0x11357c: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x11357cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x113580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113584: 0xa62005e2  sh          $zero, 0x5E2($s1)
    ctx->pc = 0x113584u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
    // 0x113588: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x113588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x11358c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x11358cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x113590: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x113590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x113594: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x113594u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113598: 0xc042902  jal         func_10A408
    ctx->pc = 0x113598u;
    SET_GPR_U32(ctx, 31, 0x1135A0u);
    ctx->pc = 0x11359Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113598u;
    // 0x11359c: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x113598u, 0x1135A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1135A0u;
label_1135a0:
    // 0x1135a0: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1135a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1135a4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1135a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1135a8: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x1135a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1135ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1135acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1135b0: 0x24090123  addiu       $t1, $zero, 0x123
    ctx->pc = 0x1135b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    // 0x1135b4: 0xc042908  jal         func_10A420
    ctx->pc = 0x1135B4u;
    SET_GPR_U32(ctx, 31, 0x1135BCu);
    ctx->pc = 0x1135B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1135B4u;
    // 0x1135b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1135B4u, 0x1135BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1135BCu;
label_1135bc:
    // 0x1135bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1135bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1135c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1135c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1135c4: 0xc04a55e  jal         func_129578
    ctx->pc = 0x1135C4u;
    SET_GPR_U32(ctx, 31, 0x1135CCu);
    ctx->pc = 0x1135C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1135C4u;
    // 0x1135c8: 0xa2221684  sb          $v0, 0x1684($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129578u, 0x1135C4u, 0x1135CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1135CCu;
label_1135cc:
    // 0x1135cc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x1135ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x1135d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1135d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1135d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1135d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1135d8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1135d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1135dc: 0x8c4508a8  lw          $a1, 0x8A8($v0)
    ctx->pc = 0x1135dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2216)));
    // 0x1135e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1135e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1135e4: 0x8c4608ac  lw          $a2, 0x8AC($v0)
    ctx->pc = 0x1135e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2220)));
    // 0x1135e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1135e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1135ec: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1135ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1135f0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1135F0u;
    SET_GPR_U32(ctx, 31, 0x1135F8u);
    ctx->pc = 0x1135F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1135F0u;
    // 0x1135f4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1135F0u, 0x1135F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1135F8u;
label_1135f8:
    // 0x1135f8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1135f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1135fc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1135fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x113600: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x113600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x113604: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x113604u;
    SET_GPR_U32(ctx, 31, 0x11360Cu);
    ctx->pc = 0x113608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113604u;
    // 0x113608: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x113604u, 0x11360Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11360Cu;
label_11360c:
    // 0x11360c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11360cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x113610: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x113610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x113614: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x113614u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_113618:
    // 0x113618: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x113618u;
    SET_GPR_U32(ctx, 31, 0x113620u);
    ctx->pc = 0x11361Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113618u;
    // 0x11361c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x113618u, 0x113620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113620u;
label_113620:
    // 0x113620: 0xc055f06  jal         func_157C18
    ctx->pc = 0x113620u;
    SET_GPR_U32(ctx, 31, 0x113628u);
    ctx->pc = 0x113624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113620u;
    // 0x113624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x113620u, 0x113628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113628u;
label_113628:
    // 0x113628: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x113628u;
    {
        const bool branch_taken_0x113628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113628) {
            ctx->pc = 0x11362Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113628u;
            // 0x11362c: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11365Cu;
            goto label_11365c;
        }
    }
    ctx->pc = 0x113630u;
    // 0x113630: 0xc04a58c  jal         func_129630
    ctx->pc = 0x113630u;
    SET_GPR_U32(ctx, 31, 0x113638u);
    ctx->pc = 0x113634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113630u;
    // 0x113634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x113630u, 0x113638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113638u;
label_113638:
    // 0x113638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11363c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11363cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113640: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x113640u;
    SET_GPR_U32(ctx, 31, 0x113648u);
    ctx->pc = 0x113644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113640u;
    // 0x113644: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x113640u, 0x113648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113648u;
label_113648:
    // 0x113648: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x113648u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11364c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x11364cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x113650: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x113650u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x113654: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x113654u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x113658: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x113658u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_11365c:
    // 0x11365c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x11365cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x113660: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x113660u;
    {
        const bool branch_taken_0x113660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113660) {
            ctx->pc = 0x1136B0u;
            goto label_1136b0;
        }
    }
    ctx->pc = 0x113668u;
    // 0x113668: 0x8e220640  lw          $v0, 0x640($s1)
    ctx->pc = 0x113668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
    // 0x11366c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11366Cu;
    {
        const bool branch_taken_0x11366c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11366Cu;
        // 0x113670: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11366c) {
            ctx->pc = 0x1136B0u;
            goto label_1136b0;
        }
    }
    ctx->pc = 0x113674u;
    // 0x113674: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x113674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x113678: 0x8e0504ac  lw          $a1, 0x4AC($s0)
    ctx->pc = 0x113678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1196)));
    // 0x11367c: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x11367Cu;
    SET_GPR_U32(ctx, 31, 0x113684u);
    ctx->pc = 0x113680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11367Cu;
    // 0x113680: 0x2484c208  addiu       $a0, $a0, -0x3DF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x11367Cu, 0x113684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113684u;
label_113684:
    // 0x113684: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x113684u;
    {
        const bool branch_taken_0x113684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113684u;
        // 0x113688: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113684) {
            ctx->pc = 0x11369Cu;
            goto label_11369c;
        }
    }
    ctx->pc = 0x11368Cu;
    // 0x11368c: 0xc09e84a  jal         func_27A128
    ctx->pc = 0x11368Cu;
    SET_GPR_U32(ctx, 31, 0x113694u);
    ctx->pc = 0x113690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11368Cu;
    // 0x113690: 0x8e240640  lw          $a0, 0x640($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A128u, 0x11368Cu, 0x113694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113694u;
label_113694:
    // 0x113694: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x113694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113698: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x113698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11369c:
    // 0x11369c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x11369cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1136a0: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x1136a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1136a4: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x1136a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1136a8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1136a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1136ac: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1136acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1136b0:
    // 0x1136b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1136b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1136b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1136b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1136b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1136b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1136bc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x1136BCu;
    SET_GPR_U32(ctx, 31, 0x1136C4u);
    ctx->pc = 0x1136C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1136BCu;
    // 0x1136c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1136BCu, 0x1136C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1136C4u;
label_1136c4:
    // 0x1136c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1136c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1136c8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1136C8u;
    SET_GPR_U32(ctx, 31, 0x1136D0u);
    ctx->pc = 0x1136CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1136C8u;
    // 0x1136cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1136C8u, 0x1136D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1136D0u;
label_1136d0:
    // 0x1136d0: 0xc04290e  jal         func_10A438
    ctx->pc = 0x1136D0u;
    SET_GPR_U32(ctx, 31, 0x1136D8u);
    ctx->pc = 0x1136D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1136D0u;
    // 0x1136d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x1136D0u, 0x1136D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1136D8u;
label_1136d8:
    // 0x1136d8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x1136d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x1136dc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1136dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1136e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1136E0u;
    {
        const bool branch_taken_0x1136e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1136E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1136E0u;
        // 0x1136e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1136e0) {
            ctx->pc = 0x113700u;
            goto label_113700;
        }
    }
    ctx->pc = 0x1136E8u;
    // 0x1136e8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1136e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1136ec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1136ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1136f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1136f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1136f4: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x1136F4u;
    SET_GPR_U32(ctx, 31, 0x1136FCu);
    ctx->pc = 0x1136F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1136F4u;
    // 0x1136f8: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x1136F4u, 0x1136FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1136FCu;
label_1136fc:
    // 0x1136fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1136fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_113700:
    // 0x113700: 0xc048e4e  jal         func_123938
    ctx->pc = 0x113700u;
    SET_GPR_U32(ctx, 31, 0x113708u);
    ctx->pc = 0x113704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113700u;
    // 0x113704: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x113700u, 0x113708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113708u;
label_113708:
    // 0x113708: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x113708u;
    {
        const bool branch_taken_0x113708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113708) {
            ctx->pc = 0x11370Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113708u;
            // 0x11370c: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113730u;
            goto label_113730;
        }
    }
    ctx->pc = 0x113710u;
    // 0x113710: 0xc04a58c  jal         func_129630
    ctx->pc = 0x113710u;
    SET_GPR_U32(ctx, 31, 0x113718u);
    ctx->pc = 0x113714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113710u;
    // 0x113714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x113710u, 0x113718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113718u;
label_113718:
    // 0x113718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11371c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11371cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113720: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x113720u;
    SET_GPR_U32(ctx, 31, 0x113728u);
    ctx->pc = 0x113724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113720u;
    // 0x113724: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x113720u, 0x113728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113728u;
label_113728:
    // 0x113728: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x113728u;
    {
        const bool branch_taken_0x113728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113728u;
        // 0x11372c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113728) {
            ctx->pc = 0x11374Cu;
            goto label_11374c;
        }
    }
    ctx->pc = 0x113730u;
label_113730:
    // 0x113730: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x113730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x113734: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x113734u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x113738: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x113738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11373c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x11373cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x113740: 0xe6200674  swc1        $f0, 0x674($s1)
    ctx->pc = 0x113740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
    // 0x113744: 0xa62203ac  sh          $v0, 0x3AC($s1)
    ctx->pc = 0x113744u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
    // 0x113748: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x113748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11374c:
    // 0x11374c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11374cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113750: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x113750u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113758: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x113758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11375c: 0x3e00008  jr          $ra
    ctx->pc = 0x11375Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11375Cu;
        // 0x113760: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11375Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113764u;
    // 0x113764: 0x0  nop
    ctx->pc = 0x113764u;
    // NOP
    ctx->pc = 0x113768u;
}
