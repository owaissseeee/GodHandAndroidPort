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

// Function: func_00162298
// Address: 0x162298 - 0x162720
void func_00162298_0x162298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00162298_0x162298");
#endif

    switch (ctx->pc) {
        case 0x162318u: goto label_162318;
        case 0x162364u: goto label_162364;
        case 0x1623bcu: goto label_1623bc;
        case 0x16242cu: goto label_16242c;
        case 0x16244cu: goto label_16244c;
        case 0x162484u: goto label_162484;
        case 0x16248cu: goto label_16248c;
        case 0x1624e0u: goto label_1624e0;
        case 0x162570u: goto label_162570;
        case 0x162618u: goto label_162618;
        case 0x162664u: goto label_162664;
        case 0x16268cu: goto label_16268c;
        case 0x1626c4u: goto label_1626c4;
        case 0x162700u: goto label_162700;
        default: break;
    }

    ctx->pc = 0x162298u;

    // 0x162298: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x162298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16229c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16229cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1622a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1622a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1622a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1622a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1622a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1622a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1622ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1622acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1622b0: 0x8203005a  lb          $v1, 0x5A($s0)
    ctx->pc = 0x1622b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x1622b4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1622B4u;
    {
        const bool branch_taken_0x1622b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1622B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1622B4u;
        // 0x1622b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1622b4) {
            ctx->pc = 0x1622CCu;
            goto label_1622cc;
        }
    }
    ctx->pc = 0x1622BCu;
    // 0x1622bc: 0x10620075  beq         $v1, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x1622BCu;
    {
        const bool branch_taken_0x1622bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1622C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1622BCu;
        // 0x1622c0: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1622bc) {
            ctx->pc = 0x162494u;
            goto label_162494;
        }
    }
    ctx->pc = 0x1622C4u;
    // 0x1622c4: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x1622C4u;
    {
        const bool branch_taken_0x1622c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1622C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1622C4u;
        // 0x1622c8: 0x264274a0  addiu       $v0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1622c4) {
            ctx->pc = 0x1626CCu;
            goto label_1626cc;
        }
    }
    ctx->pc = 0x1622CCu;
label_1622cc:
    // 0x1622cc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1622ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1622d0: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1622d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1622d4: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1622d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x1622d8: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x1622d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x1622dc: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x1622dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x1622e0: 0x245174a0  addiu       $s1, $v0, 0x74A0
    ctx->pc = 0x1622e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1622e4: 0xde2301b0  ld          $v1, 0x1B0($s1)
    ctx->pc = 0x1622e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x1622e8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1622e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1622ec: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1622ECu;
    {
        const bool branch_taken_0x1622ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1622F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1622ECu;
        // 0x1622f0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1622ec) {
            ctx->pc = 0x162324u;
            goto label_162324;
        }
    }
    ctx->pc = 0x1622F4u;
    // 0x1622f4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1622f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1622f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1622f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1622fc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1622fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x162300: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x162300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x162304: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x162304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x162308: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x162308u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16230c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16230cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162310: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x162310u;
    SET_GPR_U32(ctx, 31, 0x162318u);
    ctx->pc = 0x162314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162310u;
    // 0x162314: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x162310u, 0x162318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162318u;
label_162318:
    // 0x162318: 0x920300ec  lbu         $v1, 0xEC($s0)
    ctx->pc = 0x162318u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x16231c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16231cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x162320: 0xa20300ec  sb          $v1, 0xEC($s0)
    ctx->pc = 0x162320u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 236), (uint8_t)GPR_U32(ctx, 3));
label_162324:
    // 0x162324: 0xde2201b0  ld          $v0, 0x1B0($s1)
    ctx->pc = 0x162324u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x162328: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x162328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16232c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x16232cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x162330: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x162330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x162334: 0x31ab8  dsll        $v1, $v1, 10
    ctx->pc = 0x162334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 10);
    // 0x162338: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x162338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x16233c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16233Cu;
    {
        const bool branch_taken_0x16233c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16233Cu;
        // 0x162340: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16233c) {
            ctx->pc = 0x162370u;
            goto label_162370;
        }
    }
    ctx->pc = 0x162344u;
    // 0x162344: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x162344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162348: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x162348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16234c: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x16234cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x162350: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x162350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x162354: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x162354u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x162358: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x162358u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16235c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16235Cu;
    SET_GPR_U32(ctx, 31, 0x162364u);
    ctx->pc = 0x162360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16235Cu;
    // 0x162360: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16235Cu, 0x162364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162364u;
label_162364:
    // 0x162364: 0x920300ec  lbu         $v1, 0xEC($s0)
    ctx->pc = 0x162364u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x162368: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x162368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16236c: 0xa20300ec  sb          $v1, 0xEC($s0)
    ctx->pc = 0x16236cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 236), (uint8_t)GPR_U32(ctx, 3));
label_162370:
    // 0x162370: 0xde2201b0  ld          $v0, 0x1B0($s1)
    ctx->pc = 0x162370u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x162374: 0x3403c000  ori         $v1, $zero, 0xC000
    ctx->pc = 0x162374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x162378: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x162378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x16237c: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x16237cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x162380: 0x31b38  dsll        $v1, $v1, 12
    ctx->pc = 0x162380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 12);
    // 0x162384: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x162384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x162388: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x162388u;
    {
        const bool branch_taken_0x162388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162388u;
        // 0x16238c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162388) {
            ctx->pc = 0x1623C8u;
            goto label_1623c8;
        }
    }
    ctx->pc = 0x162390u;
    // 0x162390: 0x820300ec  lb          $v1, 0xEC($s0)
    ctx->pc = 0x162390u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x162394: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x162394u;
    {
        const bool branch_taken_0x162394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x162398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162394u;
        // 0x162398: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162394) {
            ctx->pc = 0x1623CCu;
            goto label_1623cc;
        }
    }
    ctx->pc = 0x16239Cu;
    // 0x16239c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16239cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1623a0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1623a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1623a4: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1623a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1623a8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1623a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1623ac: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1623acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1623b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1623b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1623b4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1623B4u;
    SET_GPR_U32(ctx, 31, 0x1623BCu);
    ctx->pc = 0x1623B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1623B4u;
    // 0x1623b8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1623B4u, 0x1623BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1623BCu;
label_1623bc:
    // 0x1623bc: 0x920300ed  lbu         $v1, 0xED($s0)
    ctx->pc = 0x1623bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 237)));
    // 0x1623c0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1623c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1623c4: 0xa20300ed  sb          $v1, 0xED($s0)
    ctx->pc = 0x1623c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 237), (uint8_t)GPR_U32(ctx, 3));
label_1623c8:
    // 0x1623c8: 0x820300ec  lb          $v1, 0xEC($s0)
    ctx->pc = 0x1623c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 236)));
label_1623cc:
    // 0x1623cc: 0x2862ffff  slti        $v0, $v1, -0x1
    ctx->pc = 0x1623ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x1623d0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1623D0u;
    {
        const bool branch_taken_0x1623d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1623D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1623D0u;
        // 0x1623d4: 0x920400ec  lbu         $a0, 0xEC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1623d0) {
            ctx->pc = 0x1623ECu;
            goto label_1623ec;
        }
    }
    ctx->pc = 0x1623D8u;
    // 0x1623d8: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x1623d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1623dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1623DCu;
    {
        const bool branch_taken_0x1623dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1623E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1623DCu;
        // 0x1623e0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1623dc) {
            ctx->pc = 0x1623F0u;
            goto label_1623f0;
        }
    }
    ctx->pc = 0x1623E4u;
    // 0x1623e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1623E4u;
    {
        const bool branch_taken_0x1623e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1623E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1623E4u;
        // 0x1623e8: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1623e4) {
            ctx->pc = 0x1623F0u;
            goto label_1623f0;
        }
    }
    ctx->pc = 0x1623ECu;
label_1623ec:
    // 0x1623ec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1623ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1623f0:
    // 0x1623f0: 0xa20300ec  sb          $v1, 0xEC($s0)
    ctx->pc = 0x1623f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x1623f4: 0x264274a0  addiu       $v0, $s2, 0x74A0
    ctx->pc = 0x1623f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
    // 0x1623f8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1623f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1623fc: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x1623fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x162400: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x162400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x162404: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x162404u;
    {
        const bool branch_taken_0x162404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162404u;
        // 0x162408: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162404) {
            ctx->pc = 0x162450u;
            goto label_162450;
        }
    }
    ctx->pc = 0x16240Cu;
    // 0x16240c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16240cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162410: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x162410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x162414: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x162414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x162418: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x162418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16241c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16241cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x162420: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x162420u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162424: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x162424u;
    SET_GPR_U32(ctx, 31, 0x16242Cu);
    ctx->pc = 0x162428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162424u;
    // 0x162428: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x162424u, 0x16242Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16242Cu;
label_16242c:
    // 0x16242c: 0x820300ec  lb          $v1, 0xEC($s0)
    ctx->pc = 0x16242cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x162430: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x162430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x162434: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162434u;
    {
        const bool branch_taken_0x162434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x162438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162434u;
        // 0x162438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162434) {
            ctx->pc = 0x162444u;
            goto label_162444;
        }
    }
    ctx->pc = 0x16243Cu;
    // 0x16243c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16243Cu;
    {
        const bool branch_taken_0x16243c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16243Cu;
        // 0x162440: 0xa202005a  sb          $v0, 0x5A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16243c) {
            ctx->pc = 0x16244Cu;
            goto label_16244c;
        }
    }
    ctx->pc = 0x162444u;
label_162444:
    // 0x162444: 0xc0589c8  jal         func_162720
    ctx->pc = 0x162444u;
    SET_GPR_U32(ctx, 31, 0x16244Cu);
    ctx->pc = 0x162448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162444u;
    // 0x162448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162720u, 0x162444u, 0x16244Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16244Cu;
label_16244c:
    // 0x16244c: 0x264274a0  addiu       $v0, $s2, 0x74A0
    ctx->pc = 0x16244cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
label_162450:
    // 0x162450: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x162450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x162454: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x162454u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x162458: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x162458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x16245c: 0x1060009a  beqz        $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x16245Cu;
    {
        const bool branch_taken_0x16245c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16245Cu;
        // 0x162460: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16245c) {
            ctx->pc = 0x1626C8u;
            goto label_1626c8;
        }
    }
    ctx->pc = 0x162464u;
    // 0x162464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x162464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162468: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x162468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16246c: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x16246cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x162470: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x162470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x162474: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x162474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x162478: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x162478u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16247c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16247Cu;
    SET_GPR_U32(ctx, 31, 0x162484u);
    ctx->pc = 0x162480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16247Cu;
    // 0x162480: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16247Cu, 0x162484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162484u;
label_162484:
    // 0x162484: 0xc0589c8  jal         func_162720
    ctx->pc = 0x162484u;
    SET_GPR_U32(ctx, 31, 0x16248Cu);
    ctx->pc = 0x162488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162484u;
    // 0x162488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162720u, 0x162484u, 0x16248Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16248Cu;
label_16248c:
    // 0x16248c: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x16248Cu;
    {
        const bool branch_taken_0x16248c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16248Cu;
        // 0x162490: 0x264274a0  addiu       $v0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16248c) {
            ctx->pc = 0x1626CCu;
            goto label_1626cc;
        }
    }
    ctx->pc = 0x162494u;
label_162494:
    // 0x162494: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x162494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x162498: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x162498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16249c: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x16249cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x1624a0: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1624a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1624a4: 0x52a78  dsll        $a1, $a1, 9
    ctx->pc = 0x1624a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 9);
    // 0x1624a8: 0x246474a0  addiu       $a0, $v1, 0x74A0
    ctx->pc = 0x1624a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x1624ac: 0xdc8201b0  ld          $v0, 0x1B0($a0)
    ctx->pc = 0x1624acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x1624b0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1624b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1624b4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1624B4u;
    {
        const bool branch_taken_0x1624b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1624B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1624B4u;
        // 0x1624b8: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1624b4) {
            ctx->pc = 0x16252Cu;
            goto label_16252c;
        }
    }
    ctx->pc = 0x1624BCu;
    // 0x1624bc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1624bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1624c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1624c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1624c4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1624c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1624c8: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1624c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1624cc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1624ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1624d0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1624d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1624d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1624d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1624d8: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1624D8u;
    SET_GPR_U32(ctx, 31, 0x1624E0u);
    ctx->pc = 0x1624DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1624D8u;
    // 0x1624dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1624D8u, 0x1624E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1624E0u;
label_1624e0:
    // 0x1624e0: 0x920300ee  lbu         $v1, 0xEE($s0)
    ctx->pc = 0x1624e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 238)));
    // 0x1624e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1624e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1624e8: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1624e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1624ec: 0x441000f  bgez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1624ECu;
    {
        const bool branch_taken_0x1624ec = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1624F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1624ECu;
        // 0x1624f0: 0xa20300ee  sb          $v1, 0xEE($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 238), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1624ec) {
            ctx->pc = 0x16252Cu;
            goto label_16252c;
        }
    }
    ctx->pc = 0x1624F4u;
    // 0x1624f4: 0x920200ef  lbu         $v0, 0xEF($s0)
    ctx->pc = 0x1624f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 239)));
    // 0x1624f8: 0xa20000ee  sb          $zero, 0xEE($s0)
    ctx->pc = 0x1624f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 238), (uint8_t)GPR_U32(ctx, 0));
    // 0x1624fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1624fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x162500: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x162500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x162504: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x162504u;
    {
        const bool branch_taken_0x162504 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x162508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162504u;
        // 0x162508: 0xa20200ef  sb          $v0, 0xEF($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 239), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162504) {
            ctx->pc = 0x16252Cu;
            goto label_16252c;
        }
    }
    ctx->pc = 0x16250Cu;
    // 0x16250c: 0x920200f0  lbu         $v0, 0xF0($s0)
    ctx->pc = 0x16250cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x162510: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x162510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x162514: 0xa20400ee  sb          $a0, 0xEE($s0)
    ctx->pc = 0x162514u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 238), (uint8_t)GPR_U32(ctx, 4));
    // 0x162518: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x162518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x16251c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x16251cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x162520: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x162520u;
    {
        const bool branch_taken_0x162520 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x162524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162520u;
        // 0x162524: 0xa20200ef  sb          $v0, 0xEF($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 239), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162520) {
            ctx->pc = 0x16252Cu;
            goto label_16252c;
        }
    }
    ctx->pc = 0x162528u;
    // 0x162528: 0xa20000ef  sb          $zero, 0xEF($s0)
    ctx->pc = 0x162528u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 239), (uint8_t)GPR_U32(ctx, 0));
label_16252c:
    // 0x16252c: 0x264274a0  addiu       $v0, $s2, 0x74A0
    ctx->pc = 0x16252cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
    // 0x162530: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x162530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x162534: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x162534u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x162538: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x162538u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x16253c: 0x422b8  dsll        $a0, $a0, 10
    ctx->pc = 0x16253cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 10);
    // 0x162540: 0xdc4301b0  ld          $v1, 0x1B0($v0)
    ctx->pc = 0x162540u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x162544: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x162544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x162548: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x162548u;
    {
        const bool branch_taken_0x162548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162548u;
        // 0x16254c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162548) {
            ctx->pc = 0x1625C4u;
            goto label_1625c4;
        }
    }
    ctx->pc = 0x162550u;
    // 0x162550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x162550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162554: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x162554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x162558: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x162558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x16255c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16255cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x162560: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x162560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x162564: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x162564u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162568: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x162568u;
    SET_GPR_U32(ctx, 31, 0x162570u);
    ctx->pc = 0x16256Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162568u;
    // 0x16256c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x162568u, 0x162570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162570u;
label_162570:
    // 0x162570: 0x920300ee  lbu         $v1, 0xEE($s0)
    ctx->pc = 0x162570u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 238)));
    // 0x162574: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x162574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x162578: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x162578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x16257c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x16257cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x162580: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x162580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x162584: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x162584u;
    {
        const bool branch_taken_0x162584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162584u;
        // 0x162588: 0xa20300ee  sb          $v1, 0xEE($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 238), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162584) {
            ctx->pc = 0x1625C0u;
            goto label_1625c0;
        }
    }
    ctx->pc = 0x16258Cu;
    // 0x16258c: 0x920300ef  lbu         $v1, 0xEF($s0)
    ctx->pc = 0x16258cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 239)));
    // 0x162590: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x162590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x162594: 0x820500f0  lb          $a1, 0xF0($s0)
    ctx->pc = 0x162594u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x162598: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x162598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16259c: 0xa20400ee  sb          $a0, 0xEE($s0)
    ctx->pc = 0x16259cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 238), (uint8_t)GPR_U32(ctx, 4));
    // 0x1625a0: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1625a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1625a4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1625a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1625a8: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x1625a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x1625ac: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1625acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1625b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1625B0u;
    {
        const bool branch_taken_0x1625b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1625B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1625B0u;
        // 0x1625b4: 0xa20300ef  sb          $v1, 0xEF($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 239), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1625b0) {
            ctx->pc = 0x1625C0u;
            goto label_1625c0;
        }
    }
    ctx->pc = 0x1625B8u;
    // 0x1625b8: 0xa20000ee  sb          $zero, 0xEE($s0)
    ctx->pc = 0x1625b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 238), (uint8_t)GPR_U32(ctx, 0));
    // 0x1625bc: 0xa20000ef  sb          $zero, 0xEF($s0)
    ctx->pc = 0x1625bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 239), (uint8_t)GPR_U32(ctx, 0));
label_1625c0:
    // 0x1625c0: 0x264274a0  addiu       $v0, $s2, 0x74A0
    ctx->pc = 0x1625c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
label_1625c4:
    // 0x1625c4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1625c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1625c8: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x1625c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x1625cc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1625ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1625d0: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1625D0u;
    {
        const bool branch_taken_0x1625d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1625D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1625D0u;
        // 0x1625d4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1625d0) {
            ctx->pc = 0x16268Cu;
            goto label_16268c;
        }
    }
    ctx->pc = 0x1625D8u;
    // 0x1625d8: 0x820200ee  lb          $v0, 0xEE($s0)
    ctx->pc = 0x1625d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 238)));
    // 0x1625dc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1625dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1625e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1625e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1625e4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1625e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1625e8: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x1625e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1625ec: 0x9064008b  lbu         $a0, 0x8B($v1)
    ctx->pc = 0x1625ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 139)));
    // 0x1625f0: 0x1485001e  bne         $a0, $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1625F0u;
    {
        const bool branch_taken_0x1625f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1625F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1625F0u;
        // 0x1625f4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1625f0) {
            ctx->pc = 0x16266Cu;
            goto label_16266c;
        }
    }
    ctx->pc = 0x1625F8u;
    // 0x1625f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1625f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1625fc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1625fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x162600: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x162600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x162604: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x162604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x162608: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x162608u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16260c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16260cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162610: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x162610u;
    SET_GPR_U32(ctx, 31, 0x162618u);
    ctx->pc = 0x162614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162610u;
    // 0x162614: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x162610u, 0x162618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162618u;
label_162618:
    // 0x162618: 0x820200ef  lb          $v0, 0xEF($s0)
    ctx->pc = 0x162618u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 239)));
    // 0x16261c: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x16261cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x162620: 0x820600ee  lb          $a2, 0xEE($s0)
    ctx->pc = 0x162620u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 238)));
    // 0x162624: 0x24e7d938  addiu       $a3, $a3, -0x26C8
    ctx->pc = 0x162624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957368));
    // 0x162628: 0x820800ed  lb          $t0, 0xED($s0)
    ctx->pc = 0x162628u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 237)));
    // 0x16262c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x16262cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x162630: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x162630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x162634: 0x920500ec  lbu         $a1, 0xEC($s0)
    ctx->pc = 0x162634u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x162638: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x162638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x16263c: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x16263cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x162640: 0x80c300f1  lb          $v1, 0xF1($a2)
    ctx->pc = 0x162640u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 241)));
    // 0x162644: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x162644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x162648: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x162648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16264c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x16264cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x162650: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x162650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x162654: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x162654u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x162658: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x162658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x16265c: 0xc07f05c  jal         func_1FC170
    ctx->pc = 0x16265Cu;
    SET_GPR_U32(ctx, 31, 0x162664u);
    ctx->pc = 0x162660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16265Cu;
    // 0x162660: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC170u, 0x16265Cu, 0x162664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162664u;
label_162664:
    // 0x162664: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x162664u;
    {
        const bool branch_taken_0x162664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162664u;
        // 0x162668: 0x264274a0  addiu       $v0, $s2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162664) {
            ctx->pc = 0x162690u;
            goto label_162690;
        }
    }
    ctx->pc = 0x16266Cu;
label_16266c:
    // 0x16266c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16266cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162670: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x162670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x162674: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x162674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x162678: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x162678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16267c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16267cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x162680: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x162680u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162684: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x162684u;
    SET_GPR_U32(ctx, 31, 0x16268Cu);
    ctx->pc = 0x162688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162684u;
    // 0x162688: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x162684u, 0x16268Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16268Cu;
label_16268c:
    // 0x16268c: 0x264274a0  addiu       $v0, $s2, 0x74A0
    ctx->pc = 0x16268cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
label_162690:
    // 0x162690: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x162690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x162694: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x162694u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x162698: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x162698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x16269c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x16269Cu;
    {
        const bool branch_taken_0x16269c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1626A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16269Cu;
        // 0x1626a0: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16269c) {
            ctx->pc = 0x1626C8u;
            goto label_1626c8;
        }
    }
    ctx->pc = 0x1626A4u;
    // 0x1626a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1626a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1626a8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1626a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1626ac: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x1626acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x1626b0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1626b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1626b4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1626b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1626b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1626b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1626bc: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1626BCu;
    SET_GPR_U32(ctx, 31, 0x1626C4u);
    ctx->pc = 0x1626C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1626BCu;
    // 0x1626c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1626BCu, 0x1626C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1626C4u;
label_1626c4:
    // 0x1626c4: 0xa200005a  sb          $zero, 0x5A($s0)
    ctx->pc = 0x1626c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 0));
label_1626c8:
    // 0x1626c8: 0x264274a0  addiu       $v0, $s2, 0x74A0
    ctx->pc = 0x1626c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
label_1626cc:
    // 0x1626cc: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1626ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x1626d0: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x1626d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x1626d4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1626d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1626d8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1626D8u;
    {
        const bool branch_taken_0x1626d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1626DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1626D8u;
        // 0x1626dc: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1626d8) {
            ctx->pc = 0x162708u;
            goto label_162708;
        }
    }
    ctx->pc = 0x1626E0u;
    // 0x1626e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1626e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1626e4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1626e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1626e8: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x1626e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x1626ec: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1626ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1626f0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1626f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1626f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1626f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1626f8: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1626F8u;
    SET_GPR_U32(ctx, 31, 0x162700u);
    ctx->pc = 0x1626FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1626F8u;
    // 0x1626fc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1626F8u, 0x162700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162700u;
label_162700:
    // 0x162700: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x162700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x162704: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x162704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_162708:
    // 0x162708: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x162708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16270c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16270cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162710: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x162710u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162718: 0x3e00008  jr          $ra
    ctx->pc = 0x162718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162718u;
        // 0x16271c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162720u;
}
