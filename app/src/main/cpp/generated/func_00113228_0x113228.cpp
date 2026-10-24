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

// Function: func_00113228
// Address: 0x113228 - 0x1134c8
void func_00113228_0x113228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00113228_0x113228");
#endif

    switch (ctx->pc) {
        case 0x113228u: goto label_113228;
        case 0x11322cu: goto label_11322c;
        case 0x113230u: goto label_113230;
        case 0x113234u: goto label_113234;
        case 0x113238u: goto label_113238;
        case 0x11323cu: goto label_11323c;
        case 0x113240u: goto label_113240;
        case 0x113244u: goto label_113244;
        case 0x113248u: goto label_113248;
        case 0x11324cu: goto label_11324c;
        case 0x113250u: goto label_113250;
        case 0x113254u: goto label_113254;
        case 0x113258u: goto label_113258;
        case 0x11325cu: goto label_11325c;
        case 0x113260u: goto label_113260;
        case 0x113264u: goto label_113264;
        case 0x113268u: goto label_113268;
        case 0x11326cu: goto label_11326c;
        case 0x113270u: goto label_113270;
        case 0x113274u: goto label_113274;
        case 0x113278u: goto label_113278;
        case 0x11327cu: goto label_11327c;
        case 0x113280u: goto label_113280;
        case 0x113284u: goto label_113284;
        case 0x113288u: goto label_113288;
        case 0x11328cu: goto label_11328c;
        case 0x113290u: goto label_113290;
        case 0x113294u: goto label_113294;
        case 0x113298u: goto label_113298;
        case 0x11329cu: goto label_11329c;
        case 0x1132a0u: goto label_1132a0;
        case 0x1132a4u: goto label_1132a4;
        case 0x1132a8u: goto label_1132a8;
        case 0x1132acu: goto label_1132ac;
        case 0x1132b0u: goto label_1132b0;
        case 0x1132b4u: goto label_1132b4;
        case 0x1132b8u: goto label_1132b8;
        case 0x1132bcu: goto label_1132bc;
        case 0x1132c0u: goto label_1132c0;
        case 0x1132c4u: goto label_1132c4;
        case 0x1132c8u: goto label_1132c8;
        case 0x1132ccu: goto label_1132cc;
        case 0x1132d0u: goto label_1132d0;
        case 0x1132d4u: goto label_1132d4;
        case 0x1132d8u: goto label_1132d8;
        case 0x1132dcu: goto label_1132dc;
        case 0x1132e0u: goto label_1132e0;
        case 0x1132e4u: goto label_1132e4;
        case 0x1132e8u: goto label_1132e8;
        case 0x1132ecu: goto label_1132ec;
        case 0x1132f0u: goto label_1132f0;
        case 0x1132f4u: goto label_1132f4;
        case 0x1132f8u: goto label_1132f8;
        case 0x1132fcu: goto label_1132fc;
        case 0x113300u: goto label_113300;
        case 0x113304u: goto label_113304;
        case 0x113308u: goto label_113308;
        case 0x11330cu: goto label_11330c;
        case 0x113310u: goto label_113310;
        case 0x113314u: goto label_113314;
        case 0x113318u: goto label_113318;
        case 0x11331cu: goto label_11331c;
        case 0x113320u: goto label_113320;
        case 0x113324u: goto label_113324;
        case 0x113328u: goto label_113328;
        case 0x11332cu: goto label_11332c;
        case 0x113330u: goto label_113330;
        case 0x113334u: goto label_113334;
        case 0x113338u: goto label_113338;
        case 0x11333cu: goto label_11333c;
        case 0x113340u: goto label_113340;
        case 0x113344u: goto label_113344;
        case 0x113348u: goto label_113348;
        case 0x11334cu: goto label_11334c;
        case 0x113350u: goto label_113350;
        case 0x113354u: goto label_113354;
        case 0x113358u: goto label_113358;
        case 0x11335cu: goto label_11335c;
        case 0x113360u: goto label_113360;
        case 0x113364u: goto label_113364;
        case 0x113368u: goto label_113368;
        case 0x11336cu: goto label_11336c;
        case 0x113370u: goto label_113370;
        case 0x113374u: goto label_113374;
        case 0x113378u: goto label_113378;
        case 0x11337cu: goto label_11337c;
        case 0x113380u: goto label_113380;
        case 0x113384u: goto label_113384;
        case 0x113388u: goto label_113388;
        case 0x11338cu: goto label_11338c;
        case 0x113390u: goto label_113390;
        case 0x113394u: goto label_113394;
        case 0x113398u: goto label_113398;
        case 0x11339cu: goto label_11339c;
        case 0x1133a0u: goto label_1133a0;
        case 0x1133a4u: goto label_1133a4;
        case 0x1133a8u: goto label_1133a8;
        case 0x1133acu: goto label_1133ac;
        case 0x1133b0u: goto label_1133b0;
        case 0x1133b4u: goto label_1133b4;
        case 0x1133b8u: goto label_1133b8;
        case 0x1133bcu: goto label_1133bc;
        case 0x1133c0u: goto label_1133c0;
        case 0x1133c4u: goto label_1133c4;
        case 0x1133c8u: goto label_1133c8;
        case 0x1133ccu: goto label_1133cc;
        case 0x1133d0u: goto label_1133d0;
        case 0x1133d4u: goto label_1133d4;
        case 0x1133d8u: goto label_1133d8;
        case 0x1133dcu: goto label_1133dc;
        case 0x1133e0u: goto label_1133e0;
        case 0x1133e4u: goto label_1133e4;
        case 0x1133e8u: goto label_1133e8;
        case 0x1133ecu: goto label_1133ec;
        case 0x1133f0u: goto label_1133f0;
        case 0x1133f4u: goto label_1133f4;
        case 0x1133f8u: goto label_1133f8;
        case 0x1133fcu: goto label_1133fc;
        case 0x113400u: goto label_113400;
        case 0x113404u: goto label_113404;
        case 0x113408u: goto label_113408;
        case 0x11340cu: goto label_11340c;
        case 0x113410u: goto label_113410;
        case 0x113414u: goto label_113414;
        case 0x113418u: goto label_113418;
        case 0x11341cu: goto label_11341c;
        case 0x113420u: goto label_113420;
        case 0x113424u: goto label_113424;
        case 0x113428u: goto label_113428;
        case 0x11342cu: goto label_11342c;
        case 0x113430u: goto label_113430;
        case 0x113434u: goto label_113434;
        case 0x113438u: goto label_113438;
        case 0x11343cu: goto label_11343c;
        case 0x113440u: goto label_113440;
        case 0x113444u: goto label_113444;
        case 0x113448u: goto label_113448;
        case 0x11344cu: goto label_11344c;
        case 0x113450u: goto label_113450;
        case 0x113454u: goto label_113454;
        case 0x113458u: goto label_113458;
        case 0x11345cu: goto label_11345c;
        case 0x113460u: goto label_113460;
        case 0x113464u: goto label_113464;
        case 0x113468u: goto label_113468;
        case 0x11346cu: goto label_11346c;
        case 0x113470u: goto label_113470;
        case 0x113474u: goto label_113474;
        case 0x113478u: goto label_113478;
        case 0x11347cu: goto label_11347c;
        case 0x113480u: goto label_113480;
        case 0x113484u: goto label_113484;
        case 0x113488u: goto label_113488;
        case 0x11348cu: goto label_11348c;
        case 0x113490u: goto label_113490;
        case 0x113494u: goto label_113494;
        case 0x113498u: goto label_113498;
        case 0x11349cu: goto label_11349c;
        case 0x1134a0u: goto label_1134a0;
        case 0x1134a4u: goto label_1134a4;
        case 0x1134a8u: goto label_1134a8;
        case 0x1134acu: goto label_1134ac;
        case 0x1134b0u: goto label_1134b0;
        case 0x1134b4u: goto label_1134b4;
        case 0x1134b8u: goto label_1134b8;
        case 0x1134bcu: goto label_1134bc;
        case 0x1134c0u: goto label_1134c0;
        case 0x1134c4u: goto label_1134c4;
        default: break;
    }

    ctx->pc = 0x113228u;

label_113228:
    // 0x113228: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x113228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_11322c:
    // 0x11322c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x11322cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_113230:
    // 0x113230: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x113230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_113234:
    // 0x113234: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x113234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_113238:
    // 0x113238: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x113238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11323c:
    // 0x11323c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11323cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_113240:
    // 0x113240: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x113240u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_113244:
    // 0x113244: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x113244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_113248:
    // 0x113248: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x113248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11324c:
    // 0x11324c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11324cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_113250:
    // 0x113250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_113254:
    // 0x113254: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x113254u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_113258:
    // 0x113258: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x113258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
label_11325c:
    // 0x11325c: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x11325cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
label_113260:
    // 0x113260: 0xc0a480c  jal         func_292030
label_113264:
    if (ctx->pc == 0x113264u) {
        ctx->pc = 0x113264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113260u;
        // 0x113264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113268u;
        goto label_113268;
    }
    ctx->pc = 0x113260u;
    SET_GPR_U32(ctx, 31, 0x113268u);
    ctx->pc = 0x113264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113260u;
    // 0x113264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x113260u, 0x113268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113268u;
label_113268:
    // 0x113268: 0xc0a4c3c  jal         func_2930F0
label_11326c:
    if (ctx->pc == 0x11326Cu) {
        ctx->pc = 0x11326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113268u;
        // 0x11326c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113270u;
        goto label_113270;
    }
    ctx->pc = 0x113268u;
    SET_GPR_U32(ctx, 31, 0x113270u);
    ctx->pc = 0x11326Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113268u;
    // 0x11326c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x113268u, 0x113270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113270u;
label_113270:
    // 0x113270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_113274:
    // 0x113274: 0xc0a4bbc  jal         func_292EF0
label_113278:
    if (ctx->pc == 0x113278u) {
        ctx->pc = 0x113278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113274u;
        // 0x113278: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11327Cu;
        goto label_11327c;
    }
    ctx->pc = 0x113274u;
    SET_GPR_U32(ctx, 31, 0x11327Cu);
    ctx->pc = 0x113278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113274u;
    // 0x113278: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292EF0u, 0x113274u, 0x11327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11327Cu;
label_11327c:
    // 0x11327c: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x11327cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
label_113280:
    // 0x113280: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x113280u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_113284:
    // 0x113284: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x113284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_113288:
    // 0x113288: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_11328c:
    if (ctx->pc == 0x11328Cu) {
        ctx->pc = 0x11328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113288u;
        // 0x11328c: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113290u;
        goto label_113290;
    }
    ctx->pc = 0x113288u;
    {
        const bool branch_taken_0x113288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113288u;
        // 0x11328c: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113288) {
            ctx->pc = 0x1132C0u;
            goto label_1132c0;
        }
    }
    ctx->pc = 0x113290u;
label_113290:
    // 0x113290: 0x92220649  lbu         $v0, 0x649($s1)
    ctx->pc = 0x113290u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1609)));
label_113294:
    // 0x113294: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_113298:
    if (ctx->pc == 0x113298u) {
        ctx->pc = 0x113298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113294u;
        // 0x113298: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11329Cu;
        goto label_11329c;
    }
    ctx->pc = 0x113294u;
    {
        const bool branch_taken_0x113294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113294) {
            ctx->pc = 0x113298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113294u;
            // 0x113298: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1132C4u;
            goto label_1132c4;
        }
    }
    ctx->pc = 0x11329Cu;
label_11329c:
    // 0x11329c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11329cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1132a0:
    // 0x1132a0: 0xc042cba  jal         func_10B2E8
label_1132a4:
    if (ctx->pc == 0x1132A4u) {
        ctx->pc = 0x1132A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132A0u;
        // 0x1132a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1132A8u;
        goto label_1132a8;
    }
    ctx->pc = 0x1132A0u;
    SET_GPR_U32(ctx, 31, 0x1132A8u);
    ctx->pc = 0x1132A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1132A0u;
    // 0x1132a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B2E8u, 0x1132A0u, 0x1132A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1132A8u;
label_1132a8:
    // 0x1132a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1132ac:
    if (ctx->pc == 0x1132ACu) {
        ctx->pc = 0x1132ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132A8u;
        // 0x1132ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1132B0u;
        goto label_1132b0;
    }
    ctx->pc = 0x1132A8u;
    {
        const bool branch_taken_0x1132a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1132ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132A8u;
        // 0x1132ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132a8) {
            ctx->pc = 0x1132C0u;
            goto label_1132c0;
        }
    }
    ctx->pc = 0x1132B0u;
label_1132b0:
    // 0x1132b0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1132b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1132b4:
    // 0x1132b4: 0xa2220649  sb          $v0, 0x649($s1)
    ctx->pc = 0x1132b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1609), (uint8_t)GPR_U32(ctx, 2));
label_1132b8:
    // 0x1132b8: 0xc07eb00  jal         func_1FAC00
label_1132bc:
    if (ctx->pc == 0x1132BCu) {
        ctx->pc = 0x1132BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132B8u;
        // 0x1132bc: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1132C0u;
        goto label_1132c0;
    }
    ctx->pc = 0x1132B8u;
    SET_GPR_U32(ctx, 31, 0x1132C0u);
    ctx->pc = 0x1132BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1132B8u;
    // 0x1132bc: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x1132B8u, 0x1132C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1132C0u;
label_1132c0:
    // 0x1132c0: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1132c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_1132c4:
    // 0x1132c4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1132c8:
    if (ctx->pc == 0x1132C8u) {
        ctx->pc = 0x1132C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132C4u;
        // 0x1132c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1132CCu;
        goto label_1132cc;
    }
    ctx->pc = 0x1132C4u;
    {
        const bool branch_taken_0x1132c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1132C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132C4u;
        // 0x1132c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132c4) {
            ctx->pc = 0x1132DCu;
            goto label_1132dc;
        }
    }
    ctx->pc = 0x1132CCu;
label_1132cc:
    // 0x1132cc: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
label_1132d0:
    if (ctx->pc == 0x1132D0u) {
        ctx->pc = 0x1132D4u;
        goto label_1132d4;
    }
    ctx->pc = 0x1132CCu;
    {
        const bool branch_taken_0x1132cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1132cc) {
            ctx->pc = 0x113378u;
            goto label_113378;
        }
    }
    ctx->pc = 0x1132D4u;
label_1132d4:
    // 0x1132d4: 0x10000056  b           . + 4 + (0x56 << 2)
label_1132d8:
    if (ctx->pc == 0x1132D8u) {
        ctx->pc = 0x1132DCu;
        goto label_1132dc;
    }
    ctx->pc = 0x1132D4u;
    {
        const bool branch_taken_0x1132d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1132d4) {
            ctx->pc = 0x113430u;
            goto label_113430;
        }
    }
    ctx->pc = 0x1132DCu;
label_1132dc:
    // 0x1132dc: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x1132dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
label_1132e0:
    // 0x1132e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1132e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1132e4:
    // 0x1132e4: 0xa62005e2  sh          $zero, 0x5E2($s1)
    ctx->pc = 0x1132e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
label_1132e8:
    // 0x1132e8: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x1132e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1132ec:
    // 0x1132ec: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1132ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1132f0:
    // 0x1132f0: 0x24070026  addiu       $a3, $zero, 0x26
    ctx->pc = 0x1132f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1132f4:
    // 0x1132f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1132f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1132f8:
    // 0x1132f8: 0xc042902  jal         func_10A408
label_1132fc:
    if (ctx->pc == 0x1132FCu) {
        ctx->pc = 0x1132FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132F8u;
        // 0x1132fc: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113300u;
        goto label_113300;
    }
    ctx->pc = 0x1132F8u;
    SET_GPR_U32(ctx, 31, 0x113300u);
    ctx->pc = 0x1132FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1132F8u;
    // 0x1132fc: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1132F8u, 0x113300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113300u;
label_113300:
    // 0x113300: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x113300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_113304:
    // 0x113304: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x113304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_113308:
    // 0x113308: 0x24070026  addiu       $a3, $zero, 0x26
    ctx->pc = 0x113308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_11330c:
    // 0x11330c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11330cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113310:
    // 0x113310: 0x24090123  addiu       $t1, $zero, 0x123
    ctx->pc = 0x113310u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
label_113314:
    // 0x113314: 0xc042908  jal         func_10A420
label_113318:
    if (ctx->pc == 0x113318u) {
        ctx->pc = 0x113318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113314u;
        // 0x113318: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11331Cu;
        goto label_11331c;
    }
    ctx->pc = 0x113314u;
    SET_GPR_U32(ctx, 31, 0x11331Cu);
    ctx->pc = 0x113318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113314u;
    // 0x113318: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x113314u, 0x11331Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11331Cu;
label_11331c:
    // 0x11331c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_113320:
    // 0x113320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_113324:
    // 0x113324: 0xc04a55e  jal         func_129578
label_113328:
    if (ctx->pc == 0x113328u) {
        ctx->pc = 0x113328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113324u;
        // 0x113328: 0xa2221684  sb          $v0, 0x1684($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11332Cu;
        goto label_11332c;
    }
    ctx->pc = 0x113324u;
    SET_GPR_U32(ctx, 31, 0x11332Cu);
    ctx->pc = 0x113328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113324u;
    // 0x113328: 0xa2221684  sb          $v0, 0x1684($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129578u, 0x113324u, 0x11332Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11332Cu;
label_11332c:
    // 0x11332c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x11332cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_113330:
    // 0x113330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_113334:
    // 0x113334: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x113334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_113338:
    // 0x113338: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x113338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_11333c:
    // 0x11333c: 0x8c45060c  lw          $a1, 0x60C($v0)
    ctx->pc = 0x11333cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1548)));
label_113340:
    // 0x113340: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x113340u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113344:
    // 0x113344: 0x8c460610  lw          $a2, 0x610($v0)
    ctx->pc = 0x113344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1552)));
label_113348:
    // 0x113348: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x113348u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11334c:
    // 0x11334c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11334cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_113350:
    // 0x113350: 0xc0aa15e  jal         func_2A8578
label_113354:
    if (ctx->pc == 0x113354u) {
        ctx->pc = 0x113354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113350u;
        // 0x113354: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113358u;
        goto label_113358;
    }
    ctx->pc = 0x113350u;
    SET_GPR_U32(ctx, 31, 0x113358u);
    ctx->pc = 0x113354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113350u;
    // 0x113354: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x113350u, 0x113358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113358u;
label_113358:
    // 0x113358: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x113358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_11335c:
    // 0x11335c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x11335cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_113360:
    // 0x113360: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x113360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_113364:
    // 0x113364: 0xc0a4bce  jal         func_292F38
label_113368:
    if (ctx->pc == 0x113368u) {
        ctx->pc = 0x113368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113364u;
        // 0x113368: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11336Cu;
        goto label_11336c;
    }
    ctx->pc = 0x113364u;
    SET_GPR_U32(ctx, 31, 0x11336Cu);
    ctx->pc = 0x113368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113364u;
    // 0x113368: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x113364u, 0x11336Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11336Cu;
label_11336c:
    // 0x11336c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11336cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_113370:
    // 0x113370: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x113370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_113374:
    // 0x113374: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x113374u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_113378:
    // 0x113378: 0xc0493b0  jal         func_124EC0
label_11337c:
    if (ctx->pc == 0x11337Cu) {
        ctx->pc = 0x11337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113378u;
        // 0x11337c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113380u;
        goto label_113380;
    }
    ctx->pc = 0x113378u;
    SET_GPR_U32(ctx, 31, 0x113380u);
    ctx->pc = 0x11337Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113378u;
    // 0x11337c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x113378u, 0x113380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113380u;
label_113380:
    // 0x113380: 0xc055f06  jal         func_157C18
label_113384:
    if (ctx->pc == 0x113384u) {
        ctx->pc = 0x113384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113380u;
        // 0x113384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113388u;
        goto label_113388;
    }
    ctx->pc = 0x113380u;
    SET_GPR_U32(ctx, 31, 0x113388u);
    ctx->pc = 0x113384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113380u;
    // 0x113384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x113380u, 0x113388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113388u;
label_113388:
    // 0x113388: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_11338c:
    if (ctx->pc == 0x11338Cu) {
        ctx->pc = 0x11338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113388u;
        // 0x11338c: 0x8e250640  lw          $a1, 0x640($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113390u;
        goto label_113390;
    }
    ctx->pc = 0x113388u;
    {
        const bool branch_taken_0x113388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113388) {
            ctx->pc = 0x11338Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113388u;
            // 0x11338c: 0x8e250640  lw          $a1, 0x640($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1133BCu;
            goto label_1133bc;
        }
    }
    ctx->pc = 0x113390u;
label_113390:
    // 0x113390: 0xc04a58c  jal         func_129630
label_113394:
    if (ctx->pc == 0x113394u) {
        ctx->pc = 0x113394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113390u;
        // 0x113394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113398u;
        goto label_113398;
    }
    ctx->pc = 0x113390u;
    SET_GPR_U32(ctx, 31, 0x113398u);
    ctx->pc = 0x113394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113390u;
    // 0x113394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x113390u, 0x113398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113398u;
label_113398:
    // 0x113398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11339c:
    // 0x11339c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11339cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1133a0:
    // 0x1133a0: 0xc0493d8  jal         func_124F60
label_1133a4:
    if (ctx->pc == 0x1133A4u) {
        ctx->pc = 0x1133A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133A0u;
        // 0x1133a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1133A8u;
        goto label_1133a8;
    }
    ctx->pc = 0x1133A0u;
    SET_GPR_U32(ctx, 31, 0x1133A8u);
    ctx->pc = 0x1133A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1133A0u;
    // 0x1133a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x1133A0u, 0x1133A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1133A8u;
label_1133a8:
    // 0x1133a8: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x1133a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_1133ac:
    // 0x1133ac: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1133acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_1133b0:
    // 0x1133b0: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1133b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1133b4:
    // 0x1133b4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1133b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1133b8:
    // 0x1133b8: 0x8e250640  lw          $a1, 0x640($s1)
    ctx->pc = 0x1133b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_1133bc:
    // 0x1133bc: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
label_1133c0:
    if (ctx->pc == 0x1133C0u) {
        ctx->pc = 0x1133C4u;
        goto label_1133c4;
    }
    ctx->pc = 0x1133BCu;
    {
        const bool branch_taken_0x1133bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1133bc) {
            ctx->pc = 0x113410u;
            goto label_113410;
        }
    }
    ctx->pc = 0x1133C4u;
label_1133c4:
    // 0x1133c4: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x1133c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_1133c8:
    // 0x1133c8: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x1133c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1133cc:
    // 0x1133cc: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1133ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1133d0:
    // 0x1133d0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1133d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1133d4:
    // 0x1133d4: 0x40f809  jalr        $v0
label_1133d8:
    if (ctx->pc == 0x1133D8u) {
        ctx->pc = 0x1133D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133D4u;
        // 0x1133d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1133DCu;
        goto label_1133dc;
    }
    ctx->pc = 0x1133D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1133DCu);
        ctx->pc = 0x1133D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133D4u;
        // 0x1133d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1133D4u, 0x1133DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1133DCu;
label_1133dc:
    // 0x1133dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1133dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1133e0:
    // 0x1133e0: 0xc07dfac  jal         func_1F7EB0
label_1133e4:
    if (ctx->pc == 0x1133E4u) {
        ctx->pc = 0x1133E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133E0u;
        // 0x1133e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1133E8u;
        goto label_1133e8;
    }
    ctx->pc = 0x1133E0u;
    SET_GPR_U32(ctx, 31, 0x1133E8u);
    ctx->pc = 0x1133E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1133E0u;
    // 0x1133e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x1133E0u, 0x1133E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1133E8u;
label_1133e8:
    // 0x1133e8: 0x3c013f9a  lui         $at, 0x3F9A
    ctx->pc = 0x1133e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16282 << 16));
label_1133ec:
    // 0x1133ec: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x1133ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_1133f0:
    // 0x1133f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1133f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1133f4:
    // 0x1133f4: 0x0  nop
    ctx->pc = 0x1133f4u;
    // NOP
label_1133f8:
    // 0x1133f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1133f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1133fc:
    // 0x1133fc: 0x0  nop
    ctx->pc = 0x1133fcu;
    // NOP
label_113400:
    // 0x113400: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_113404:
    if (ctx->pc == 0x113404u) {
        ctx->pc = 0x113408u;
        goto label_113408;
    }
    ctx->pc = 0x113400u;
    {
        const bool branch_taken_0x113400 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x113400) {
            ctx->pc = 0x113410u;
            goto label_113410;
        }
    }
    ctx->pc = 0x113408u;
label_113408:
    // 0x113408: 0xae200330  sw          $zero, 0x330($s1)
    ctx->pc = 0x113408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 816), GPR_U32(ctx, 0));
label_11340c:
    // 0x11340c: 0xae200338  sw          $zero, 0x338($s1)
    ctx->pc = 0x11340cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 0));
label_113410:
    // 0x113410: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x113410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_113414:
    // 0x113414: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x113414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_113418:
    // 0x113418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11341c:
    // 0x11341c: 0xc053e7c  jal         func_14F9F0
label_113420:
    if (ctx->pc == 0x113420u) {
        ctx->pc = 0x113420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11341Cu;
        // 0x113420: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x113424u;
        goto label_113424;
    }
    ctx->pc = 0x11341Cu;
    SET_GPR_U32(ctx, 31, 0x113424u);
    ctx->pc = 0x113420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11341Cu;
    // 0x113420: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11341Cu, 0x113424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113424u;
label_113424:
    // 0x113424: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x113424u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_113428:
    // 0x113428: 0xc053e4a  jal         func_14F928
label_11342c:
    if (ctx->pc == 0x11342Cu) {
        ctx->pc = 0x11342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113428u;
        // 0x11342c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113430u;
        goto label_113430;
    }
    ctx->pc = 0x113428u;
    SET_GPR_U32(ctx, 31, 0x113430u);
    ctx->pc = 0x11342Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113428u;
    // 0x11342c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x113428u, 0x113430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113430u;
label_113430:
    // 0x113430: 0xc04290e  jal         func_10A438
label_113434:
    if (ctx->pc == 0x113434u) {
        ctx->pc = 0x113434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113430u;
        // 0x113434: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113438u;
        goto label_113438;
    }
    ctx->pc = 0x113430u;
    SET_GPR_U32(ctx, 31, 0x113438u);
    ctx->pc = 0x113434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113430u;
    // 0x113434: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x113430u, 0x113438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113438u;
label_113438:
    // 0x113438: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x113438u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_11343c:
    // 0x11343c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x11343cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_113440:
    // 0x113440: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_113444:
    if (ctx->pc == 0x113444u) {
        ctx->pc = 0x113444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113440u;
        // 0x113444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113448u;
        goto label_113448;
    }
    ctx->pc = 0x113440u;
    {
        const bool branch_taken_0x113440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113440u;
        // 0x113444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113440) {
            ctx->pc = 0x113460u;
            goto label_113460;
        }
    }
    ctx->pc = 0x113448u;
label_113448:
    // 0x113448: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x113448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_11344c:
    // 0x11344c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x11344cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_113450:
    // 0x113450: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x113450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_113454:
    // 0x113454: 0xc0a4bce  jal         func_292F38
label_113458:
    if (ctx->pc == 0x113458u) {
        ctx->pc = 0x113458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113454u;
        // 0x113458: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11345Cu;
        goto label_11345c;
    }
    ctx->pc = 0x113454u;
    SET_GPR_U32(ctx, 31, 0x11345Cu);
    ctx->pc = 0x113458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113454u;
    // 0x113458: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x113454u, 0x11345Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11345Cu;
label_11345c:
    // 0x11345c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11345cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_113460:
    // 0x113460: 0xc048e4e  jal         func_123938
label_113464:
    if (ctx->pc == 0x113464u) {
        ctx->pc = 0x113464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113460u;
        // 0x113464: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113468u;
        goto label_113468;
    }
    ctx->pc = 0x113460u;
    SET_GPR_U32(ctx, 31, 0x113468u);
    ctx->pc = 0x113464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113460u;
    // 0x113464: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x113460u, 0x113468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113468u;
label_113468:
    // 0x113468: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_11346c:
    if (ctx->pc == 0x11346Cu) {
        ctx->pc = 0x11346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113468u;
        // 0x11346c: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113470u;
        goto label_113470;
    }
    ctx->pc = 0x113468u;
    {
        const bool branch_taken_0x113468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113468) {
            ctx->pc = 0x11346Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113468u;
            // 0x11346c: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113490u;
            goto label_113490;
        }
    }
    ctx->pc = 0x113470u;
label_113470:
    // 0x113470: 0xc04a58c  jal         func_129630
label_113474:
    if (ctx->pc == 0x113474u) {
        ctx->pc = 0x113474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113470u;
        // 0x113474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113478u;
        goto label_113478;
    }
    ctx->pc = 0x113470u;
    SET_GPR_U32(ctx, 31, 0x113478u);
    ctx->pc = 0x113474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113470u;
    // 0x113474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x113470u, 0x113478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113478u;
label_113478:
    // 0x113478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11347c:
    // 0x11347c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11347cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_113480:
    // 0x113480: 0xc0493d8  jal         func_124F60
label_113484:
    if (ctx->pc == 0x113484u) {
        ctx->pc = 0x113484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113480u;
        // 0x113484: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113488u;
        goto label_113488;
    }
    ctx->pc = 0x113480u;
    SET_GPR_U32(ctx, 31, 0x113488u);
    ctx->pc = 0x113484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113480u;
    // 0x113484: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x113480u, 0x113488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113488u;
label_113488:
    // 0x113488: 0x10000008  b           . + 4 + (0x8 << 2)
label_11348c:
    if (ctx->pc == 0x11348Cu) {
        ctx->pc = 0x11348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113488u;
        // 0x11348c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113490u;
        goto label_113490;
    }
    ctx->pc = 0x113488u;
    {
        const bool branch_taken_0x113488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113488u;
        // 0x11348c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113488) {
            ctx->pc = 0x1134ACu;
            goto label_1134ac;
        }
    }
    ctx->pc = 0x113490u;
label_113490:
    // 0x113490: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x113490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_113494:
    // 0x113494: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x113494u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_113498:
    // 0x113498: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x113498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11349c:
    // 0x11349c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x11349cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_1134a0:
    // 0x1134a0: 0xe6200674  swc1        $f0, 0x674($s1)
    ctx->pc = 0x1134a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
label_1134a4:
    // 0x1134a4: 0xa62203ac  sh          $v0, 0x3AC($s1)
    ctx->pc = 0x1134a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
label_1134a8:
    // 0x1134a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1134a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1134ac:
    // 0x1134ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1134acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1134b0:
    // 0x1134b0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1134b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1134b4:
    // 0x1134b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1134b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1134b8:
    // 0x1134b8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1134b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1134bc:
    // 0x1134bc: 0x3e00008  jr          $ra
label_1134c0:
    if (ctx->pc == 0x1134C0u) {
        ctx->pc = 0x1134C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1134BCu;
        // 0x1134c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1134C4u;
        goto label_1134c4;
    }
    ctx->pc = 0x1134BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1134C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1134BCu;
        // 0x1134c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1134BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1134C4u;
label_1134c4:
    // 0x1134c4: 0x0  nop
    ctx->pc = 0x1134c4u;
    // NOP
    ctx->pc = 0x1134c8u;
}
