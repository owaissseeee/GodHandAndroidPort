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

// Function: func_00112318
// Address: 0x112318 - 0x1125a0
void func_00112318_0x112318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00112318_0x112318");
#endif

    switch (ctx->pc) {
        case 0x112358u: goto label_112358;
        case 0x112364u: goto label_112364;
        case 0x112390u: goto label_112390;
        case 0x1123a8u: goto label_1123a8;
        case 0x1123ccu: goto label_1123cc;
        case 0x1123f0u: goto label_1123f0;
        case 0x11240cu: goto label_11240c;
        case 0x11241cu: goto label_11241c;
        case 0x112448u: goto label_112448;
        case 0x11245cu: goto label_11245c;
        case 0x112470u: goto label_112470;
        case 0x112478u: goto label_112478;
        case 0x112488u: goto label_112488;
        case 0x112498u: goto label_112498;
        case 0x1124bcu: goto label_1124bc;
        case 0x1124c8u: goto label_1124c8;
        case 0x1124d0u: goto label_1124d0;
        case 0x1124f4u: goto label_1124f4;
        case 0x112514u: goto label_112514;
        case 0x112544u: goto label_112544;
        case 0x112554u: goto label_112554;
        case 0x112564u: goto label_112564;
        default: break;
    }

    ctx->pc = 0x112318u;

    // 0x112318: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x112318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11231c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x11231cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x112320: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112324: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x112324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x112328: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x112328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11232c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11232cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x112330: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x112330u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x112334: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x112334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x112338: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x112338u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11233c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11233cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112340: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x112344: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x112344u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x112348: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x112348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x11234c: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x11234cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x112350: 0xc0a480c  jal         func_292030
    ctx->pc = 0x112350u;
    SET_GPR_U32(ctx, 31, 0x112358u);
    ctx->pc = 0x112354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112350u;
    // 0x112354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x112350u, 0x112358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112358u;
label_112358:
    // 0x112358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11235c: 0xc0a4bbc  jal         func_292EF0
    ctx->pc = 0x11235Cu;
    SET_GPR_U32(ctx, 31, 0x112364u);
    ctx->pc = 0x112360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11235Cu;
    // 0x112360: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292EF0u, 0x11235Cu, 0x112364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112364u;
label_112364:
    // 0x112364: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x112364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x112368: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x112368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11236c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x11236cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x112370: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x112370u;
    {
        const bool branch_taken_0x112370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x112374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112370u;
        // 0x112374: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112370) {
            ctx->pc = 0x1123A8u;
            goto label_1123a8;
        }
    }
    ctx->pc = 0x112378u;
    // 0x112378: 0x92220649  lbu         $v0, 0x649($s1)
    ctx->pc = 0x112378u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1609)));
    // 0x11237c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x11237Cu;
    {
        const bool branch_taken_0x11237c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11237c) {
            ctx->pc = 0x112380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11237Cu;
            // 0x112380: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1123ACu;
            goto label_1123ac;
        }
    }
    ctx->pc = 0x112384u;
    // 0x112384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112388: 0xc042cba  jal         func_10B2E8
    ctx->pc = 0x112388u;
    SET_GPR_U32(ctx, 31, 0x112390u);
    ctx->pc = 0x11238Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112388u;
    // 0x11238c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B2E8u, 0x112388u, 0x112390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112390u;
label_112390:
    // 0x112390: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112390u;
    {
        const bool branch_taken_0x112390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112390u;
        // 0x112394: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112390) {
            ctx->pc = 0x1123A8u;
            goto label_1123a8;
        }
    }
    ctx->pc = 0x112398u;
    // 0x112398: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x112398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11239c: 0xa2220649  sb          $v0, 0x649($s1)
    ctx->pc = 0x11239cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1609), (uint8_t)GPR_U32(ctx, 2));
    // 0x1123a0: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x1123A0u;
    SET_GPR_U32(ctx, 31, 0x1123A8u);
    ctx->pc = 0x1123A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1123A0u;
    // 0x1123a4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x1123A0u, 0x1123A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1123A8u;
label_1123a8:
    // 0x1123a8: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1123a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_1123ac:
    // 0x1123ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1123ACu;
    {
        const bool branch_taken_0x1123ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1123B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123ACu;
        // 0x1123b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1123ac) {
            ctx->pc = 0x1123C4u;
            goto label_1123c4;
        }
    }
    ctx->pc = 0x1123B4u;
    // 0x1123b4: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1123B4u;
    {
        const bool branch_taken_0x1123b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1123b4) {
            ctx->pc = 0x112468u;
            goto label_112468;
        }
    }
    ctx->pc = 0x1123BCu;
    // 0x1123bc: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1123BCu;
    {
        const bool branch_taken_0x1123bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1123bc) {
            ctx->pc = 0x1124C8u;
            goto label_1124c8;
        }
    }
    ctx->pc = 0x1123C4u;
label_1123c4:
    // 0x1123c4: 0xc049396  jal         func_124E58
    ctx->pc = 0x1123C4u;
    SET_GPR_U32(ctx, 31, 0x1123CCu);
    ctx->pc = 0x1123C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1123C4u;
    // 0x1123c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x1123C4u, 0x1123CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1123CCu;
label_1123cc:
    // 0x1123cc: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x1123ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x1123d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1123d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1123d4: 0xa62005e2  sh          $zero, 0x5E2($s1)
    ctx->pc = 0x1123d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
    // 0x1123d8: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x1123d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1123dc: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x1123dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1123e0: 0x24070022  addiu       $a3, $zero, 0x22
    ctx->pc = 0x1123e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1123e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1123e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1123e8: 0xc042902  jal         func_10A408
    ctx->pc = 0x1123E8u;
    SET_GPR_U32(ctx, 31, 0x1123F0u);
    ctx->pc = 0x1123ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1123E8u;
    // 0x1123ec: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x1123E8u, 0x1123F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1123F0u;
label_1123f0:
    // 0x1123f0: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x1123f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1123f4: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x1123f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1123f8: 0x24070022  addiu       $a3, $zero, 0x22
    ctx->pc = 0x1123f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1123fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1123fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112400: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x112400u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x112404: 0xc042908  jal         func_10A420
    ctx->pc = 0x112404u;
    SET_GPR_U32(ctx, 31, 0x11240Cu);
    ctx->pc = 0x112408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112404u;
    // 0x112408: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x112404u, 0x11240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11240Cu;
label_11240c:
    // 0x11240c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11240cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112410: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112414: 0xc04a55e  jal         func_129578
    ctx->pc = 0x112414u;
    SET_GPR_U32(ctx, 31, 0x11241Cu);
    ctx->pc = 0x112418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112414u;
    // 0x112418: 0xa2221684  sb          $v0, 0x1684($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129578u, 0x112414u, 0x11241Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11241Cu;
label_11241c:
    // 0x11241c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x11241cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x112420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112424: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x112424u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x112428: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x112428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11242c: 0x8c450218  lw          $a1, 0x218($v0)
    ctx->pc = 0x11242cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
    // 0x112430: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x112430u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112434: 0x8c46021c  lw          $a2, 0x21C($v0)
    ctx->pc = 0x112434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
    // 0x112438: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x112438u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11243c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11243cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x112440: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x112440u;
    SET_GPR_U32(ctx, 31, 0x112448u);
    ctx->pc = 0x112444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112440u;
    // 0x112444: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x112440u, 0x112448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112448u;
label_112448:
    // 0x112448: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x112448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x11244c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x11244cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x112450: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x112450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x112454: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x112454u;
    SET_GPR_U32(ctx, 31, 0x11245Cu);
    ctx->pc = 0x112458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112454u;
    // 0x112458: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x112454u, 0x11245Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11245Cu;
label_11245c:
    // 0x11245c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11245cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x112460: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x112460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x112464: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x112464u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_112468:
    // 0x112468: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x112468u;
    SET_GPR_U32(ctx, 31, 0x112470u);
    ctx->pc = 0x11246Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112468u;
    // 0x11246c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x112468u, 0x112470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112470u;
label_112470:
    // 0x112470: 0xc055f06  jal         func_157C18
    ctx->pc = 0x112470u;
    SET_GPR_U32(ctx, 31, 0x112478u);
    ctx->pc = 0x112474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112470u;
    // 0x112474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x112470u, 0x112478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112478u;
label_112478:
    // 0x112478: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x112478u;
    {
        const bool branch_taken_0x112478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112478) {
            ctx->pc = 0x1124A8u;
            goto label_1124a8;
        }
    }
    ctx->pc = 0x112480u;
    // 0x112480: 0xc04a58c  jal         func_129630
    ctx->pc = 0x112480u;
    SET_GPR_U32(ctx, 31, 0x112488u);
    ctx->pc = 0x112484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112480u;
    // 0x112484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x112480u, 0x112488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112488u;
label_112488:
    // 0x112488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11248c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11248cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112490: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x112490u;
    SET_GPR_U32(ctx, 31, 0x112498u);
    ctx->pc = 0x112494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112490u;
    // 0x112494: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x112490u, 0x112498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112498u;
label_112498:
    // 0x112498: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x112498u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11249c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x11249cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1124a0: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1124a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1124a4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1124a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1124a8:
    // 0x1124a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1124a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1124ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1124acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1124b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1124b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1124b4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x1124B4u;
    SET_GPR_U32(ctx, 31, 0x1124BCu);
    ctx->pc = 0x1124B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1124B4u;
    // 0x1124b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1124B4u, 0x1124BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1124BCu;
label_1124bc:
    // 0x1124bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1124bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1124c0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1124C0u;
    SET_GPR_U32(ctx, 31, 0x1124C8u);
    ctx->pc = 0x1124C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1124C0u;
    // 0x1124c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1124C0u, 0x1124C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1124C8u;
label_1124c8:
    // 0x1124c8: 0xc04290e  jal         func_10A438
    ctx->pc = 0x1124C8u;
    SET_GPR_U32(ctx, 31, 0x1124D0u);
    ctx->pc = 0x1124CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1124C8u;
    // 0x1124cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x1124C8u, 0x1124D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1124D0u;
label_1124d0:
    // 0x1124d0: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x1124d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x1124d4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1124d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1124d8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1124D8u;
    {
        const bool branch_taken_0x1124d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1124d8) {
            ctx->pc = 0x1124DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1124D8u;
            // 0x1124dc: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1124F8u;
            goto label_1124f8;
        }
    }
    ctx->pc = 0x1124E0u;
    // 0x1124e0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1124e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1124e4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1124e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1124e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1124e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1124ec: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x1124ECu;
    SET_GPR_U32(ctx, 31, 0x1124F4u);
    ctx->pc = 0x1124F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1124ECu;
    // 0x1124f0: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x1124ECu, 0x1124F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1124F4u;
label_1124f4:
    // 0x1124f4: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x1124f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_1124f8:
    // 0x1124f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1124f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1124fc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1124FCu;
    {
        const bool branch_taken_0x1124fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124FCu;
        // 0x112500: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1124fc) {
            ctx->pc = 0x112538u;
            goto label_112538;
        }
    }
    ctx->pc = 0x112504u;
    // 0x112504: 0x8e25161c  lw          $a1, 0x161C($s1)
    ctx->pc = 0x112504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5660)));
    // 0x112508: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x112508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x11250c: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x11250Cu;
    SET_GPR_U32(ctx, 31, 0x112514u);
    ctx->pc = 0x112510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11250Cu;
    // 0x112510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x11250Cu, 0x112514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112514u;
label_112514:
    // 0x112514: 0xae20161c  sw          $zero, 0x161C($s1)
    ctx->pc = 0x112514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5660), GPR_U32(ctx, 0));
    // 0x112518: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x112518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x11251c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11251cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x112520: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x112520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x112524: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x112524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x112528: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x112528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11252c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x11252cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x112530: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x112530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x112534: 0xae0400ac  sw          $a0, 0xAC($s0)
    ctx->pc = 0x112534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 4));
label_112538:
    // 0x112538: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11253c: 0xc048e4e  jal         func_123938
    ctx->pc = 0x11253Cu;
    SET_GPR_U32(ctx, 31, 0x112544u);
    ctx->pc = 0x112540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11253Cu;
    // 0x112540: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x11253Cu, 0x112544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112544u;
label_112544:
    // 0x112544: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x112544u;
    {
        const bool branch_taken_0x112544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112544) {
            ctx->pc = 0x112548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112544u;
            // 0x112548: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11256Cu;
            goto label_11256c;
        }
    }
    ctx->pc = 0x11254Cu;
    // 0x11254c: 0xc04a58c  jal         func_129630
    ctx->pc = 0x11254Cu;
    SET_GPR_U32(ctx, 31, 0x112554u);
    ctx->pc = 0x112550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11254Cu;
    // 0x112550: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x11254Cu, 0x112554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112554u;
label_112554:
    // 0x112554: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112558: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x112558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11255c: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11255Cu;
    SET_GPR_U32(ctx, 31, 0x112564u);
    ctx->pc = 0x112560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11255Cu;
    // 0x112560: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11255Cu, 0x112564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112564u;
label_112564:
    // 0x112564: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x112564u;
    {
        const bool branch_taken_0x112564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112564u;
        // 0x112568: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112564) {
            ctx->pc = 0x112588u;
            goto label_112588;
        }
    }
    ctx->pc = 0x11256Cu;
label_11256c:
    // 0x11256c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x11256cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x112570: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x112570u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x112574: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112578: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x112578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x11257c: 0xe6200674  swc1        $f0, 0x674($s1)
    ctx->pc = 0x11257cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
    // 0x112580: 0xa62203ac  sh          $v0, 0x3AC($s1)
    ctx->pc = 0x112580u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
    // 0x112584: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x112584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_112588:
    // 0x112588: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x112588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11258c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x11258cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112594: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x112594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x112598: 0x3e00008  jr          $ra
    ctx->pc = 0x112598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112598u;
        // 0x11259c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1125A0u;
}
