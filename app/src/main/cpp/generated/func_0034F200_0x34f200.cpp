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

// Function: func_0034F200
// Address: 0x34f200 - 0x34f390
void func_0034F200_0x34f200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034F200_0x34f200");
#endif

    switch (ctx->pc) {
        case 0x34f200u: goto label_34f200;
        case 0x34f204u: goto label_34f204;
        case 0x34f208u: goto label_34f208;
        case 0x34f20cu: goto label_34f20c;
        case 0x34f210u: goto label_34f210;
        case 0x34f214u: goto label_34f214;
        case 0x34f218u: goto label_34f218;
        case 0x34f21cu: goto label_34f21c;
        case 0x34f220u: goto label_34f220;
        case 0x34f224u: goto label_34f224;
        case 0x34f228u: goto label_34f228;
        case 0x34f22cu: goto label_34f22c;
        case 0x34f230u: goto label_34f230;
        case 0x34f234u: goto label_34f234;
        case 0x34f238u: goto label_34f238;
        case 0x34f23cu: goto label_34f23c;
        case 0x34f240u: goto label_34f240;
        case 0x34f244u: goto label_34f244;
        case 0x34f248u: goto label_34f248;
        case 0x34f24cu: goto label_34f24c;
        case 0x34f250u: goto label_34f250;
        case 0x34f254u: goto label_34f254;
        case 0x34f258u: goto label_34f258;
        case 0x34f25cu: goto label_34f25c;
        case 0x34f260u: goto label_34f260;
        case 0x34f264u: goto label_34f264;
        case 0x34f268u: goto label_34f268;
        case 0x34f26cu: goto label_34f26c;
        case 0x34f270u: goto label_34f270;
        case 0x34f274u: goto label_34f274;
        case 0x34f278u: goto label_34f278;
        case 0x34f27cu: goto label_34f27c;
        case 0x34f280u: goto label_34f280;
        case 0x34f284u: goto label_34f284;
        case 0x34f288u: goto label_34f288;
        case 0x34f28cu: goto label_34f28c;
        case 0x34f290u: goto label_34f290;
        case 0x34f294u: goto label_34f294;
        case 0x34f298u: goto label_34f298;
        case 0x34f29cu: goto label_34f29c;
        case 0x34f2a0u: goto label_34f2a0;
        case 0x34f2a4u: goto label_34f2a4;
        case 0x34f2a8u: goto label_34f2a8;
        case 0x34f2acu: goto label_34f2ac;
        case 0x34f2b0u: goto label_34f2b0;
        case 0x34f2b4u: goto label_34f2b4;
        case 0x34f2b8u: goto label_34f2b8;
        case 0x34f2bcu: goto label_34f2bc;
        case 0x34f2c0u: goto label_34f2c0;
        case 0x34f2c4u: goto label_34f2c4;
        case 0x34f2c8u: goto label_34f2c8;
        case 0x34f2ccu: goto label_34f2cc;
        case 0x34f2d0u: goto label_34f2d0;
        case 0x34f2d4u: goto label_34f2d4;
        case 0x34f2d8u: goto label_34f2d8;
        case 0x34f2dcu: goto label_34f2dc;
        case 0x34f2e0u: goto label_34f2e0;
        case 0x34f2e4u: goto label_34f2e4;
        case 0x34f2e8u: goto label_34f2e8;
        case 0x34f2ecu: goto label_34f2ec;
        case 0x34f2f0u: goto label_34f2f0;
        case 0x34f2f4u: goto label_34f2f4;
        case 0x34f2f8u: goto label_34f2f8;
        case 0x34f2fcu: goto label_34f2fc;
        case 0x34f300u: goto label_34f300;
        case 0x34f304u: goto label_34f304;
        case 0x34f308u: goto label_34f308;
        case 0x34f30cu: goto label_34f30c;
        case 0x34f310u: goto label_34f310;
        case 0x34f314u: goto label_34f314;
        case 0x34f318u: goto label_34f318;
        case 0x34f31cu: goto label_34f31c;
        case 0x34f320u: goto label_34f320;
        case 0x34f324u: goto label_34f324;
        case 0x34f328u: goto label_34f328;
        case 0x34f32cu: goto label_34f32c;
        case 0x34f330u: goto label_34f330;
        case 0x34f334u: goto label_34f334;
        case 0x34f338u: goto label_34f338;
        case 0x34f33cu: goto label_34f33c;
        case 0x34f340u: goto label_34f340;
        case 0x34f344u: goto label_34f344;
        case 0x34f348u: goto label_34f348;
        case 0x34f34cu: goto label_34f34c;
        case 0x34f350u: goto label_34f350;
        case 0x34f354u: goto label_34f354;
        case 0x34f358u: goto label_34f358;
        case 0x34f35cu: goto label_34f35c;
        case 0x34f360u: goto label_34f360;
        case 0x34f364u: goto label_34f364;
        case 0x34f368u: goto label_34f368;
        case 0x34f36cu: goto label_34f36c;
        case 0x34f370u: goto label_34f370;
        case 0x34f374u: goto label_34f374;
        case 0x34f378u: goto label_34f378;
        case 0x34f37cu: goto label_34f37c;
        case 0x34f380u: goto label_34f380;
        case 0x34f384u: goto label_34f384;
        case 0x34f388u: goto label_34f388;
        case 0x34f38cu: goto label_34f38c;
        default: break;
    }

    ctx->pc = 0x34f200u;

label_34f200:
    // 0x34f200: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x34f200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_34f204:
    // 0x34f204: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x34f204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_34f208:
    // 0x34f208: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x34f208u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_34f20c:
    // 0x34f20c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x34f20cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34f210:
    // 0x34f210: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x34f210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_34f214:
    // 0x34f214: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x34f214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_34f218:
    // 0x34f218: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x34f218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_34f21c:
    // 0x34f21c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x34f21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_34f220:
    // 0x34f220: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x34f220u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34f224:
    // 0x34f224: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x34f224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_34f228:
    // 0x34f228: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x34f228u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34f22c:
    // 0x34f22c: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x34f22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_34f230:
    // 0x34f230: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x34f230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_34f234:
    // 0x34f234: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x34f234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
label_34f238:
    // 0x34f238: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x34f238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_34f23c:
    // 0x34f23c: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x34f23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
label_34f240:
    // 0x34f240: 0xc0d30a8  jal         func_34C2A0
label_34f244:
    if (ctx->pc == 0x34F244u) {
        ctx->pc = 0x34F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F240u;
        // 0x34f244: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F248u;
        goto label_34f248;
    }
    ctx->pc = 0x34F240u;
    SET_GPR_U32(ctx, 31, 0x34F248u);
    ctx->pc = 0x34F244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F240u;
    // 0x34f244: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C2A0u, 0x34F240u, 0x34F248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F248u;
label_34f248:
    // 0x34f248: 0x54400046  bnel        $v0, $zero, . + 4 + (0x46 << 2)
label_34f24c:
    if (ctx->pc == 0x34F24Cu) {
        ctx->pc = 0x34F24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F248u;
        // 0x34f24c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F250u;
        goto label_34f250;
    }
    ctx->pc = 0x34F248u;
    {
        const bool branch_taken_0x34f248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f248) {
            ctx->pc = 0x34F24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34F248u;
            // 0x34f24c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34F364u;
            goto label_34f364;
        }
    }
    ctx->pc = 0x34F250u;
label_34f250:
    // 0x34f250: 0x8fb10004  lw          $s1, 0x4($sp)
    ctx->pc = 0x34f250u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_34f254:
    // 0x34f254: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x34f254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_34f258:
    // 0x34f258: 0x8fb30000  lw          $s3, 0x0($sp)
    ctx->pc = 0x34f258u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_34f25c:
    // 0x34f25c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x34f25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_34f260:
    // 0x34f260: 0x8fb70008  lw          $s7, 0x8($sp)
    ctx->pc = 0x34f260u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_34f264:
    // 0x34f264: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x34f264u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_34f268:
    // 0x34f268: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
label_34f26c:
    if (ctx->pc == 0x34F26Cu) {
        ctx->pc = 0x34F26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F268u;
        // 0x34f26c: 0x8fbe0014  lw          $fp, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F270u;
        goto label_34f270;
    }
    ctx->pc = 0x34F268u;
    {
        const bool branch_taken_0x34f268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34F26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F268u;
        // 0x34f26c: 0x8fbe0014  lw          $fp, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f268) {
            ctx->pc = 0x34F360u;
            goto label_34f360;
        }
    }
    ctx->pc = 0x34F270u;
label_34f270:
    // 0x34f270: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34f274:
    // 0x34f274: 0x56c20014  bnel        $s6, $v0, . + 4 + (0x14 << 2)
label_34f278:
    if (ctx->pc == 0x34F278u) {
        ctx->pc = 0x34F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F274u;
        // 0x34f278: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F27Cu;
        goto label_34f27c;
    }
    ctx->pc = 0x34F274u;
    {
        const bool branch_taken_0x34f274 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x34f274) {
            ctx->pc = 0x34F278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34F274u;
            // 0x34f278: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34F2C8u;
            goto label_34f2c8;
        }
    }
    ctx->pc = 0x34F27Cu;
label_34f27c:
    // 0x34f27c: 0x6400022  bltz        $s2, . + 4 + (0x22 << 2)
label_34f280:
    if (ctx->pc == 0x34F280u) {
        ctx->pc = 0x34F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F27Cu;
        // 0x34f280: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F284u;
        goto label_34f284;
    }
    ctx->pc = 0x34F27Cu;
    {
        const bool branch_taken_0x34f27c = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x34F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F27Cu;
        // 0x34f280: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f27c) {
            ctx->pc = 0x34F308u;
            goto label_34f308;
        }
    }
    ctx->pc = 0x34F284u;
label_34f284:
    // 0x34f284: 0xc0d65bc  jal         func_3596F0
label_34f288:
    if (ctx->pc == 0x34F288u) {
        ctx->pc = 0x34F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F284u;
        // 0x34f288: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F28Cu;
        goto label_34f28c;
    }
    ctx->pc = 0x34F284u;
    SET_GPR_U32(ctx, 31, 0x34F28Cu);
    ctx->pc = 0x34F288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F284u;
    // 0x34f288: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3596F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3596F0u, 0x34F284u, 0x34F28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F28Cu;
label_34f28c:
    // 0x34f28c: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
label_34f290:
    if (ctx->pc == 0x34F290u) {
        ctx->pc = 0x34F290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F28Cu;
        // 0x34f290: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F294u;
        goto label_34f294;
    }
    ctx->pc = 0x34F28Cu;
    {
        const bool branch_taken_0x34f28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f28c) {
            ctx->pc = 0x34F290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34F28Cu;
            // 0x34f290: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34F360u;
            goto label_34f360;
        }
    }
    ctx->pc = 0x34F294u;
label_34f294:
    // 0x34f294: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x34f294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_34f298:
    // 0x34f298: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34f298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34f29c:
    // 0x34f29c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x34f29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_34f2a0:
    // 0x34f2a0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x34f2a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_34f2a4:
    // 0x34f2a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34f2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_34f2a8:
    // 0x34f2a8: 0xafb30028  sw          $s3, 0x28($sp)
    ctx->pc = 0x34f2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 19));
label_34f2ac:
    // 0x34f2ac: 0xc0d64fc  jal         func_3593F0
label_34f2b0:
    if (ctx->pc == 0x34F2B0u) {
        ctx->pc = 0x34F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F2ACu;
        // 0x34f2b0: 0xafb0002c  sw          $s0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F2B4u;
        goto label_34f2b4;
    }
    ctx->pc = 0x34F2ACu;
    SET_GPR_U32(ctx, 31, 0x34F2B4u);
    ctx->pc = 0x34F2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F2ACu;
    // 0x34f2b0: 0xafb0002c  sw          $s0, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3593F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3593F0u, 0x34F2ACu, 0x34F2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F2B4u;
label_34f2b4:
    // 0x34f2b4: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_34f2b8:
    if (ctx->pc == 0x34F2B8u) {
        ctx->pc = 0x34F2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F2B4u;
        // 0x34f2b8: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F2BCu;
        goto label_34f2bc;
    }
    ctx->pc = 0x34F2B4u;
    {
        const bool branch_taken_0x34f2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f2b4) {
            ctx->pc = 0x34F2B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34F2B4u;
            // 0x34f2b8: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34F30Cu;
            goto label_34f30c;
        }
    }
    ctx->pc = 0x34F2BCu;
label_34f2bc:
    // 0x34f2bc: 0x10000029  b           . + 4 + (0x29 << 2)
label_34f2c0:
    if (ctx->pc == 0x34F2C0u) {
        ctx->pc = 0x34F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F2BCu;
        // 0x34f2c0: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F2C4u;
        goto label_34f2c4;
    }
    ctx->pc = 0x34F2BCu;
    {
        const bool branch_taken_0x34f2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F2BCu;
        // 0x34f2c0: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f2bc) {
            ctx->pc = 0x34F364u;
            goto label_34f364;
        }
    }
    ctx->pc = 0x34F2C4u;
label_34f2c4:
    // 0x34f2c4: 0x0  nop
    ctx->pc = 0x34f2c4u;
    // NOP
label_34f2c8:
    // 0x34f2c8: 0x16c20010  bne         $s6, $v0, . + 4 + (0x10 << 2)
label_34f2cc:
    if (ctx->pc == 0x34F2CCu) {
        ctx->pc = 0x34F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F2C8u;
        // 0x34f2cc: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F2D0u;
        goto label_34f2d0;
    }
    ctx->pc = 0x34F2C8u;
    {
        const bool branch_taken_0x34f2c8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x34F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F2C8u;
        // 0x34f2cc: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f2c8) {
            ctx->pc = 0x34F30Cu;
            goto label_34f30c;
        }
    }
    ctx->pc = 0x34F2D0u;
label_34f2d0:
    // 0x34f2d0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x34f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_34f2d4:
    // 0x34f2d4: 0x8c42e2fc  lw          $v0, -0x1D04($v0)
    ctx->pc = 0x34f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959868)));
label_34f2d8:
    // 0x34f2d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_34f2dc:
    if (ctx->pc == 0x34F2DCu) {
        ctx->pc = 0x34F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F2D8u;
        // 0x34f2dc: 0x268412e0  addiu       $a0, $s4, 0x12E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F2E0u;
        goto label_34f2e0;
    }
    ctx->pc = 0x34F2D8u;
    {
        const bool branch_taken_0x34f2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F2D8u;
        // 0x34f2dc: 0x268412e0  addiu       $a0, $s4, 0x12E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f2d8) {
            ctx->pc = 0x34F308u;
            goto label_34f308;
        }
    }
    ctx->pc = 0x34F2E0u;
label_34f2e0:
    // 0x34f2e0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x34f2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_34f2e4:
    // 0x34f2e4: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x34f2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
label_34f2e8:
    // 0x34f2e8: 0x40f809  jalr        $v0
label_34f2ec:
    if (ctx->pc == 0x34F2ECu) {
        ctx->pc = 0x34F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F2E8u;
        // 0x34f2ec: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F2F0u;
        goto label_34f2f0;
    }
    ctx->pc = 0x34F2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34F2F0u);
        ctx->pc = 0x34F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F2E8u;
        // 0x34f2ec: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F2E8u, 0x34F2F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34F2F0u;
label_34f2f0:
    // 0x34f2f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x34f2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_34f2f4:
    // 0x34f2f4: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_34f2f8:
    if (ctx->pc == 0x34F2F8u) {
        ctx->pc = 0x34F2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F2F4u;
        // 0x34f2f8: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F2FCu;
        goto label_34f2fc;
    }
    ctx->pc = 0x34F2F4u;
    {
        const bool branch_taken_0x34f2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x34f2f4) {
            ctx->pc = 0x34F2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34F2F4u;
            // 0x34f2f8: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34F30Cu;
            goto label_34f30c;
        }
    }
    ctx->pc = 0x34F2FCu;
label_34f2fc:
    // 0x34f2fc: 0x10000018  b           . + 4 + (0x18 << 2)
label_34f300:
    if (ctx->pc == 0x34F300u) {
        ctx->pc = 0x34F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F2FCu;
        // 0x34f300: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F304u;
        goto label_34f304;
    }
    ctx->pc = 0x34F2FCu;
    {
        const bool branch_taken_0x34f2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F2FCu;
        // 0x34f300: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f2fc) {
            ctx->pc = 0x34F360u;
            goto label_34f360;
        }
    }
    ctx->pc = 0x34F304u;
label_34f304:
    // 0x34f304: 0x0  nop
    ctx->pc = 0x34f304u;
    // NOP
label_34f308:
    // 0x34f308: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x34f308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_34f30c:
    // 0x34f30c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_34f310:
    if (ctx->pc == 0x34F310u) {
        ctx->pc = 0x34F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F30Cu;
        // 0x34f310: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F314u;
        goto label_34f314;
    }
    ctx->pc = 0x34F30Cu;
    {
        const bool branch_taken_0x34f30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F30Cu;
        // 0x34f310: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f30c) {
            ctx->pc = 0x34F328u;
            goto label_34f328;
        }
    }
    ctx->pc = 0x34F314u;
label_34f314:
    // 0x34f314: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x34f314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_34f318:
    // 0x34f318: 0xc0d9a58  jal         func_366960
label_34f31c:
    if (ctx->pc == 0x34F31Cu) {
        ctx->pc = 0x34F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F318u;
        // 0x34f31c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F320u;
        goto label_34f320;
    }
    ctx->pc = 0x34F318u;
    SET_GPR_U32(ctx, 31, 0x34F320u);
    ctx->pc = 0x34F31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F318u;
    // 0x34f31c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366960u, 0x34F318u, 0x34F320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F320u;
label_34f320:
    // 0x34f320: 0x10000009  b           . + 4 + (0x9 << 2)
label_34f324:
    if (ctx->pc == 0x34F324u) {
        ctx->pc = 0x34F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F320u;
        // 0x34f324: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F328u;
        goto label_34f328;
    }
    ctx->pc = 0x34F320u;
    {
        const bool branch_taken_0x34f320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F320u;
        // 0x34f324: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f320) {
            ctx->pc = 0x34F348u;
            goto label_34f348;
        }
    }
    ctx->pc = 0x34F328u;
label_34f328:
    // 0x34f328: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x34f328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_34f32c:
    // 0x34f32c: 0xc0d9a58  jal         func_366960
label_34f330:
    if (ctx->pc == 0x34F330u) {
        ctx->pc = 0x34F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F32Cu;
        // 0x34f330: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F334u;
        goto label_34f334;
    }
    ctx->pc = 0x34F32Cu;
    SET_GPR_U32(ctx, 31, 0x34F334u);
    ctx->pc = 0x34F330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F32Cu;
    // 0x34f330: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366960u, 0x34F32Cu, 0x34F334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F334u;
label_34f334:
    // 0x34f334: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x34f334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_34f338:
    // 0x34f338: 0x2b12821  addu        $a1, $s5, $s1
    ctx->pc = 0x34f338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_34f33c:
    // 0x34f33c: 0xc0d9a58  jal         func_366960
label_34f340:
    if (ctx->pc == 0x34F340u) {
        ctx->pc = 0x34F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F33Cu;
        // 0x34f340: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F344u;
        goto label_34f344;
    }
    ctx->pc = 0x34F33Cu;
    SET_GPR_U32(ctx, 31, 0x34F344u);
    ctx->pc = 0x34F340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F33Cu;
    // 0x34f340: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366960u, 0x34F33Cu, 0x34F344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F344u;
label_34f344:
    // 0x34f344: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x34f344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_34f348:
    // 0x34f348: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x34f348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_34f34c:
    // 0x34f34c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x34f34cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34f350:
    // 0x34f350: 0xc0d30de  jal         func_34C378
label_34f354:
    if (ctx->pc == 0x34F354u) {
        ctx->pc = 0x34F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F350u;
        // 0x34f354: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F358u;
        goto label_34f358;
    }
    ctx->pc = 0x34F350u;
    SET_GPR_U32(ctx, 31, 0x34F358u);
    ctx->pc = 0x34F354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F350u;
    // 0x34f354: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C378u, 0x34F350u, 0x34F358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F358u;
label_34f358:
    // 0x34f358: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34f358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34f35c:
    // 0x34f35c: 0x62100a  movz        $v0, $v1, $v0
    ctx->pc = 0x34f35cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_34f360:
    // 0x34f360: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x34f360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_34f364:
    // 0x34f364: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x34f364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_34f368:
    // 0x34f368: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x34f368u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_34f36c:
    // 0x34f36c: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x34f36cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_34f370:
    // 0x34f370: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x34f370u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_34f374:
    // 0x34f374: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x34f374u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_34f378:
    // 0x34f378: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x34f378u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_34f37c:
    // 0x34f37c: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x34f37cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_34f380:
    // 0x34f380: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x34f380u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_34f384:
    // 0x34f384: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x34f384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_34f388:
    // 0x34f388: 0x3e00008  jr          $ra
label_34f38c:
    if (ctx->pc == 0x34F38Cu) {
        ctx->pc = 0x34F38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F388u;
        // 0x34f38c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F390u;
        goto label_fallthrough_0x34f388;
    }
    ctx->pc = 0x34F388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F388u;
        // 0x34f38c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34f388:
    ctx->pc = 0x34F390u;
}
