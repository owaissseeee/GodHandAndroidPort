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

// Function: func_00236190
// Address: 0x236190 - 0x2363e8
void func_00236190_0x236190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00236190_0x236190");
#endif

    switch (ctx->pc) {
        case 0x2361bcu: goto label_2361bc;
        case 0x2361d0u: goto label_2361d0;
        case 0x23621cu: goto label_23621c;
        case 0x236228u: goto label_236228;
        case 0x236318u: goto label_236318;
        case 0x236328u: goto label_236328;
        case 0x236340u: goto label_236340;
        case 0x23634cu: goto label_23634c;
        case 0x236394u: goto label_236394;
        case 0x2363a4u: goto label_2363a4;
        case 0x2363acu: goto label_2363ac;
        case 0x2363c4u: goto label_2363c4;
        default: break;
    }

    ctx->pc = 0x236190u;

    // 0x236190: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x236190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x236194: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x236194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x236198: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x236198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23619c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x23619cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2361a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2361a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2361a4: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x2361a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x2361a8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2361a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2361ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2361acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2361b0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2361b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2361b4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2361B4u;
    SET_GPR_U32(ctx, 31, 0x2361BCu);
    ctx->pc = 0x2361B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2361B4u;
    // 0x2361b8: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2361B4u, 0x2361BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2361BCu;
label_2361bc:
    // 0x2361bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2361bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2361c0: 0x26042fc0  addiu       $a0, $s0, 0x2FC0
    ctx->pc = 0x2361c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
    // 0x2361c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2361c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2361c8: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x2361C8u;
    SET_GPR_U32(ctx, 31, 0x2361D0u);
    ctx->pc = 0x2361CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2361C8u;
    // 0x2361cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2361C8u, 0x2361D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2361D0u;
label_2361d0:
    // 0x2361d0: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x2361d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2361d4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2361D4u;
    {
        const bool branch_taken_0x2361d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2361D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361D4u;
        // 0x2361d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2361d4) {
            ctx->pc = 0x2361ECu;
            goto label_2361ec;
        }
    }
    ctx->pc = 0x2361DCu;
    // 0x2361dc: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2361DCu;
    {
        const bool branch_taken_0x2361dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2361E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361DCu;
        // 0x2361e0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2361dc) {
            ctx->pc = 0x236294u;
            goto label_236294;
        }
    }
    ctx->pc = 0x2361E4u;
    // 0x2361e4: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x2361E4u;
    {
        const bool branch_taken_0x2361e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2361E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361E4u;
        // 0x2361e8: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2361e4) {
            ctx->pc = 0x2363CCu;
            goto label_2363cc;
        }
    }
    ctx->pc = 0x2361ECu;
label_2361ec:
    // 0x2361ec: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2361ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2361f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2361f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2361f4: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x2361f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x2361f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2361f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2361fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2361fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x236200: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x236200u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236204: 0x8c450518  lw          $a1, 0x518($v0)
    ctx->pc = 0x236204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1304)));
    // 0x236208: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x236208u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23620c: 0x8c46051c  lw          $a2, 0x51C($v0)
    ctx->pc = 0x23620cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1308)));
    // 0x236210: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x236210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x236214: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x236214u;
    SET_GPR_U32(ctx, 31, 0x23621Cu);
    ctx->pc = 0x236218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236214u;
    // 0x236218: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x236214u, 0x23621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23621Cu;
label_23621c:
    // 0x23621c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x23621cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x236220: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x236220u;
    SET_GPR_U32(ctx, 31, 0x236228u);
    ctx->pc = 0x236224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236220u;
    // 0x236224: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x236220u, 0x236228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236228u;
label_236228:
    // 0x236228: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x236228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23622c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x23622cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x236230: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x236230u;
    {
        const bool branch_taken_0x236230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236230u;
        // 0x236234: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236230) {
            ctx->pc = 0x236250u;
            goto label_236250;
        }
    }
    ctx->pc = 0x236238u;
    // 0x236238: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x236238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23623c: 0x2442a220  addiu       $v0, $v0, -0x5DE0
    ctx->pc = 0x23623cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943264));
    // 0x236240: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x236240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x236244: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x236244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x236248: 0x800008  jr          $a0
    ctx->pc = 0x236248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x236250u: goto label_236250;
            case 0x236258u: goto label_236258;
            case 0x236260u: goto label_236260;
            case 0x236268u: goto label_236268;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236248u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x236250u;
label_236250:
    // 0x236250: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x236250u;
    {
        const bool branch_taken_0x236250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236250u;
        // 0x236254: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236250) {
            ctx->pc = 0x23626Cu;
            goto label_23626c;
        }
    }
    ctx->pc = 0x236258u;
label_236258:
    // 0x236258: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x236258u;
    {
        const bool branch_taken_0x236258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236258u;
        // 0x23625c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236258) {
            ctx->pc = 0x23626Cu;
            goto label_23626c;
        }
    }
    ctx->pc = 0x236260u;
label_236260:
    // 0x236260: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x236260u;
    {
        const bool branch_taken_0x236260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236260u;
        // 0x236264: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236260) {
            ctx->pc = 0x23626Cu;
            goto label_23626c;
        }
    }
    ctx->pc = 0x236268u;
label_236268:
    // 0x236268: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x236268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_23626c:
    // 0x23626c: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x23626cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x236270: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x236270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x236274: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x236274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x236278: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x236278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x23627c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23627cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x236280: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x236280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x236284: 0xa623056a  sh          $v1, 0x56A($s1)
    ctx->pc = 0x236284u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1386), (uint16_t)GPR_U32(ctx, 3));
    // 0x236288: 0xa624056e  sh          $a0, 0x56E($s1)
    ctx->pc = 0x236288u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 4));
    // 0x23628c: 0xa625056c  sh          $a1, 0x56C($s1)
    ctx->pc = 0x23628cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1388), (uint16_t)GPR_U32(ctx, 5));
    // 0x236290: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x236290u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_236294:
    // 0x236294: 0x8622056e  lh          $v0, 0x56E($s1)
    ctx->pc = 0x236294u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x236298: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x236298u;
    {
        const bool branch_taken_0x236298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236298u;
        // 0x23629c: 0x9623056e  lhu         $v1, 0x56E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236298) {
            ctx->pc = 0x2362C0u;
            goto label_2362c0;
        }
    }
    ctx->pc = 0x2362A0u;
    // 0x2362a0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2362a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2362a4: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x2362a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2362a8: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x2362a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x2362ac: 0x26430550  addiu       $v1, $s2, 0x550
    ctx->pc = 0x2362acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
    // 0x2362b0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2362b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2362b4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2362b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2362b8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2362b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2362bc: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2362bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_2362c0:
    // 0x2362c0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2362c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2362c4: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x2362c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x2362c8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2362c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7474A8u));
    // 0x2362cc: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x2362ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x2362d0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2362D0u;
    {
        const bool branch_taken_0x2362d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2362d0) {
            ctx->pc = 0x2362D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2362D0u;
            // 0x2362d4: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2362E8u;
            goto label_2362e8;
        }
    }
    ctx->pc = 0x2362D8u;
    // 0x2362d8: 0x96220568  lhu         $v0, 0x568($s1)
    ctx->pc = 0x2362d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x2362dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2362dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2362e0: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x2362e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x2362e4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2362e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2362e8:
    // 0x2362e8: 0x3c0300f0  lui         $v1, 0xF0
    ctx->pc = 0x2362e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)240 << 16));
    // 0x2362ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2362ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2362f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2362F0u;
    {
        const bool branch_taken_0x2362f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2362f0) {
            ctx->pc = 0x236304u;
            goto label_236304;
        }
    }
    ctx->pc = 0x2362F8u;
    // 0x2362f8: 0x96220568  lhu         $v0, 0x568($s1)
    ctx->pc = 0x2362f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x2362fc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2362fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x236300: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x236300u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
label_236304:
    // 0x236304: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x236304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x236308: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x236308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23630c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23630cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236310: 0xc055f06  jal         func_157C18
    ctx->pc = 0x236310u;
    SET_GPR_U32(ctx, 31, 0x236318u);
    ctx->pc = 0x236314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236310u;
    // 0x236314: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x236310u, 0x236318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236318u;
label_236318:
    // 0x236318: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236318u;
    {
        const bool branch_taken_0x236318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236318u;
        // 0x23631c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236318) {
            ctx->pc = 0x236330u;
            goto label_236330;
        }
    }
    ctx->pc = 0x236320u;
    // 0x236320: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x236320u;
    SET_GPR_U32(ctx, 31, 0x236328u);
    ctx->pc = 0x236324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236320u;
    // 0x236324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x236320u, 0x236328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236328u;
label_236328:
    // 0x236328: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x236328u;
    {
        const bool branch_taken_0x236328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236328u;
        // 0x23632c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236328) {
            ctx->pc = 0x2363C8u;
            goto label_2363c8;
        }
    }
    ctx->pc = 0x236330u;
label_236330:
    // 0x236330: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x236330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x236334: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x236334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x236338: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x236338u;
    SET_GPR_U32(ctx, 31, 0x236340u);
    ctx->pc = 0x23633Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236338u;
    // 0x23633c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x236338u, 0x236340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236340u;
label_236340:
    // 0x236340: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x236340u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x236344: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x236344u;
    SET_GPR_U32(ctx, 31, 0x23634Cu);
    ctx->pc = 0x236348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236344u;
    // 0x236348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x236344u, 0x23634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23634Cu;
label_23634c:
    // 0x23634c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x23634cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x236350: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x236350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x236354: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x236354u;
    {
        const bool branch_taken_0x236354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236354) {
            ctx->pc = 0x236358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236354u;
            // 0x236358: 0x8622056c  lh          $v0, 0x56C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2363B4u;
            goto label_2363b4;
        }
    }
    ctx->pc = 0x23635Cu;
    // 0x23635c: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x23635cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x236360: 0x1c400010  bgtz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x236360u;
    {
        const bool branch_taken_0x236360 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x236364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236360u;
        // 0x236364: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236360) {
            ctx->pc = 0x2363A4u;
            goto label_2363a4;
        }
    }
    ctx->pc = 0x236368u;
    // 0x236368: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x236368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x23636c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23636cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x236370: 0xa22602f5  sb          $a2, 0x2F5($s1)
    ctx->pc = 0x236370u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 6));
    // 0x236374: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x236374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x236378: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x236378u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x23637c: 0x26642fc0  addiu       $a0, $s3, 0x2FC0
    ctx->pc = 0x23637cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12224));
    // 0x236380: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x236380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236384: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236388: 0xa22302f4  sb          $v1, 0x2F4($s1)
    ctx->pc = 0x236388u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
    // 0x23638c: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x23638Cu;
    SET_GPR_U32(ctx, 31, 0x236394u);
    ctx->pc = 0x236390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23638Cu;
    // 0x236390: 0xa22202f7  sb          $v0, 0x2F7($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x23638Cu, 0x236394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236394u;
label_236394:
    // 0x236394: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x236394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236398: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x236398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23639c: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x23639Cu;
    SET_GPR_U32(ctx, 31, 0x2363A4u);
    ctx->pc = 0x2363A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23639Cu;
    // 0x2363a0: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x23639Cu, 0x2363A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2363A4u;
label_2363a4:
    // 0x2363a4: 0xc0b6ddc  jal         func_2DB770
    ctx->pc = 0x2363A4u;
    SET_GPR_U32(ctx, 31, 0x2363ACu);
    ctx->pc = 0x2DB770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB770u, 0x2363A4u, 0x2363ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2363ACu;
label_2363ac:
    // 0x2363ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2363ACu;
    {
        const bool branch_taken_0x2363ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2363B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363ACu;
        // 0x2363b0: 0xa620056c  sh          $zero, 0x56C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1388), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2363ac) {
            ctx->pc = 0x2363C4u;
            goto label_2363c4;
        }
    }
    ctx->pc = 0x2363B4u;
label_2363b4:
    // 0x2363b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2363B4u;
    {
        const bool branch_taken_0x2363b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2363B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363B4u;
        // 0x2363b8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2363b4) {
            ctx->pc = 0x2363C8u;
            goto label_2363c8;
        }
    }
    ctx->pc = 0x2363BCu;
    // 0x2363bc: 0xc0b6ddc  jal         func_2DB770
    ctx->pc = 0x2363BCu;
    SET_GPR_U32(ctx, 31, 0x2363C4u);
    ctx->pc = 0x2DB770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB770u, 0x2363BCu, 0x2363C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2363C4u;
label_2363c4:
    // 0x2363c4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2363c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2363c8:
    // 0x2363c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2363c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2363cc:
    // 0x2363cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2363ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2363d0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2363d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2363d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2363d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2363d8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2363d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2363dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2363DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2363E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363DCu;
        // 0x2363e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2363DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2363E4u;
    // 0x2363e4: 0x0  nop
    ctx->pc = 0x2363e4u;
    // NOP
    ctx->pc = 0x2363e8u;
}
