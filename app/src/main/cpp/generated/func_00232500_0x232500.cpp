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

// Function: func_00232500
// Address: 0x232500 - 0x233248
void func_00232500_0x232500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00232500_0x232500");
#endif

    switch (ctx->pc) {
        case 0x232558u: goto label_232558;
        case 0x23257cu: goto label_23257c;
        case 0x2325bcu: goto label_2325bc;
        case 0x23260cu: goto label_23260c;
        case 0x23262cu: goto label_23262c;
        case 0x232664u: goto label_232664;
        case 0x232684u: goto label_232684;
        case 0x2326a8u: goto label_2326a8;
        case 0x2326dcu: goto label_2326dc;
        case 0x2326fcu: goto label_2326fc;
        case 0x232730u: goto label_232730;
        case 0x232750u: goto label_232750;
        case 0x23276cu: goto label_23276c;
        case 0x2327acu: goto label_2327ac;
        case 0x2327e8u: goto label_2327e8;
        case 0x232808u: goto label_232808;
        case 0x232824u: goto label_232824;
        case 0x23286cu: goto label_23286c;
        case 0x232894u: goto label_232894;
        case 0x2328ccu: goto label_2328cc;
        case 0x2328f8u: goto label_2328f8;
        case 0x23291cu: goto label_23291c;
        case 0x23293cu: goto label_23293c;
        case 0x232960u: goto label_232960;
        case 0x2329a4u: goto label_2329a4;
        case 0x2329c4u: goto label_2329c4;
        case 0x232a00u: goto label_232a00;
        case 0x232a20u: goto label_232a20;
        case 0x232a78u: goto label_232a78;
        case 0x232a98u: goto label_232a98;
        case 0x232ad0u: goto label_232ad0;
        case 0x232af0u: goto label_232af0;
        case 0x232b28u: goto label_232b28;
        case 0x232b48u: goto label_232b48;
        case 0x232b7cu: goto label_232b7c;
        case 0x232b9cu: goto label_232b9c;
        case 0x232be0u: goto label_232be0;
        case 0x232c00u: goto label_232c00;
        case 0x232c44u: goto label_232c44;
        case 0x232c68u: goto label_232c68;
        case 0x232c88u: goto label_232c88;
        case 0x232cc0u: goto label_232cc0;
        case 0x232cecu: goto label_232cec;
        case 0x232d0cu: goto label_232d0c;
        case 0x232d44u: goto label_232d44;
        case 0x232d64u: goto label_232d64;
        case 0x232d9cu: goto label_232d9c;
        case 0x232dbcu: goto label_232dbc;
        case 0x232df4u: goto label_232df4;
        case 0x232e18u: goto label_232e18;
        case 0x232e2cu: goto label_232e2c;
        case 0x232e50u: goto label_232e50;
        case 0x232e80u: goto label_232e80;
        case 0x232eecu: goto label_232eec;
        case 0x232ef8u: goto label_232ef8;
        case 0x232fa8u: goto label_232fa8;
        case 0x232fccu: goto label_232fcc;
        case 0x23302cu: goto label_23302c;
        case 0x233050u: goto label_233050;
        case 0x233068u: goto label_233068;
        case 0x233080u: goto label_233080;
        case 0x23308cu: goto label_23308c;
        case 0x2330a8u: goto label_2330a8;
        case 0x2330b4u: goto label_2330b4;
        case 0x2330bcu: goto label_2330bc;
        case 0x2330e4u: goto label_2330e4;
        case 0x2330f0u: goto label_2330f0;
        case 0x23314cu: goto label_23314c;
        case 0x23316cu: goto label_23316c;
        case 0x233178u: goto label_233178;
        case 0x23318cu: goto label_23318c;
        case 0x2331b8u: goto label_2331b8;
        case 0x2331fcu: goto label_2331fc;
        default: break;
    }

    ctx->pc = 0x232500u;

    // 0x232500: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x232500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x232504: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x232504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x232508: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x232508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x23250c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x23250cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x232510: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x232510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232514: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x232514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x232518: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x232518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x23251c: 0x241404e2  addiu       $s4, $zero, 0x4E2
    ctx->pc = 0x23251cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1250));
    // 0x232520: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x232520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x232524: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x232524u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x232528: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x232528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x23252c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x23252cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232530: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x232530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x232534: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x232534u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232538: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x232538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x23253c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23253cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x232540: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x232540u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x232544: 0xa223186a  sb          $v1, 0x186A($s1)
    ctx->pc = 0x232544u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6250), (uint8_t)GPR_U32(ctx, 3));
    // 0x232548: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x232548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x23254c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x23254cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x232550: 0xc098a84  jal         func_262A10
    ctx->pc = 0x232550u;
    SET_GPR_U32(ctx, 31, 0x232558u);
    ctx->pc = 0x232554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232550u;
    // 0x232554: 0xae2216d4  sw          $v0, 0x16D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A10u, 0x232550u, 0x232558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232558u;
label_232558:
    // 0x232558: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x232558u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x23255c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23255Cu;
    {
        const bool branch_taken_0x23255c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23255c) {
            ctx->pc = 0x232560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23255Cu;
            // 0x232560: 0xa2201864  sb          $zero, 0x1864($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232574u;
            goto label_232574;
        }
    }
    ctx->pc = 0x232564u;
    // 0x232564: 0x5053029f  beql        $v0, $s3, . + 4 + (0x29F << 2)
    ctx->pc = 0x232564u;
    {
        const bool branch_taken_0x232564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x232564) {
            ctx->pc = 0x232568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232564u;
            // 0x232568: 0xc6210604  lwc1        $f1, 0x604($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x232FE4u;
            goto label_232fe4;
        }
    }
    ctx->pc = 0x23256Cu;
    // 0x23256c: 0x100002e1  b           . + 4 + (0x2E1 << 2)
    ctx->pc = 0x23256Cu;
    {
        const bool branch_taken_0x23256c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23256Cu;
        // 0x232570: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23256c) {
            ctx->pc = 0x2330F4u;
            goto label_2330f4;
        }
    }
    ctx->pc = 0x232574u;
label_232574:
    // 0x232574: 0xc09d91a  jal         func_276468
    ctx->pc = 0x232574u;
    SET_GPR_U32(ctx, 31, 0x23257Cu);
    ctx->pc = 0x232578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232574u;
    // 0x232578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x232574u, 0x23257Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23257Cu;
label_23257c:
    // 0x23257c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23257cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x232580: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x232580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232584: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x232584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x232588: 0xae2005f4  sw          $zero, 0x5F4($s1)
    ctx->pc = 0x232588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 0));
    // 0x23258c: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x23258cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x232590: 0xae3305f8  sw          $s3, 0x5F8($s1)
    ctx->pc = 0x232590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 19));
    // 0x232594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232598: 0xae2005fc  sw          $zero, 0x5FC($s1)
    ctx->pc = 0x232598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
    // 0x23259c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x23259cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2325a0: 0xae2305f0  sw          $v1, 0x5F0($s1)
    ctx->pc = 0x2325a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 3));
    // 0x2325a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2325a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2325a8: 0xe6200608  swc1        $f0, 0x608($s1)
    ctx->pc = 0x2325a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1544), bits); }
    // 0x2325ac: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x2325acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2325b0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2325b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2325b4: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2325B4u;
    SET_GPR_U32(ctx, 31, 0x2325BCu);
    ctx->pc = 0x2325B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2325B4u;
    // 0x2325b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2325B4u, 0x2325BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2325BCu;
label_2325bc:
    // 0x2325bc: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x2325bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x2325c0: 0xae200604  sw          $zero, 0x604($s1)
    ctx->pc = 0x2325c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1540), GPR_U32(ctx, 0));
    // 0x2325c4: 0x2443fdfe  addiu       $v1, $v0, -0x202
    ctx->pc = 0x2325c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x2325c8: 0x2c62007d  sltiu       $v0, $v1, 0x7D
    ctx->pc = 0x2325c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x2325cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2325CCu;
    {
        const bool branch_taken_0x2325cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2325D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2325CCu;
        // 0x2325d0: 0xae20060c  sw          $zero, 0x60C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2325cc) {
            ctx->pc = 0x2325F0u;
            goto label_2325f0;
        }
    }
    ctx->pc = 0x2325D4u;
    // 0x2325d4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x2325d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x2325d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2325d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2325dc: 0x24429af0  addiu       $v0, $v0, -0x6510
    ctx->pc = 0x2325dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941424));
    // 0x2325e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2325e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2325e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2325e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2325e8: 0x800008  jr          $a0
    ctx->pc = 0x2325E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2325F0u: goto label_2325f0;
            case 0x232648u: goto label_232648;
            case 0x2326A0u: goto label_2326a0;
            case 0x232790u: goto label_232790;
            case 0x2327CCu: goto label_2327cc;
            case 0x232848u: goto label_232848;
            case 0x2328B0u: goto label_2328b0;
            case 0x23296Cu: goto label_23296c;
            case 0x232988u: goto label_232988;
            case 0x2329E0u: goto label_2329e0;
            case 0x232A3Cu: goto label_232a3c;
            case 0x232A58u: goto label_232a58;
            case 0x232AB4u: goto label_232ab4;
            case 0x232B0Cu: goto label_232b0c;
            case 0x232B60u: goto label_232b60;
            case 0x232BC4u: goto label_232bc4;
            case 0x232C4Cu: goto label_232c4c;
            case 0x232CA4u: goto label_232ca4;
            case 0x232D28u: goto label_232d28;
            case 0x232D80u: goto label_232d80;
            case 0x232DD8u: goto label_232dd8;
            case 0x232E0Cu: goto label_232e0c;
            case 0x232EA4u: goto label_232ea4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2325E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2325F0u;
label_2325f0:
    // 0x2325f0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2325f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2325f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2325f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2325f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2325f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2325fc: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x2325fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x232600: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x232600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x232604: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x232604u;
    SET_GPR_U32(ctx, 31, 0x23260Cu);
    ctx->pc = 0x232608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232604u;
    // 0x232608: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x232604u, 0x23260Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23260Cu;
label_23260c:
    // 0x23260c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x23260cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232610: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x232610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x232614: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x232614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x232618: 0x8c430148  lw          $v1, 0x148($v0)
    ctx->pc = 0x232618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x23261c: 0x8c450144  lw          $a1, 0x144($v0)
    ctx->pc = 0x23261cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
    // 0x232620: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x232620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232624: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x232624u;
    SET_GPR_U32(ctx, 31, 0x23262Cu);
    ctx->pc = 0x232628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232624u;
    // 0x232628: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x232624u, 0x23262Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23262Cu;
label_23262c:
    // 0x23262c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x23262cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232630: 0x1443022f  bne         $v0, $v1, . + 4 + (0x22F << 2)
    ctx->pc = 0x232630u;
    {
        const bool branch_taken_0x232630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x232634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232630u;
        // 0x232634: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232630) {
            ctx->pc = 0x232EF0u;
            goto label_232ef0;
        }
    }
    ctx->pc = 0x232638u;
    // 0x232638: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x232638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x23263c: 0x8c62014c  lw          $v0, 0x14C($v1)
    ctx->pc = 0x23263cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
    // 0x232640: 0x1000022a  b           . + 4 + (0x22A << 2)
    ctx->pc = 0x232640u;
    {
        const bool branch_taken_0x232640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232640u;
        // 0x232644: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232640) {
            ctx->pc = 0x232EECu;
            goto label_232eec;
        }
    }
    ctx->pc = 0x232648u;
label_232648:
    // 0x232648: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x232648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x23264c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23264cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232650: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x232650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x232654: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x232654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x232658: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x232658u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23265c: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x23265Cu;
    SET_GPR_U32(ctx, 31, 0x232664u);
    ctx->pc = 0x232660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23265Cu;
    // 0x232660: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x23265Cu, 0x232664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232664u;
label_232664:
    // 0x232664: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x232664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232668: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x232668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x23266c: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x23266cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x232670: 0x8c4306f8  lw          $v1, 0x6F8($v0)
    ctx->pc = 0x232670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1784)));
    // 0x232674: 0x8c4506f4  lw          $a1, 0x6F4($v0)
    ctx->pc = 0x232674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1780)));
    // 0x232678: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x232678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23267c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23267Cu;
    SET_GPR_U32(ctx, 31, 0x232684u);
    ctx->pc = 0x232680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23267Cu;
    // 0x232680: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23267Cu, 0x232684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232684u;
label_232684:
    // 0x232684: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x232684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232688: 0x14430219  bne         $v0, $v1, . + 4 + (0x219 << 2)
    ctx->pc = 0x232688u;
    {
        const bool branch_taken_0x232688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232688u;
        // 0x23268c: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232688) {
            ctx->pc = 0x232EF0u;
            goto label_232ef0;
        }
    }
    ctx->pc = 0x232690u;
    // 0x232690: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x232690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232694: 0x8c6206fc  lw          $v0, 0x6FC($v1)
    ctx->pc = 0x232694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1788)));
    // 0x232698: 0x10000214  b           . + 4 + (0x214 << 2)
    ctx->pc = 0x232698u;
    {
        const bool branch_taken_0x232698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232698u;
        // 0x23269c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232698) {
            ctx->pc = 0x232EECu;
            goto label_232eec;
        }
    }
    ctx->pc = 0x2326A0u;
label_2326a0:
    // 0x2326a0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2326A0u;
    SET_GPR_U32(ctx, 31, 0x2326A8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2326A0u, 0x2326A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2326A8u;
label_2326a8:
    // 0x2326a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2326a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2326ac: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2326ACu;
    {
        const bool branch_taken_0x2326ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2326B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326ACu;
        // 0x2326b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2326ac) {
            ctx->pc = 0x232718u;
            goto label_232718;
        }
    }
    ctx->pc = 0x2326B4u;
    // 0x2326b4: 0x8e2206f0  lw          $v0, 0x6F0($s1)
    ctx->pc = 0x2326b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1776)));
    // 0x2326b8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2326B8u;
    {
        const bool branch_taken_0x2326b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2326BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326B8u;
        // 0x2326bc: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2326b8) {
            ctx->pc = 0x23271Cu;
            goto label_23271c;
        }
    }
    ctx->pc = 0x2326C0u;
    // 0x2326c0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2326c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2326c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2326c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2326c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2326c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2326cc: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x2326ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2326d0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2326d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2326d4: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2326D4u;
    SET_GPR_U32(ctx, 31, 0x2326DCu);
    ctx->pc = 0x2326D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2326D4u;
    // 0x2326d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2326D4u, 0x2326DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2326DCu;
label_2326dc:
    // 0x2326dc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2326dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2326e0: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2326e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x2326e4: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x2326e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x2326e8: 0x8c431138  lw          $v1, 0x1138($v0)
    ctx->pc = 0x2326e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4408)));
    // 0x2326ec: 0x8c451134  lw          $a1, 0x1134($v0)
    ctx->pc = 0x2326ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4404)));
    // 0x2326f0: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2326f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2326f4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2326F4u;
    SET_GPR_U32(ctx, 31, 0x2326FCu);
    ctx->pc = 0x2326F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2326F4u;
    // 0x2326f8: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2326F4u, 0x2326FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2326FCu;
label_2326fc:
    // 0x2326fc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2326fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232700: 0x14430098  bne         $v0, $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x232700u;
    {
        const bool branch_taken_0x232700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x232704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232700u;
        // 0x232704: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232700) {
            ctx->pc = 0x232964u;
            goto label_232964;
        }
    }
    ctx->pc = 0x232708u;
    // 0x232708: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x232708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x23270c: 0x8c62113c  lw          $v0, 0x113C($v1)
    ctx->pc = 0x23270cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4412)));
    // 0x232710: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x232710u;
    {
        const bool branch_taken_0x232710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232710u;
        // 0x232714: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232710) {
            ctx->pc = 0x232960u;
            goto label_232960;
        }
    }
    ctx->pc = 0x232718u;
label_232718:
    // 0x232718: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x232718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_23271c:
    // 0x23271c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23271cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232720: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x232720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x232724: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x232724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x232728: 0xc098278  jal         func_2609E0
    ctx->pc = 0x232728u;
    SET_GPR_U32(ctx, 31, 0x232730u);
    ctx->pc = 0x23272Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232728u;
    // 0x23272c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x232728u, 0x232730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232730u;
label_232730:
    // 0x232730: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x232730u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x232734: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x232734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x232738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23273c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23273cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232740: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x232740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x232744: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x232744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x232748: 0xc09827e  jal         func_2609F8
    ctx->pc = 0x232748u;
    SET_GPR_U32(ctx, 31, 0x232750u);
    ctx->pc = 0x23274Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232748u;
    // 0x23274c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609F8u, 0x232748u, 0x232750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232750u;
label_232750:
    // 0x232750: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x232750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232754: 0x26049b70  addiu       $a0, $s0, -0x6490
    ctx->pc = 0x232754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x232758: 0x8c431158  lw          $v1, 0x1158($v0)
    ctx->pc = 0x232758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4440)));
    // 0x23275c: 0x8c45115c  lw          $a1, 0x115C($v0)
    ctx->pc = 0x23275cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4444)));
    // 0x232760: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x232760u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232764: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x232764u;
    SET_GPR_U32(ctx, 31, 0x23276Cu);
    ctx->pc = 0x232768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232764u;
    // 0x232768: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x232764u, 0x23276Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23276Cu;
label_23276c:
    // 0x23276c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x23276cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232770: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x232770u;
    {
        const bool branch_taken_0x232770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x232774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232770u;
        // 0x232774: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232770) {
            ctx->pc = 0x232788u;
            goto label_232788;
        }
    }
    ctx->pc = 0x232778u;
    // 0x232778: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x232778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x23277c: 0x8c621160  lw          $v0, 0x1160($v1)
    ctx->pc = 0x23277cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4448)));
    // 0x232780: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x232780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x232784: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x232784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_232788:
    // 0x232788: 0x100001d8  b           . + 4 + (0x1D8 << 2)
    ctx->pc = 0x232788u;
    {
        const bool branch_taken_0x232788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232788u;
        // 0x23278c: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232788) {
            ctx->pc = 0x232EECu;
            goto label_232eec;
        }
    }
    ctx->pc = 0x232790u;
label_232790:
    // 0x232790: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232794: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x232794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x232798: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x232798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23279c: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x23279cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2327a0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2327a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2327a4: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2327A4u;
    SET_GPR_U32(ctx, 31, 0x2327ACu);
    ctx->pc = 0x2327A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2327A4u;
    // 0x2327a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2327A4u, 0x2327ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327ACu;
label_2327ac:
    // 0x2327ac: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2327acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2327b0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2327b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2327b4: 0x8c4315dc  lw          $v1, 0x15DC($v0)
    ctx->pc = 0x2327b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5596)));
    // 0x2327b8: 0x8c4415e0  lw          $a0, 0x15E0($v0)
    ctx->pc = 0x2327b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5600)));
    // 0x2327bc: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2327bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2327c0: 0xae2505f0  sw          $a1, 0x5F0($s1)
    ctx->pc = 0x2327c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 5));
    // 0x2327c4: 0x100001c9  b           . + 4 + (0x1C9 << 2)
    ctx->pc = 0x2327C4u;
    {
        const bool branch_taken_0x2327c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2327C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327C4u;
        // 0x2327c8: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2327c4) {
            ctx->pc = 0x232EECu;
            goto label_232eec;
        }
    }
    ctx->pc = 0x2327CCu;
label_2327cc:
    // 0x2327cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2327ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2327d0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2327d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2327d4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2327d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2327d8: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x2327d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2327dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2327dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2327e0: 0xc098278  jal         func_2609E0
    ctx->pc = 0x2327E0u;
    SET_GPR_U32(ctx, 31, 0x2327E8u);
    ctx->pc = 0x2327E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2327E0u;
    // 0x2327e4: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x2327E0u, 0x2327E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327E8u;
label_2327e8:
    // 0x2327e8: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x2327e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x2327ec: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2327ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2327f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2327f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2327f4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2327f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2327f8: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x2327f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2327fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2327fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232800: 0xc09827e  jal         func_2609F8
    ctx->pc = 0x232800u;
    SET_GPR_U32(ctx, 31, 0x232808u);
    ctx->pc = 0x232804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232800u;
    // 0x232804: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609F8u, 0x232800u, 0x232808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232808u;
label_232808:
    // 0x232808: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x232808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x23280c: 0x26049b70  addiu       $a0, $s0, -0x6490
    ctx->pc = 0x23280cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x232810: 0x8c431884  lw          $v1, 0x1884($v0)
    ctx->pc = 0x232810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6276)));
    // 0x232814: 0x8c451888  lw          $a1, 0x1888($v0)
    ctx->pc = 0x232814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6280)));
    // 0x232818: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x232818u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23281c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23281Cu;
    SET_GPR_U32(ctx, 31, 0x232824u);
    ctx->pc = 0x232820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23281Cu;
    // 0x232820: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23281Cu, 0x232824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232824u;
label_232824:
    // 0x232824: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x232824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232828: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x232828u;
    {
        const bool branch_taken_0x232828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232828u;
        // 0x23282c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232828) {
            ctx->pc = 0x232840u;
            goto label_232840;
        }
    }
    ctx->pc = 0x232830u;
    // 0x232830: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x232830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232834: 0x8c62188c  lw          $v0, 0x188C($v1)
    ctx->pc = 0x232834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6284)));
    // 0x232838: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x232838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23283c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x23283cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_232840:
    // 0x232840: 0x100001aa  b           . + 4 + (0x1AA << 2)
    ctx->pc = 0x232840u;
    {
        const bool branch_taken_0x232840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232840u;
        // 0x232844: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232840) {
            ctx->pc = 0x232EECu;
            goto label_232eec;
        }
    }
    ctx->pc = 0x232848u;
label_232848:
    // 0x232848: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x232848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x23284c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23284cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232850: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x232850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x232854: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x232854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x232858: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x232858u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23285c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23285cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232860: 0x8e370704  lw          $s7, 0x704($s1)
    ctx->pc = 0x232860u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1796)));
    // 0x232864: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x232864u;
    SET_GPR_U32(ctx, 31, 0x23286Cu);
    ctx->pc = 0x232868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232864u;
    // 0x232868: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x232864u, 0x23286Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23286Cu;
label_23286c:
    // 0x23286c: 0x24140061  addiu       $s4, $zero, 0x61
    ctx->pc = 0x23286cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x232870: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x232870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232874: 0x26049b70  addiu       $a0, $s0, -0x6490
    ctx->pc = 0x232874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x232878: 0x2413000c  addiu       $s3, $zero, 0xC
    ctx->pc = 0x232878u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x23287c: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x23287cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x232880: 0x8c4334bc  lw          $v1, 0x34BC($v0)
    ctx->pc = 0x232880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13500)));
    // 0x232884: 0x8c4534b8  lw          $a1, 0x34B8($v0)
    ctx->pc = 0x232884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13496)));
    // 0x232888: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x232888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23288c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23288Cu;
    SET_GPR_U32(ctx, 31, 0x232894u);
    ctx->pc = 0x232890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23288Cu;
    // 0x232890: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23288Cu, 0x232894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232894u;
label_232894:
    // 0x232894: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x232894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232898: 0x54430031  bnel        $v0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x232898u;
    {
        const bool branch_taken_0x232898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x232898) {
            ctx->pc = 0x23289Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232898u;
            // 0x23289c: 0x2413000b  addiu       $s3, $zero, 0xB (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232960u;
            goto label_232960;
        }
    }
    ctx->pc = 0x2328A0u;
    // 0x2328a0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2328a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2328a4: 0x8c6234c0  lw          $v0, 0x34C0($v1)
    ctx->pc = 0x2328a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13504)));
    // 0x2328a8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2328A8u;
    {
        const bool branch_taken_0x2328a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2328ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328A8u;
        // 0x2328ac: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2328a8) {
            ctx->pc = 0x232960u;
            goto label_232960;
        }
    }
    ctx->pc = 0x2328B0u;
label_2328b0:
    // 0x2328b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2328b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2328b4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2328b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2328b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2328b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2328bc: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x2328bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2328c0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2328c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2328c4: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2328C4u;
    SET_GPR_U32(ctx, 31, 0x2328CCu);
    ctx->pc = 0x2328C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2328C4u;
    // 0x2328c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2328C4u, 0x2328CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2328CCu;
label_2328cc:
    // 0x2328cc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2328ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2328d0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2328d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2328d4: 0x8e260700  lw          $a2, 0x700($s1)
    ctx->pc = 0x2328d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1792)));
    // 0x2328d8: 0x8c4315dc  lw          $v1, 0x15DC($v0)
    ctx->pc = 0x2328d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5596)));
    // 0x2328dc: 0x8c4415e0  lw          $a0, 0x15E0($v0)
    ctx->pc = 0x2328dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5600)));
    // 0x2328e0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2328e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2328e4: 0xae2505f0  sw          $a1, 0x5F0($s1)
    ctx->pc = 0x2328e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 5));
    // 0x2328e8: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x2328E8u;
    {
        const bool branch_taken_0x2328e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2328ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328E8u;
        // 0x2328ec: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2328e8) {
            ctx->pc = 0x232960u;
            goto label_232960;
        }
    }
    ctx->pc = 0x2328F0u;
    // 0x2328f0: 0xc0742c2  jal         func_1D0B08
    ctx->pc = 0x2328F0u;
    SET_GPR_U32(ctx, 31, 0x2328F8u);
    ctx->pc = 0x2328F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2328F0u;
    // 0x2328f4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0B08u, 0x2328F0u, 0x2328F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2328F8u;
label_2328f8:
    // 0x2328f8: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2328F8u;
    {
        const bool branch_taken_0x2328f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2328FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328F8u;
        // 0x2328fc: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2328f8) {
            ctx->pc = 0x232964u;
            goto label_232964;
        }
    }
    ctx->pc = 0x232900u;
    // 0x232900: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x232900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x232904: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232908: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x232908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23290c: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x23290cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x232910: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x232910u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x232914: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x232914u;
    SET_GPR_U32(ctx, 31, 0x23291Cu);
    ctx->pc = 0x232918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232914u;
    // 0x232918: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x232914u, 0x23291Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23291Cu;
label_23291c:
    // 0x23291c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x23291cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232920: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x232920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x232924: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x232924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x232928: 0x8c431e70  lw          $v1, 0x1E70($v0)
    ctx->pc = 0x232928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7792)));
    // 0x23292c: 0x8c451e74  lw          $a1, 0x1E74($v0)
    ctx->pc = 0x23292cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7796)));
    // 0x232930: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x232930u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232934: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x232934u;
    SET_GPR_U32(ctx, 31, 0x23293Cu);
    ctx->pc = 0x232938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232934u;
    // 0x232938: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x232934u, 0x23293Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23293Cu;
label_23293c:
    // 0x23293c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x23293cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232940: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x232940u;
    {
        const bool branch_taken_0x232940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x232944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232940u;
        // 0x232944: 0x8e250700  lw          $a1, 0x700($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232940) {
            ctx->pc = 0x232954u;
            goto label_232954;
        }
    }
    ctx->pc = 0x232948u;
    // 0x232948: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x232948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x23294c: 0x8c621e78  lw          $v0, 0x1E78($v1)
    ctx->pc = 0x23294cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7800)));
    // 0x232950: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x232950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_232954:
    // 0x232954: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232958: 0xc09abc8  jal         func_26AF20
    ctx->pc = 0x232958u;
    SET_GPR_U32(ctx, 31, 0x232960u);
    ctx->pc = 0x23295Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232958u;
    // 0x23295c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AF20u, 0x232958u, 0x232960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232960u;
label_232960:
    // 0x232960: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x232960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_232964:
    // 0x232964: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x232964u;
    {
        const bool branch_taken_0x232964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232964u;
        // 0x232968: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232964) {
            ctx->pc = 0x232EECu;
            goto label_232eec;
        }
    }
    ctx->pc = 0x23296Cu;
label_23296c:
    // 0x23296c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23296cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x232970: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232974: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x232974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x232978: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x232978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x23297c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x23297cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x232980: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x232980u;
    {
        const bool branch_taken_0x232980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232980u;
        // 0x232984: 0x24090020  addiu       $t1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232980) {
            ctx->pc = 0x2329F8u;
            goto label_2329f8;
        }
    }
    ctx->pc = 0x232988u;
label_232988:
    // 0x232988: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x232988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x23298c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23298cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232990: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x232990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x232994: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x232994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x232998: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x232998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23299c: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x23299Cu;
    SET_GPR_U32(ctx, 31, 0x2329A4u);
    ctx->pc = 0x2329A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23299Cu;
    // 0x2329a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x23299Cu, 0x2329A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2329A4u;
label_2329a4:
    // 0x2329a4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2329a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2329a8: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2329a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x2329ac: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x2329acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x2329b0: 0x8c430e28  lw          $v1, 0xE28($v0)
    ctx->pc = 0x2329b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x2329b4: 0x8c450e24  lw          $a1, 0xE24($v0)
    ctx->pc = 0x2329b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3620)));
    // 0x2329b8: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2329b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2329bc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2329BCu;
    SET_GPR_U32(ctx, 31, 0x2329C4u);
    ctx->pc = 0x2329C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2329BCu;
    // 0x2329c0: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2329BCu, 0x2329C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2329C4u;
label_2329c4:
    // 0x2329c4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2329c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2329c8: 0x14430149  bne         $v0, $v1, . + 4 + (0x149 << 2)
    ctx->pc = 0x2329C8u;
    {
        const bool branch_taken_0x2329c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2329CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2329C8u;
        // 0x2329cc: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2329c8) {
            ctx->pc = 0x232EF0u;
            goto label_232ef0;
        }
    }
    ctx->pc = 0x2329D0u;
    // 0x2329d0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2329d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2329d4: 0x8c620e2c  lw          $v0, 0xE2C($v1)
    ctx->pc = 0x2329d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3628)));
    // 0x2329d8: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x2329D8u;
    {
        const bool branch_taken_0x2329d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2329DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2329D8u;
        // 0x2329dc: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2329d8) {
            ctx->pc = 0x232EECu;
            goto label_232eec;
        }
    }
    ctx->pc = 0x2329E0u;
label_2329e0:
    // 0x2329e0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2329e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2329e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2329e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2329e8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2329e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2329ec: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x2329ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2329f0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2329f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2329f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2329f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2329f8:
    // 0x2329f8: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2329F8u;
    SET_GPR_U32(ctx, 31, 0x232A00u);
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2329F8u, 0x232A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A00u;
label_232a00:
    // 0x232a00: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x232a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232a04: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x232a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x232a08: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x232a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x232a0c: 0x8c430db4  lw          $v1, 0xDB4($v0)
    ctx->pc = 0x232a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3508)));
    // 0x232a10: 0x8c450db0  lw          $a1, 0xDB0($v0)
    ctx->pc = 0x232a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3504)));
    // 0x232a14: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x232a14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232a18: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x232A18u;
    SET_GPR_U32(ctx, 31, 0x232A20u);
    ctx->pc = 0x232A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232A18u;
    // 0x232a1c: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x232A18u, 0x232A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A20u;
label_232a20:
    // 0x232a20: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x232a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232a24: 0x14430132  bne         $v0, $v1, . + 4 + (0x132 << 2)
    ctx->pc = 0x232A24u;
    {
        const bool branch_taken_0x232a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x232A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A24u;
        // 0x232a28: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232a24) {
            ctx->pc = 0x232EF0u;
            goto label_232ef0;
        }
    }
    ctx->pc = 0x232A2Cu;
    // 0x232a2c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x232a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232a30: 0x8c620db8  lw          $v0, 0xDB8($v1)
    ctx->pc = 0x232a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3512)));
    // 0x232a34: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x232A34u;
    {
        const bool branch_taken_0x232a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A34u;
        // 0x232a38: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232a34) {
            ctx->pc = 0x232EECu;
            goto label_232eec;
        }
    }
    ctx->pc = 0x232A3Cu;
label_232a3c:
    // 0x232a3c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x232a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x232a40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232a44: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x232a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x232a48: 0x24070042  addiu       $a3, $zero, 0x42
    ctx->pc = 0x232a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x232a4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x232a4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232a50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x232A50u;
    {
        const bool branch_taken_0x232a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A50u;
        // 0x232a54: 0x240900f6  addiu       $t1, $zero, 0xF6 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232a50) {
            ctx->pc = 0x232A70u;
            goto label_232a70;
        }
    }
    ctx->pc = 0x232A58u;
label_232a58:
    // 0x232a58: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x232a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x232a5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232a60: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x232a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x232a64: 0x24070042  addiu       $a3, $zero, 0x42
    ctx->pc = 0x232a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x232a68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x232a68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232a6c: 0x24090111  addiu       $t1, $zero, 0x111
    ctx->pc = 0x232a6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
label_232a70:
    // 0x232a70: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x232A70u;
    SET_GPR_U32(ctx, 31, 0x232A78u);
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x232A70u, 0x232A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A78u;
label_232a78:
    // 0x232a78: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x232a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232a7c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x232a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x232a80: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x232a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x232a84: 0x8c4308f4  lw          $v1, 0x8F4($v0)
    ctx->pc = 0x232a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2292)));
    // 0x232a88: 0x8c4508f0  lw          $a1, 0x8F0($v0)
    ctx->pc = 0x232a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2288)));
    // 0x232a8c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x232a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232a90: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x232A90u;
    SET_GPR_U32(ctx, 31, 0x232A98u);
    ctx->pc = 0x232A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232A90u;
    // 0x232a94: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x232A90u, 0x232A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A98u;
label_232a98:
    // 0x232a98: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x232a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232a9c: 0x14430114  bne         $v0, $v1, . + 4 + (0x114 << 2)
    ctx->pc = 0x232A9Cu;
    {
        const bool branch_taken_0x232a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x232AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A9Cu;
        // 0x232aa0: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232a9c) {
            ctx->pc = 0x232EF0u;
            goto label_232ef0;
        }
    }
    ctx->pc = 0x232AA4u;
    // 0x232aa4: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x232aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232aa8: 0x8c6208f8  lw          $v0, 0x8F8($v1)
    ctx->pc = 0x232aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2296)));
    // 0x232aac: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x232AACu;
    {
        const bool branch_taken_0x232aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AACu;
        // 0x232ab0: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232aac) {
            ctx->pc = 0x232EECu;
            goto label_232eec;
        }
    }
    ctx->pc = 0x232AB4u;
label_232ab4:
    // 0x232ab4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x232ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x232ab8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232abc: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x232abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x232ac0: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x232ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x232ac4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x232ac4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232ac8: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x232AC8u;
    SET_GPR_U32(ctx, 31, 0x232AD0u);
    ctx->pc = 0x232ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232AC8u;
    // 0x232acc: 0x240900f6  addiu       $t1, $zero, 0xF6 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x232AC8u, 0x232AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232AD0u;
label_232ad0:
    // 0x232ad0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x232ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232ad4: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x232ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x232ad8: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x232ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x232adc: 0x8c432010  lw          $v1, 0x2010($v0)
    ctx->pc = 0x232adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8208)));
    // 0x232ae0: 0x8c45200c  lw          $a1, 0x200C($v0)
    ctx->pc = 0x232ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8204)));
    // 0x232ae4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x232ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232ae8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x232AE8u;
    SET_GPR_U32(ctx, 31, 0x232AF0u);
    ctx->pc = 0x232AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232AE8u;
    // 0x232aec: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x232AE8u, 0x232AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232AF0u;
label_232af0:
    // 0x232af0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x232af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232af4: 0x144300fe  bne         $v0, $v1, . + 4 + (0xFE << 2)
    ctx->pc = 0x232AF4u;
    {
        const bool branch_taken_0x232af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x232AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AF4u;
        // 0x232af8: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232af4) {
            ctx->pc = 0x232EF0u;
            goto label_232ef0;
        }
    }
    ctx->pc = 0x232AFCu;
    // 0x232afc: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x232afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232b00: 0x8c622014  lw          $v0, 0x2014($v1)
    ctx->pc = 0x232b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8212)));
    // 0x232b04: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x232B04u;
    {
        const bool branch_taken_0x232b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B04u;
        // 0x232b08: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232b04) {
            ctx->pc = 0x232EECu;
            goto label_232eec;
        }
    }
    ctx->pc = 0x232B0Cu;
label_232b0c:
    // 0x232b0c: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x232b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x232b10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b14: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x232b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x232b18: 0x24070045  addiu       $a3, $zero, 0x45
    ctx->pc = 0x232b18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x232b1c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x232b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x232b20: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x232B20u;
    SET_GPR_U32(ctx, 31, 0x232B28u);
    ctx->pc = 0x232B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232B20u;
    // 0x232b24: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x232B20u, 0x232B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232B28u;
label_232b28:
    // 0x232b28: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x232b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232b2c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x232b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x232b30: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x232b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x232b34: 0x8c4319ec  lw          $v1, 0x19EC($v0)
    ctx->pc = 0x232b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6636)));
    // 0x232b38: 0x8c4519e8  lw          $a1, 0x19E8($v0)
    ctx->pc = 0x232b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6632)));
    // 0x232b3c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x232b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232b40: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x232B40u;
    SET_GPR_U32(ctx, 31, 0x232B48u);
    ctx->pc = 0x232B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232B40u;
    // 0x232b44: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x232B40u, 0x232B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232B48u;
label_232b48:
    // 0x232b48: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x232b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232b4c: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x232B4Cu;
    {
        const bool branch_taken_0x232b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x232b4c) {
            ctx->pc = 0x232BB4u;
            goto label_232bb4;
        }
    }
    ctx->pc = 0x232B54u;
    // 0x232b54: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x232b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232b58: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x232B58u;
    {
        const bool branch_taken_0x232b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B58u;
        // 0x232b5c: 0x8c6219f0  lw          $v0, 0x19F0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232b58) {
            ctx->pc = 0x232BB0u;
            goto label_232bb0;
        }
    }
    ctx->pc = 0x232B60u;
label_232b60:
    // 0x232b60: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x232b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x232b64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b68: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x232b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x232b6c: 0x24070045  addiu       $a3, $zero, 0x45
    ctx->pc = 0x232b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x232b70: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x232b70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x232b74: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x232B74u;
    SET_GPR_U32(ctx, 31, 0x232B7Cu);
    ctx->pc = 0x232B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232B74u;
    // 0x232b78: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x232B74u, 0x232B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232B7Cu;
label_232b7c:
    // 0x232b7c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x232b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232b80: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x232b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x232b84: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x232b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x232b88: 0x8c4330dc  lw          $v1, 0x30DC($v0)
    ctx->pc = 0x232b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12508)));
    // 0x232b8c: 0x8c4530d8  lw          $a1, 0x30D8($v0)
    ctx->pc = 0x232b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12504)));
    // 0x232b90: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x232b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232b94: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x232B94u;
    SET_GPR_U32(ctx, 31, 0x232B9Cu);
    ctx->pc = 0x232B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232B94u;
    // 0x232b98: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x232B94u, 0x232B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232B9Cu;
label_232b9c:
    // 0x232b9c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x232b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232ba0: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x232BA0u;
    {
        const bool branch_taken_0x232ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x232ba0) {
            ctx->pc = 0x232BB4u;
            goto label_232bb4;
        }
    }
    ctx->pc = 0x232BA8u;
    // 0x232ba8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x232ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232bac: 0x8c6230e0  lw          $v0, 0x30E0($v1)
    ctx->pc = 0x232bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12512)));
label_232bb0:
    // 0x232bb0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x232bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_232bb4:
    // 0x232bb4: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x232bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x232bb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x232bb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232bbc: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x232BBCu;
    {
        const bool branch_taken_0x232bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232BBCu;
        // 0x232bc0: 0xe6200604  swc1        $f0, 0x604($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x232bbc) {
            ctx->pc = 0x232EECu;
            goto label_232eec;
        }
    }
    ctx->pc = 0x232BC4u;
label_232bc4:
    // 0x232bc4: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x232bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x232bc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232bcc: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x232bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x232bd0: 0x24070045  addiu       $a3, $zero, 0x45
    ctx->pc = 0x232bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x232bd4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x232bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x232bd8: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x232BD8u;
    SET_GPR_U32(ctx, 31, 0x232BE0u);
    ctx->pc = 0x232BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232BD8u;
    // 0x232bdc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x232BD8u, 0x232BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232BE0u;
label_232be0:
    // 0x232be0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x232be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232be4: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x232be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x232be8: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x232be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x232bec: 0x8c4332e0  lw          $v1, 0x32E0($v0)
    ctx->pc = 0x232becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13024)));
    // 0x232bf0: 0x8c4532dc  lw          $a1, 0x32DC($v0)
    ctx->pc = 0x232bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13020)));
    // 0x232bf4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x232bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232bf8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x232BF8u;
    SET_GPR_U32(ctx, 31, 0x232C00u);
    ctx->pc = 0x232BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232BF8u;
    // 0x232bfc: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x232BF8u, 0x232C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C00u;
label_232c00:
    // 0x232c00: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x232c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232c04: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x232C04u;
    {
        const bool branch_taken_0x232c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x232c04) {
            ctx->pc = 0x232C18u;
            goto label_232c18;
        }
    }
    ctx->pc = 0x232C0Cu;
    // 0x232c0c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x232c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232c10: 0x8c6232e4  lw          $v0, 0x32E4($v1)
    ctx->pc = 0x232c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13028)));
    // 0x232c14: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x232c14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_232c18:
    // 0x232c18: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x232c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x232c1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x232c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232c20: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x232c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x232c24: 0x8e240740  lw          $a0, 0x740($s1)
    ctx->pc = 0x232c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1856)));
    // 0x232c28: 0xe6200604  swc1        $f0, 0x604($s1)
    ctx->pc = 0x232c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
    // 0x232c2c: 0x108000af  beqz        $a0, . + 4 + (0xAF << 2)
    ctx->pc = 0x232C2Cu;
    {
        const bool branch_taken_0x232c2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x232C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232C2Cu;
        // 0x232c30: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232c2c) {
            ctx->pc = 0x232EECu;
            goto label_232eec;
        }
    }
    ctx->pc = 0x232C34u;
    // 0x232c34: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x232c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x232c38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x232c38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x232c3c: 0xc09f744  jal         func_27DD10
    ctx->pc = 0x232C3Cu;
    SET_GPR_U32(ctx, 31, 0x232C44u);
    ctx->pc = 0x27DD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DD10u, 0x232C3Cu, 0x232C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C44u;
label_232c44:
    // 0x232c44: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x232C44u;
    {
        const bool branch_taken_0x232c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232C44u;
        // 0x232c48: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232c44) {
            ctx->pc = 0x232EF0u;
            goto label_232ef0;
        }
    }
    ctx->pc = 0x232C4Cu;
label_232c4c:
    // 0x232c4c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x232c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x232c50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232c54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x232c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232c58: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x232c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x232c5c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x232c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x232c60: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x232C60u;
    SET_GPR_U32(ctx, 31, 0x232C68u);
    ctx->pc = 0x232C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232C60u;
    // 0x232c64: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x232C60u, 0x232C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C68u;
label_232c68:
    // 0x232c68: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x232c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232c6c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x232c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x232c70: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x232c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x232c74: 0x8c431c34  lw          $v1, 0x1C34($v0)
    ctx->pc = 0x232c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7220)));
    // 0x232c78: 0x8c451c30  lw          $a1, 0x1C30($v0)
    ctx->pc = 0x232c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7216)));
    // 0x232c7c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x232c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232c80: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x232C80u;
    SET_GPR_U32(ctx, 31, 0x232C88u);
    ctx->pc = 0x232C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232C80u;
    // 0x232c84: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x232C80u, 0x232C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C88u;
label_232c88:
    // 0x232c88: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x232c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232c8c: 0x14430098  bne         $v0, $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x232C8Cu;
    {
        const bool branch_taken_0x232c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x232C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232C8Cu;
        // 0x232c90: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232c8c) {
            ctx->pc = 0x232EF0u;
            goto label_232ef0;
        }
    }
    ctx->pc = 0x232C94u;
    // 0x232c94: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x232c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232c98: 0x8c621c38  lw          $v0, 0x1C38($v1)
    ctx->pc = 0x232c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7224)));
    // 0x232c9c: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x232C9Cu;
    {
        const bool branch_taken_0x232c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232C9Cu;
        // 0x232ca0: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232c9c) {
            ctx->pc = 0x232EECu;
            goto label_232eec;
        }
    }
    ctx->pc = 0x232CA4u;
label_232ca4:
    // 0x232ca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232ca8: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x232ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x232cac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x232cacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232cb0: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x232cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x232cb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x232cb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232cb8: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x232CB8u;
    SET_GPR_U32(ctx, 31, 0x232CC0u);
    ctx->pc = 0x232CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232CB8u;
    // 0x232cbc: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x232CB8u, 0x232CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232CC0u;
label_232cc0:
    // 0x232cc0: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x232cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x232cc4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x232cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x232cc8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x232cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x232ccc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x232CCCu;
    {
        const bool branch_taken_0x232ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232CCCu;
        // 0x232cd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ccc) {
            ctx->pc = 0x232CDCu;
            goto label_232cdc;
        }
    }
    ctx->pc = 0x232CD4u;
    // 0x232cd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x232CD4u;
    {
        const bool branch_taken_0x232cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232CD4u;
        // 0x232cd8: 0xa22217c3  sb          $v0, 0x17C3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232cd4) {
            ctx->pc = 0x232CE0u;
            goto label_232ce0;
        }
    }
    ctx->pc = 0x232CDCu;
label_232cdc:
    // 0x232cdc: 0xa22017c3  sb          $zero, 0x17C3($s1)
    ctx->pc = 0x232cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 0));
label_232ce0:
    // 0x232ce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232ce4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x232CE4u;
    SET_GPR_U32(ctx, 31, 0x232CECu);
    ctx->pc = 0x232CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232CE4u;
    // 0x232ce8: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x232CE4u, 0x232CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232CECu;
label_232cec:
    // 0x232cec: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x232cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232cf0: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x232cf0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x232cf4: 0x26049b70  addiu       $a0, $s0, -0x6490
    ctx->pc = 0x232cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x232cf8: 0x8c621cb8  lw          $v0, 0x1CB8($v1)
    ctx->pc = 0x232cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7352)));
    // 0x232cfc: 0x8c651cbc  lw          $a1, 0x1CBC($v1)
    ctx->pc = 0x232cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7356)));
    // 0x232d00: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x232d00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x232d04: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x232D04u;
    SET_GPR_U32(ctx, 31, 0x232D0Cu);
    ctx->pc = 0x232D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232D04u;
    // 0x232d08: 0xa38021  addu        $s0, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x232D04u, 0x232D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D0Cu;
label_232d0c:
    // 0x232d0c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x232d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232d10: 0x14430077  bne         $v0, $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x232D10u;
    {
        const bool branch_taken_0x232d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x232D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D10u;
        // 0x232d14: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d10) {
            ctx->pc = 0x232EF0u;
            goto label_232ef0;
        }
    }
    ctx->pc = 0x232D18u;
    // 0x232d18: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x232d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232d1c: 0x8c621cc0  lw          $v0, 0x1CC0($v1)
    ctx->pc = 0x232d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7360)));
    // 0x232d20: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x232D20u;
    {
        const bool branch_taken_0x232d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D20u;
        // 0x232d24: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d20) {
            ctx->pc = 0x232EECu;
            goto label_232eec;
        }
    }
    ctx->pc = 0x232D28u;
label_232d28:
    // 0x232d28: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x232d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x232d2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232d30: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x232d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x232d34: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x232d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x232d38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x232d38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232d3c: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x232D3Cu;
    SET_GPR_U32(ctx, 31, 0x232D44u);
    ctx->pc = 0x232D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232D3Cu;
    // 0x232d40: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x232D3Cu, 0x232D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D44u;
label_232d44:
    // 0x232d44: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x232d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232d48: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x232d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x232d4c: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x232d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x232d50: 0x8c431c74  lw          $v1, 0x1C74($v0)
    ctx->pc = 0x232d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7284)));
    // 0x232d54: 0x8c451c70  lw          $a1, 0x1C70($v0)
    ctx->pc = 0x232d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7280)));
    // 0x232d58: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x232d58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232d5c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x232D5Cu;
    SET_GPR_U32(ctx, 31, 0x232D64u);
    ctx->pc = 0x232D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232D5Cu;
    // 0x232d60: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x232D5Cu, 0x232D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D64u;
label_232d64:
    // 0x232d64: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x232d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232d68: 0x14430061  bne         $v0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x232D68u;
    {
        const bool branch_taken_0x232d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x232D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D68u;
        // 0x232d6c: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d68) {
            ctx->pc = 0x232EF0u;
            goto label_232ef0;
        }
    }
    ctx->pc = 0x232D70u;
    // 0x232d70: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x232d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232d74: 0x8c621c78  lw          $v0, 0x1C78($v1)
    ctx->pc = 0x232d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7288)));
    // 0x232d78: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x232D78u;
    {
        const bool branch_taken_0x232d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D78u;
        // 0x232d7c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d78) {
            ctx->pc = 0x232EECu;
            goto label_232eec;
        }
    }
    ctx->pc = 0x232D80u;
label_232d80:
    // 0x232d80: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x232d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x232d84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232d88: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x232d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x232d8c: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x232d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x232d90: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x232d90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x232d94: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x232D94u;
    SET_GPR_U32(ctx, 31, 0x232D9Cu);
    ctx->pc = 0x232D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232D94u;
    // 0x232d98: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x232D94u, 0x232D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D9Cu;
label_232d9c:
    // 0x232d9c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x232d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232da0: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x232da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x232da4: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x232da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x232da8: 0x8c432dc8  lw          $v1, 0x2DC8($v0)
    ctx->pc = 0x232da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11720)));
    // 0x232dac: 0x8c452dc4  lw          $a1, 0x2DC4($v0)
    ctx->pc = 0x232dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11716)));
    // 0x232db0: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x232db0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232db4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x232DB4u;
    SET_GPR_U32(ctx, 31, 0x232DBCu);
    ctx->pc = 0x232DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232DB4u;
    // 0x232db8: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x232DB4u, 0x232DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232DBCu;
label_232dbc:
    // 0x232dbc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x232dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232dc0: 0x1443004b  bne         $v0, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x232DC0u;
    {
        const bool branch_taken_0x232dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x232DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DC0u;
        // 0x232dc4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232dc0) {
            ctx->pc = 0x232EF0u;
            goto label_232ef0;
        }
    }
    ctx->pc = 0x232DC8u;
    // 0x232dc8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x232dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232dcc: 0x8c622dcc  lw          $v0, 0x2DCC($v1)
    ctx->pc = 0x232dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11724)));
    // 0x232dd0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x232DD0u;
    {
        const bool branch_taken_0x232dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DD0u;
        // 0x232dd4: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232dd0) {
            ctx->pc = 0x232EECu;
            goto label_232eec;
        }
    }
    ctx->pc = 0x232DD8u;
label_232dd8:
    // 0x232dd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232ddc: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x232ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x232de0: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x232de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x232de4: 0x24070039  addiu       $a3, $zero, 0x39
    ctx->pc = 0x232de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x232de8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x232de8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232dec: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x232DECu;
    SET_GPR_U32(ctx, 31, 0x232DF4u);
    ctx->pc = 0x232DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232DECu;
    // 0x232df0: 0x240900f5  addiu       $t1, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x232DECu, 0x232DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232DF4u;
label_232df4:
    // 0x232df4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x232df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232df8: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x232df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x232dfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x232dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232e00: 0x8c432310  lw          $v1, 0x2310($v0)
    ctx->pc = 0x232e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8976)));
    // 0x232e04: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x232E04u;
    {
        const bool branch_taken_0x232e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E04u;
        // 0x232e08: 0x8c442314  lw          $a0, 0x2314($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8980)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e04) {
            ctx->pc = 0x232E94u;
            goto label_232e94;
        }
    }
    ctx->pc = 0x232E0Cu;
label_232e0c:
    // 0x232e0c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x232e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x232e10: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x232E10u;
    SET_GPR_U32(ctx, 31, 0x232E18u);
    ctx->pc = 0x232E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232E10u;
    // 0x232e14: 0x24449b70  addiu       $a0, $v0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x232E10u, 0x232E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232E18u;
label_232e18:
    // 0x232e18: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x232e18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x232e1c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x232E1Cu;
    {
        const bool branch_taken_0x232e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E1Cu;
        // 0x232e20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e1c) {
            ctx->pc = 0x232E38u;
            goto label_232e38;
        }
    }
    ctx->pc = 0x232E24u;
    // 0x232e24: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x232E24u;
    SET_GPR_U32(ctx, 31, 0x232E2Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x232E24u, 0x232E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232E2Cu;
label_232e2c:
    // 0x232e2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x232e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x232e30: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x232E30u;
    {
        const bool branch_taken_0x232e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E30u;
        // 0x232e34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e30) {
            ctx->pc = 0x232E68u;
            goto label_232e68;
        }
    }
    ctx->pc = 0x232E38u;
label_232e38:
    // 0x232e38: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x232e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x232e3c: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x232e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x232e40: 0x24070045  addiu       $a3, $zero, 0x45
    ctx->pc = 0x232e40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x232e44: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x232e44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x232e48: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x232E48u;
    SET_GPR_U32(ctx, 31, 0x232E50u);
    ctx->pc = 0x232E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232E48u;
    // 0x232e4c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x232E48u, 0x232E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232E50u;
label_232e50:
    // 0x232e50: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x232e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232e54: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x232e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x232e58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x232e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232e5c: 0x8c432668  lw          $v1, 0x2668($v0)
    ctx->pc = 0x232e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9832)));
    // 0x232e60: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x232E60u;
    {
        const bool branch_taken_0x232e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E60u;
        // 0x232e64: 0x8c44266c  lw          $a0, 0x266C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9836)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e60) {
            ctx->pc = 0x232E94u;
            goto label_232e94;
        }
    }
    ctx->pc = 0x232E68u;
label_232e68:
    // 0x232e68: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x232e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x232e6c: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x232e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x232e70: 0x24070045  addiu       $a3, $zero, 0x45
    ctx->pc = 0x232e70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x232e74: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x232e74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x232e78: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x232E78u;
    SET_GPR_U32(ctx, 31, 0x232E80u);
    ctx->pc = 0x232E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232E78u;
    // 0x232e7c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x232E78u, 0x232E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232E80u;
label_232e80:
    // 0x232e80: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x232e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232e84: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x232e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x232e88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x232e88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232e8c: 0x8c432a48  lw          $v1, 0x2A48($v0)
    ctx->pc = 0x232e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10824)));
    // 0x232e90: 0x8c442a4c  lw          $a0, 0x2A4C($v0)
    ctx->pc = 0x232e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10828)));
label_232e94:
    // 0x232e94: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x232e94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232e98: 0xe6200604  swc1        $f0, 0x604($s1)
    ctx->pc = 0x232e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
    // 0x232e9c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x232E9Cu;
    {
        const bool branch_taken_0x232e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E9Cu;
        // 0x232ea0: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e9c) {
            ctx->pc = 0x232EECu;
            goto label_232eec;
        }
    }
    ctx->pc = 0x232EA4u;
label_232ea4:
    // 0x232ea4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x232ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x232ea8: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x232ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x232eac: 0x3c014250  lui         $at, 0x4250
    ctx->pc = 0x232eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16976 << 16));
    // 0x232eb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x232eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232eb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232eb8: 0x8c472504  lw          $a3, 0x2504($v0)
    ctx->pc = 0x232eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9476)));
    // 0x232ebc: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x232ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x232ec0: 0x8c432508  lw          $v1, 0x2508($v0)
    ctx->pc = 0x232ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9480)));
    // 0x232ec4: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x232ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x232ec8: 0xe29021  addu        $s2, $a3, $v0
    ctx->pc = 0x232ec8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x232ecc: 0xa22802f7  sb          $t0, 0x2F7($s1)
    ctx->pc = 0x232eccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 8));
    // 0x232ed0: 0xae2005f0  sw          $zero, 0x5F0($s1)
    ctx->pc = 0x232ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 0));
    // 0x232ed4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x232ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232ed8: 0xe6200604  swc1        $f0, 0x604($s1)
    ctx->pc = 0x232ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
    // 0x232edc: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x232edcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x232ee0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x232ee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x232ee4: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x232EE4u;
    SET_GPR_U32(ctx, 31, 0x232EECu);
    ctx->pc = 0x232EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232EE4u;
    // 0x232ee8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x232EE4u, 0x232EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232EECu;
label_232eec:
    // 0x232eec: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x232eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_232ef0:
    // 0x232ef0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x232EF0u;
    SET_GPR_U32(ctx, 31, 0x232EF8u);
    ctx->pc = 0x232EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232EF0u;
    // 0x232ef4: 0x24449b70  addiu       $a0, $v0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x232EF0u, 0x232EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232EF8u;
label_232ef8:
    // 0x232ef8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x232ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x232efc: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x232efcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x232f00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x232F00u;
    {
        const bool branch_taken_0x232f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F00u;
        // 0x232f04: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f00) {
            ctx->pc = 0x232F20u;
            goto label_232f20;
        }
    }
    ctx->pc = 0x232F08u;
    // 0x232f08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x232f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x232f0c: 0x24429cf0  addiu       $v0, $v0, -0x6310
    ctx->pc = 0x232f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941936));
    // 0x232f10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x232f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232f14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x232f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232f18: 0x800008  jr          $a0
    ctx->pc = 0x232F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x232F20u: goto label_232f20;
            case 0x232F48u: goto label_232f48;
            case 0x232F64u: goto label_232f64;
            case 0x232F88u: goto label_232f88;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232F18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x232F20u;
label_232f20:
    // 0x232f20: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x232f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232f24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x232f24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x232f28: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x232f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x232f2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x232f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x232f30: 0x0  nop
    ctx->pc = 0x232f30u;
    // NOP
    // 0x232f34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x232f34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x232f38: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x232f38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x232f3c: 0xe62105f0  swc1        $f1, 0x5F0($s1)
    ctx->pc = 0x232f3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1520), bits); }
    // 0x232f40: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x232F40u;
    {
        const bool branch_taken_0x232f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232f40) {
            ctx->pc = 0x232F88u;
            goto label_232f88;
        }
    }
    ctx->pc = 0x232F48u;
label_232f48:
    // 0x232f48: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x232f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232f4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x232f4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x232f50: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x232f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x232f54: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x232f54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x232f58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x232f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x232f5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x232F5Cu;
    {
        const bool branch_taken_0x232f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F5Cu;
        // 0x232f60: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f5c) {
            ctx->pc = 0x232F80u;
            goto label_232f80;
        }
    }
    ctx->pc = 0x232F64u;
label_232f64:
    // 0x232f64: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x232f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232f68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x232f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x232f6c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x232f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x232f70: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x232f70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x232f74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x232f74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x232f78: 0x0  nop
    ctx->pc = 0x232f78u;
    // NOP
    // 0x232f7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x232f7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_232f80:
    // 0x232f80: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x232f80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x232f84: 0xe62105f0  swc1        $f1, 0x5F0($s1)
    ctx->pc = 0x232f84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1520), bits); }
label_232f88:
    // 0x232f88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x232f88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x232f8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x232f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232f90: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x232f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232f94: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x232f94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232f98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232f9c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x232f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x232fa0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x232FA0u;
    SET_GPR_U32(ctx, 31, 0x232FA8u);
    ctx->pc = 0x232FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232FA0u;
    // 0x232fa4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x232FA0u, 0x232FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232FA8u;
label_232fa8:
    // 0x232fa8: 0x3a8204e2  xori        $v0, $s4, 0x4E2
    ctx->pc = 0x232fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1250);
    // 0x232fac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x232FACu;
    {
        const bool branch_taken_0x232fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FACu;
        // 0x232fb0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232fac) {
            ctx->pc = 0x232FCCu;
            goto label_232fcc;
        }
    }
    ctx->pc = 0x232FB4u;
    // 0x232fb4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x232fb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232fb8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x232fb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232fbc: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x232fbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232fc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232fc4: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x232FC4u;
    SET_GPR_U32(ctx, 31, 0x232FCCu);
    ctx->pc = 0x232FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232FC4u;
    // 0x232fc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x232FC4u, 0x232FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232FCCu;
label_232fcc:
    // 0x232fcc: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x232fccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x232fd0: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x232fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232fd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x232fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x232fd8: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x232fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x232fdc: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x232fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x232fe0: 0xc6210604  lwc1        $f1, 0x604($s1)
    ctx->pc = 0x232fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232fe4:
    // 0x232fe4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x232fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232fe8: 0x0  nop
    ctx->pc = 0x232fe8u;
    // NOP
    // 0x232fec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x232fecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232ff0: 0x0  nop
    ctx->pc = 0x232ff0u;
    // NOP
    // 0x232ff4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x232FF4u;
    {
        const bool branch_taken_0x232ff4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x232FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FF4u;
        // 0x232ff8: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ff4) {
            ctx->pc = 0x233014u;
            goto label_233014;
        }
    }
    ctx->pc = 0x232FFCu;
    // 0x232ffc: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x232ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233000: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x233000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x233004: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x233004u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x233008: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x233008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23300c: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x23300cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    // 0x233010: 0xe6200604  swc1        $f0, 0x604($s1)
    ctx->pc = 0x233010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
label_233014:
    // 0x233014: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x233014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x233018: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x233018u;
    {
        const bool branch_taken_0x233018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233018u;
        // 0x23301c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233018) {
            ctx->pc = 0x233084u;
            goto label_233084;
        }
    }
    ctx->pc = 0x233020u;
    // 0x233020: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x233020u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x233024: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x233024u;
    SET_GPR_U32(ctx, 31, 0x23302Cu);
    ctx->pc = 0x233028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233024u;
    // 0x233028: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x233024u, 0x23302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23302Cu;
label_23302c:
    // 0x23302c: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x23302cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233034: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x233034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x233038: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x233038u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x23303c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x23303cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x233040: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x233040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x233044: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x233044u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x233048: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x233048u;
    SET_GPR_U32(ctx, 31, 0x233050u);
    ctx->pc = 0x23304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233048u;
    // 0x23304c: 0xc62c0600  lwc1        $f12, 0x600($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x233048u, 0x233050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233050u;
label_233050:
    // 0x233050: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x233050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x233054: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x233054u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x233058: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x233058u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x23305c: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x23305cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x233060: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x233060u;
    SET_GPR_U32(ctx, 31, 0x233068u);
    ctx->pc = 0x233064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233060u;
    // 0x233064: 0xe6210600  swc1        $f1, 0x600($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x233060u, 0x233068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233068u;
label_233068:
    // 0x233068: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x233068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23306c: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x23306cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x233070: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x233070u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x233074: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x233074u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x233078: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x233078u;
    SET_GPR_U32(ctx, 31, 0x233080u);
    ctx->pc = 0x23307Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233078u;
    // 0x23307c: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x233078u, 0x233080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233080u;
label_233080:
    // 0x233080: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x233080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_233084:
    // 0x233084: 0xc055f06  jal         func_157C18
    ctx->pc = 0x233084u;
    SET_GPR_U32(ctx, 31, 0x23308Cu);
    ctx->pc = 0x233088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233084u;
    // 0x233088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x233084u, 0x23308Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23308Cu;
label_23308c:
    // 0x23308c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x23308Cu;
    {
        const bool branch_taken_0x23308c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23308c) {
            ctx->pc = 0x233090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23308Cu;
            // 0x233090: 0xc6200338  lwc1        $f0, 0x338($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2330C4u;
            goto label_2330c4;
        }
    }
    ctx->pc = 0x233094u;
    // 0x233094: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x233094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x233098: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x233098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23309c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23309cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2330a0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2330A0u;
    SET_GPR_U32(ctx, 31, 0x2330A8u);
    ctx->pc = 0x2330A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2330A0u;
    // 0x2330a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2330A0u, 0x2330A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2330A8u;
label_2330a8:
    // 0x2330a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2330a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2330ac: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2330ACu;
    SET_GPR_U32(ctx, 31, 0x2330B4u);
    ctx->pc = 0x2330B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2330ACu;
    // 0x2330b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2330ACu, 0x2330B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2330B4u;
label_2330b4:
    // 0x2330b4: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2330B4u;
    SET_GPR_U32(ctx, 31, 0x2330BCu);
    ctx->pc = 0x2330B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2330B4u;
    // 0x2330b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2330B4u, 0x2330BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2330BCu;
label_2330bc:
    // 0x2330bc: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2330BCu;
    {
        const bool branch_taken_0x2330bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2330C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2330BCu;
        // 0x2330c0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2330bc) {
            ctx->pc = 0x23321Cu;
            goto label_23321c;
        }
    }
    ctx->pc = 0x2330C4u;
label_2330c4:
    // 0x2330c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2330c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2330c8: 0xc6210608  lwc1        $f1, 0x608($s1)
    ctx->pc = 0x2330c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2330cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2330ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2330d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2330d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2330d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2330d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2330d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2330d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2330dc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2330DCu;
    SET_GPR_U32(ctx, 31, 0x2330E4u);
    ctx->pc = 0x2330E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2330DCu;
    // 0x2330e0: 0xe6200338  swc1        $f0, 0x338($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2330DCu, 0x2330E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2330E4u;
label_2330e4:
    // 0x2330e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2330e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2330e8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2330E8u;
    SET_GPR_U32(ctx, 31, 0x2330F0u);
    ctx->pc = 0x2330ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2330E8u;
    // 0x2330ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2330E8u, 0x2330F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2330F0u;
label_2330f0:
    // 0x2330f0: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x2330f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_2330f4:
    // 0x2330f4: 0x24020222  addiu       $v0, $zero, 0x222
    ctx->pc = 0x2330f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 546));
    // 0x2330f8: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2330F8u;
    {
        const bool branch_taken_0x2330f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2330f8) {
            ctx->pc = 0x2330FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2330F8u;
            // 0x2330fc: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23312Cu;
            goto label_23312c;
        }
    }
    ctx->pc = 0x233100u;
    // 0x233100: 0x962303ac  lhu         $v1, 0x3AC($s1)
    ctx->pc = 0x233100u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x233104: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x233104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x233108: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x233108u;
    {
        const bool branch_taken_0x233108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233108u;
        // 0x23310c: 0x3062fffd  andi        $v0, $v1, 0xFFFD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233108) {
            ctx->pc = 0x233128u;
            goto label_233128;
        }
    }
    ctx->pc = 0x233110u;
    // 0x233110: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x233110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x233114: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x233114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233118: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x233118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23311c: 0xa62203ac  sh          $v0, 0x3AC($s1)
    ctx->pc = 0x23311cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
    // 0x233120: 0xa2231865  sb          $v1, 0x1865($s1)
    ctx->pc = 0x233120u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6245), (uint8_t)GPR_U32(ctx, 3));
    // 0x233124: 0xe62017d4  swc1        $f0, 0x17D4($s1)
    ctx->pc = 0x233124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6100), bits); }
label_233128:
    // 0x233128: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x233128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_23312c:
    // 0x23312c: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x23312cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x233130: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x233130u;
    {
        const bool branch_taken_0x233130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x233130) {
            ctx->pc = 0x233164u;
            goto label_233164;
        }
    }
    ctx->pc = 0x233138u;
    // 0x233138: 0x8e240700  lw          $a0, 0x700($s1)
    ctx->pc = 0x233138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1792)));
    // 0x23313c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23313Cu;
    {
        const bool branch_taken_0x23313c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23313c) {
            ctx->pc = 0x233164u;
            goto label_233164;
        }
    }
    ctx->pc = 0x233144u;
    // 0x233144: 0xc0742c2  jal         func_1D0B08
    ctx->pc = 0x233144u;
    SET_GPR_U32(ctx, 31, 0x23314Cu);
    ctx->pc = 0x1D0B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0B08u, 0x233144u, 0x23314Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23314Cu;
label_23314c:
    // 0x23314c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23314Cu;
    {
        const bool branch_taken_0x23314c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23314c) {
            ctx->pc = 0x233164u;
            goto label_233164;
        }
    }
    ctx->pc = 0x233154u;
    // 0x233154: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x233154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x233158: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x233158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x23315c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23315cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x233160: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x233160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
label_233164:
    // 0x233164: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x233164u;
    SET_GPR_U32(ctx, 31, 0x23316Cu);
    ctx->pc = 0x233168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233164u;
    // 0x233168: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x233164u, 0x23316Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23316Cu;
label_23316c:
    // 0x23316c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x23316cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x233170: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x233170u;
    SET_GPR_U32(ctx, 31, 0x233178u);
    ctx->pc = 0x233174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233170u;
    // 0x233174: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x233170u, 0x233178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233178u;
label_233178:
    // 0x233178: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x233178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x23317c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x23317Cu;
    {
        const bool branch_taken_0x23317c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23317c) {
            ctx->pc = 0x233180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23317Cu;
            // 0x233180: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2331C4u;
            goto label_2331c4;
        }
    }
    ctx->pc = 0x233184u;
    // 0x233184: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x233184u;
    SET_GPR_U32(ctx, 31, 0x23318Cu);
    ctx->pc = 0x233188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233184u;
    // 0x233188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x233184u, 0x23318Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23318Cu;
label_23318c:
    // 0x23318c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x23318Cu;
    {
        const bool branch_taken_0x23318c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23318c) {
            ctx->pc = 0x233190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23318Cu;
            // 0x233190: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2331C4u;
            goto label_2331c4;
        }
    }
    ctx->pc = 0x233194u;
    // 0x233194: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x233194u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x233198: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x233198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23319c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x23319Cu;
    {
        const bool branch_taken_0x23319c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23319c) {
            ctx->pc = 0x2331A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23319Cu;
            // 0x2331a0: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2331C4u;
            goto label_2331c4;
        }
    }
    ctx->pc = 0x2331A4u;
    // 0x2331a4: 0x92221864  lbu         $v0, 0x1864($s1)
    ctx->pc = 0x2331a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
    // 0x2331a8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2331A8u;
    {
        const bool branch_taken_0x2331a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2331a8) {
            ctx->pc = 0x2331ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2331A8u;
            // 0x2331ac: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2331C4u;
            goto label_2331c4;
        }
    }
    ctx->pc = 0x2331B0u;
    // 0x2331b0: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x2331B0u;
    SET_GPR_U32(ctx, 31, 0x2331B8u);
    ctx->pc = 0x2331B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2331B0u;
    // 0x2331b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x2331B0u, 0x2331B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2331B8u;
label_2331b8:
    // 0x2331b8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2331B8u;
    {
        const bool branch_taken_0x2331b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2331BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2331B8u;
        // 0x2331bc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2331b8) {
            ctx->pc = 0x23321Cu;
            goto label_23321c;
        }
    }
    ctx->pc = 0x2331C0u;
    // 0x2331c0: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x2331c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_2331c4:
    // 0x2331c4: 0x24020264  addiu       $v0, $zero, 0x264
    ctx->pc = 0x2331c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
    // 0x2331c8: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2331C8u;
    {
        const bool branch_taken_0x2331c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2331c8) {
            ctx->pc = 0x2331CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2331C8u;
            // 0x2331cc: 0x8e2205fc  lw          $v0, 0x5FC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233200u;
            goto label_233200;
        }
    }
    ctx->pc = 0x2331D0u;
    // 0x2331d0: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2331d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x2331d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2331d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2331d8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2331D8u;
    {
        const bool branch_taken_0x2331d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2331d8) {
            ctx->pc = 0x2331DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2331D8u;
            // 0x2331dc: 0x8e2205fc  lw          $v0, 0x5FC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233200u;
            goto label_233200;
        }
    }
    ctx->pc = 0x2331E0u;
    // 0x2331e0: 0x8e2205f8  lw          $v0, 0x5F8($s1)
    ctx->pc = 0x2331e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
    // 0x2331e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2331E4u;
    {
        const bool branch_taken_0x2331e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2331E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2331E4u;
        // 0x2331e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2331e4) {
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x2331ECu;
    // 0x2331ec: 0xae2005f8  sw          $zero, 0x5F8($s1)
    ctx->pc = 0x2331ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 0));
    // 0x2331f0: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2331f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2331f4: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x2331F4u;
    SET_GPR_U32(ctx, 31, 0x2331FCu);
    ctx->pc = 0x2331F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2331F4u;
    // 0x2331f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x2331F4u, 0x2331FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2331FCu;
label_2331fc:
    // 0x2331fc: 0x8e2205fc  lw          $v0, 0x5FC($s1)
    ctx->pc = 0x2331fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
label_233200:
    // 0x233200: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x233200u;
    {
        const bool branch_taken_0x233200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233200u;
        // 0x233204: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233200) {
            ctx->pc = 0x23321Cu;
            goto label_23321c;
        }
    }
    ctx->pc = 0x233208u;
    // 0x233208: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x233208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x23320c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23320cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x233210: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x233210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x233214: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x233214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x233218: 0xae2316d4  sw          $v1, 0x16D4($s1)
    ctx->pc = 0x233218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
label_23321c:
    // 0x23321c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x23321cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x233220: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x233220u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x233224: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x233224u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x233228: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x233228u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23322c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x23322cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233230: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x233230u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233234: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x233234u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23323c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x23323cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x233240: 0x3e00008  jr          $ra
    ctx->pc = 0x233240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233240u;
        // 0x233244: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233248u;
}
