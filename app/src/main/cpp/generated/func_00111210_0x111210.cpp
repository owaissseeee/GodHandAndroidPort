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

// Function: func_00111210
// Address: 0x111210 - 0x1114b0
void func_00111210_0x111210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00111210_0x111210");
#endif

    switch (ctx->pc) {
        case 0x111250u: goto label_111250;
        case 0x111258u: goto label_111258;
        case 0x111264u: goto label_111264;
        case 0x111290u: goto label_111290;
        case 0x1112acu: goto label_1112ac;
        case 0x1112b4u: goto label_1112b4;
        case 0x1112d8u: goto label_1112d8;
        case 0x1112fcu: goto label_1112fc;
        case 0x111318u: goto label_111318;
        case 0x11134cu: goto label_11134c;
        case 0x111354u: goto label_111354;
        case 0x111368u: goto label_111368;
        case 0x11137cu: goto label_11137c;
        case 0x111384u: goto label_111384;
        case 0x111394u: goto label_111394;
        case 0x1113a4u: goto label_1113a4;
        case 0x1113c8u: goto label_1113c8;
        case 0x1113d4u: goto label_1113d4;
        case 0x1113dcu: goto label_1113dc;
        case 0x111400u: goto label_111400;
        case 0x111420u: goto label_111420;
        case 0x111450u: goto label_111450;
        case 0x111460u: goto label_111460;
        case 0x111470u: goto label_111470;
        default: break;
    }

    ctx->pc = 0x111210u;

    // 0x111210: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x111210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x111214: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x111214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x111218: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11121c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11121cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x111220: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111224: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x111224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x111228: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x111228u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x11122c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11122cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x111230: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x111230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111234: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x111234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11123c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x11123cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x111240: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x111240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x111244: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x111244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x111248: 0xc0a480c  jal         func_292030
    ctx->pc = 0x111248u;
    SET_GPR_U32(ctx, 31, 0x111250u);
    ctx->pc = 0x11124Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111248u;
    // 0x11124c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x111248u, 0x111250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111250u;
label_111250:
    // 0x111250: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x111250u;
    SET_GPR_U32(ctx, 31, 0x111258u);
    ctx->pc = 0x111254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111250u;
    // 0x111254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x111250u, 0x111258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111258u;
label_111258:
    // 0x111258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11125c: 0xc0a4bbc  jal         func_292EF0
    ctx->pc = 0x11125Cu;
    SET_GPR_U32(ctx, 31, 0x111264u);
    ctx->pc = 0x111260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11125Cu;
    // 0x111260: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292EF0u, 0x11125Cu, 0x111264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111264u;
label_111264:
    // 0x111264: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x111264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x111268: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x111268u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11126c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x11126cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x111270: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x111270u;
    {
        const bool branch_taken_0x111270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111270u;
        // 0x111274: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111270) {
            ctx->pc = 0x1112B4u;
            goto label_1112b4;
        }
    }
    ctx->pc = 0x111278u;
    // 0x111278: 0x92220649  lbu         $v0, 0x649($s1)
    ctx->pc = 0x111278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1609)));
    // 0x11127c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x11127Cu;
    {
        const bool branch_taken_0x11127c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11127c) {
            ctx->pc = 0x111280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11127Cu;
            // 0x111280: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1112B8u;
            goto label_1112b8;
        }
    }
    ctx->pc = 0x111284u;
    // 0x111284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111288: 0xc042cba  jal         func_10B2E8
    ctx->pc = 0x111288u;
    SET_GPR_U32(ctx, 31, 0x111290u);
    ctx->pc = 0x11128Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111288u;
    // 0x11128c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B2E8u, 0x111288u, 0x111290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111290u;
label_111290:
    // 0x111290: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x111290u;
    {
        const bool branch_taken_0x111290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111290u;
        // 0x111294: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111290) {
            ctx->pc = 0x1112B4u;
            goto label_1112b4;
        }
    }
    ctx->pc = 0x111298u;
    // 0x111298: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x111298u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x11129c: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x11129cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x1112a0: 0xa2220649  sb          $v0, 0x649($s1)
    ctx->pc = 0x1112a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1609), (uint8_t)GPR_U32(ctx, 2));
    // 0x1112a4: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x1112A4u;
    SET_GPR_U32(ctx, 31, 0x1112ACu);
    ctx->pc = 0x1112A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112A4u;
    // 0x1112a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x1112A4u, 0x1112ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112ACu;
label_1112ac:
    // 0x1112ac: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x1112ACu;
    SET_GPR_U32(ctx, 31, 0x1112B4u);
    ctx->pc = 0x1112B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112ACu;
    // 0x1112b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x1112ACu, 0x1112B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112B4u;
label_1112b4:
    // 0x1112b4: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1112b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_1112b8:
    // 0x1112b8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1112B8u;
    {
        const bool branch_taken_0x1112b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1112BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112B8u;
        // 0x1112bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112b8) {
            ctx->pc = 0x1112D0u;
            goto label_1112d0;
        }
    }
    ctx->pc = 0x1112C0u;
    // 0x1112c0: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1112C0u;
    {
        const bool branch_taken_0x1112c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1112c0) {
            ctx->pc = 0x111374u;
            goto label_111374;
        }
    }
    ctx->pc = 0x1112C8u;
    // 0x1112c8: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1112C8u;
    {
        const bool branch_taken_0x1112c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1112c8) {
            ctx->pc = 0x1113D4u;
            goto label_1113d4;
        }
    }
    ctx->pc = 0x1112D0u;
label_1112d0:
    // 0x1112d0: 0xc049396  jal         func_124E58
    ctx->pc = 0x1112D0u;
    SET_GPR_U32(ctx, 31, 0x1112D8u);
    ctx->pc = 0x1112D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112D0u;
    // 0x1112d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x1112D0u, 0x1112D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112D8u;
label_1112d8:
    // 0x1112d8: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x1112d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x1112dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1112dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112e0: 0xa62005e2  sh          $zero, 0x5E2($s1)
    ctx->pc = 0x1112e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
    // 0x1112e4: 0x24050190  addiu       $a1, $zero, 0x190
    ctx->pc = 0x1112e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x1112e8: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1112e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1112ec: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x1112ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1112f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1112f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112f4: 0xc042902  jal         func_10A408
    ctx->pc = 0x1112F4u;
    SET_GPR_U32(ctx, 31, 0x1112FCu);
    ctx->pc = 0x1112F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112F4u;
    // 0x1112f8: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1112F4u, 0x1112FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112FCu;
label_1112fc:
    // 0x1112fc: 0x24050190  addiu       $a1, $zero, 0x190
    ctx->pc = 0x1112fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x111300: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x111300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x111304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111308: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x111308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x11130c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11130cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111310: 0xc042908  jal         func_10A420
    ctx->pc = 0x111310u;
    SET_GPR_U32(ctx, 31, 0x111318u);
    ctx->pc = 0x111314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111310u;
    // 0x111314: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x111310u, 0x111318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111318u;
label_111318:
    // 0x111318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x111318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11131c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x11131cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x111320: 0xa2221684  sb          $v0, 0x1684($s1)
    ctx->pc = 0x111320u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 2));
    // 0x111324: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x111324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x111328: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x111328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11132c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11132cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111330: 0x8c65019c  lw          $a1, 0x19C($v1)
    ctx->pc = 0x111330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 412)));
    // 0x111334: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x111334u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111338: 0x8c6601a0  lw          $a2, 0x1A0($v1)
    ctx->pc = 0x111338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 416)));
    // 0x11133c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11133cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111340: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x111340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x111344: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x111344u;
    SET_GPR_U32(ctx, 31, 0x11134Cu);
    ctx->pc = 0x111348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111344u;
    // 0x111348: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x111344u, 0x11134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11134Cu;
label_11134c:
    // 0x11134c: 0xc04a55e  jal         func_129578
    ctx->pc = 0x11134Cu;
    SET_GPR_U32(ctx, 31, 0x111354u);
    ctx->pc = 0x111350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11134Cu;
    // 0x111350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129578u, 0x11134Cu, 0x111354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111354u;
label_111354:
    // 0x111354: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x111354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x111358: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x111358u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x11135c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11135cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x111360: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x111360u;
    SET_GPR_U32(ctx, 31, 0x111368u);
    ctx->pc = 0x111364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111360u;
    // 0x111364: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x111360u, 0x111368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111368u;
label_111368:
    // 0x111368: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x111368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11136c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11136cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x111370: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x111370u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_111374:
    // 0x111374: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x111374u;
    SET_GPR_U32(ctx, 31, 0x11137Cu);
    ctx->pc = 0x111378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111374u;
    // 0x111378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x111374u, 0x11137Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11137Cu;
label_11137c:
    // 0x11137c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11137Cu;
    SET_GPR_U32(ctx, 31, 0x111384u);
    ctx->pc = 0x111380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11137Cu;
    // 0x111380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11137Cu, 0x111384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111384u;
label_111384:
    // 0x111384: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x111384u;
    {
        const bool branch_taken_0x111384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111384) {
            ctx->pc = 0x1113B4u;
            goto label_1113b4;
        }
    }
    ctx->pc = 0x11138Cu;
    // 0x11138c: 0xc04a58c  jal         func_129630
    ctx->pc = 0x11138Cu;
    SET_GPR_U32(ctx, 31, 0x111394u);
    ctx->pc = 0x111390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11138Cu;
    // 0x111390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x11138Cu, 0x111394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111394u;
label_111394:
    // 0x111394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111398: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x111398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11139c: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11139Cu;
    SET_GPR_U32(ctx, 31, 0x1113A4u);
    ctx->pc = 0x1113A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11139Cu;
    // 0x1113a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11139Cu, 0x1113A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113A4u;
label_1113a4:
    // 0x1113a4: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x1113a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1113a8: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1113a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1113ac: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1113acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1113b0: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1113b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1113b4:
    // 0x1113b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1113b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1113b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1113b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1113bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1113bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113c0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x1113C0u;
    SET_GPR_U32(ctx, 31, 0x1113C8u);
    ctx->pc = 0x1113C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113C0u;
    // 0x1113c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1113C0u, 0x1113C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113C8u;
label_1113c8:
    // 0x1113c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1113c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1113cc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1113CCu;
    SET_GPR_U32(ctx, 31, 0x1113D4u);
    ctx->pc = 0x1113D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113CCu;
    // 0x1113d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1113CCu, 0x1113D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113D4u;
label_1113d4:
    // 0x1113d4: 0xc04290e  jal         func_10A438
    ctx->pc = 0x1113D4u;
    SET_GPR_U32(ctx, 31, 0x1113DCu);
    ctx->pc = 0x1113D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113D4u;
    // 0x1113d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x1113D4u, 0x1113DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113DCu;
label_1113dc:
    // 0x1113dc: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x1113dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x1113e0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1113e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1113e4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1113E4u;
    {
        const bool branch_taken_0x1113e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1113e4) {
            ctx->pc = 0x1113E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1113E4u;
            // 0x1113e8: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111404u;
            goto label_111404;
        }
    }
    ctx->pc = 0x1113ECu;
    // 0x1113ec: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1113ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1113f0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1113f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1113f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1113f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1113f8: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x1113F8u;
    SET_GPR_U32(ctx, 31, 0x111400u);
    ctx->pc = 0x1113FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113F8u;
    // 0x1113fc: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x1113F8u, 0x111400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111400u;
label_111400:
    // 0x111400: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x111400u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_111404:
    // 0x111404: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x111404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x111408: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x111408u;
    {
        const bool branch_taken_0x111408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111408u;
        // 0x11140c: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111408) {
            ctx->pc = 0x111444u;
            goto label_111444;
        }
    }
    ctx->pc = 0x111410u;
    // 0x111410: 0x8e25161c  lw          $a1, 0x161C($s1)
    ctx->pc = 0x111410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5660)));
    // 0x111414: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x111414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x111418: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x111418u;
    SET_GPR_U32(ctx, 31, 0x111420u);
    ctx->pc = 0x11141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111418u;
    // 0x11141c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x111418u, 0x111420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111420u;
label_111420:
    // 0x111420: 0xae20161c  sw          $zero, 0x161C($s1)
    ctx->pc = 0x111420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5660), GPR_U32(ctx, 0));
    // 0x111424: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x111424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x111428: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x111428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11142c: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x11142cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x111430: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x111430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x111434: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x111434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x111438: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x111438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x11143c: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x11143cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x111440: 0xae0400ac  sw          $a0, 0xAC($s0)
    ctx->pc = 0x111440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 4));
label_111444:
    // 0x111444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111448: 0xc048e4e  jal         func_123938
    ctx->pc = 0x111448u;
    SET_GPR_U32(ctx, 31, 0x111450u);
    ctx->pc = 0x11144Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111448u;
    // 0x11144c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x111448u, 0x111450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111450u;
label_111450:
    // 0x111450: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x111450u;
    {
        const bool branch_taken_0x111450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111450) {
            ctx->pc = 0x111454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111450u;
            // 0x111454: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111478u;
            goto label_111478;
        }
    }
    ctx->pc = 0x111458u;
    // 0x111458: 0xc04a58c  jal         func_129630
    ctx->pc = 0x111458u;
    SET_GPR_U32(ctx, 31, 0x111460u);
    ctx->pc = 0x11145Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111458u;
    // 0x11145c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x111458u, 0x111460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111460u;
label_111460:
    // 0x111460: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x111464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111468: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x111468u;
    SET_GPR_U32(ctx, 31, 0x111470u);
    ctx->pc = 0x11146Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111468u;
    // 0x11146c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x111468u, 0x111470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111470u;
label_111470:
    // 0x111470: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x111470u;
    {
        const bool branch_taken_0x111470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111470u;
        // 0x111474: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111470) {
            ctx->pc = 0x111494u;
            goto label_111494;
        }
    }
    ctx->pc = 0x111478u;
label_111478:
    // 0x111478: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x111478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x11147c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x11147cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x111480: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111484: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x111484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x111488: 0xe6200674  swc1        $f0, 0x674($s1)
    ctx->pc = 0x111488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
    // 0x11148c: 0xa62203ac  sh          $v0, 0x3AC($s1)
    ctx->pc = 0x11148cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
    // 0x111490: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x111490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_111494:
    // 0x111494: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x111494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111498: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x111498u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11149c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11149cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1114a0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1114a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1114a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1114A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1114A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114A4u;
        // 0x1114a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1114A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1114ACu;
    // 0x1114ac: 0x0  nop
    ctx->pc = 0x1114acu;
    // NOP
    ctx->pc = 0x1114b0u;
}
