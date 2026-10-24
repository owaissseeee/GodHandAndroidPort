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

// Function: func_00102150
// Address: 0x102150 - 0x102418
void func_00102150_0x102150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00102150_0x102150");
#endif

    switch (ctx->pc) {
        case 0x102150u: goto label_102150;
        case 0x102154u: goto label_102154;
        case 0x102158u: goto label_102158;
        case 0x10215cu: goto label_10215c;
        case 0x102160u: goto label_102160;
        case 0x102164u: goto label_102164;
        case 0x102168u: goto label_102168;
        case 0x10216cu: goto label_10216c;
        case 0x102170u: goto label_102170;
        case 0x102174u: goto label_102174;
        case 0x102178u: goto label_102178;
        case 0x10217cu: goto label_10217c;
        case 0x102180u: goto label_102180;
        case 0x102184u: goto label_102184;
        case 0x102188u: goto label_102188;
        case 0x10218cu: goto label_10218c;
        case 0x102190u: goto label_102190;
        case 0x102194u: goto label_102194;
        case 0x102198u: goto label_102198;
        case 0x10219cu: goto label_10219c;
        case 0x1021a0u: goto label_1021a0;
        case 0x1021a4u: goto label_1021a4;
        case 0x1021a8u: goto label_1021a8;
        case 0x1021acu: goto label_1021ac;
        case 0x1021b0u: goto label_1021b0;
        case 0x1021b4u: goto label_1021b4;
        case 0x1021b8u: goto label_1021b8;
        case 0x1021bcu: goto label_1021bc;
        case 0x1021c0u: goto label_1021c0;
        case 0x1021c4u: goto label_1021c4;
        case 0x1021c8u: goto label_1021c8;
        case 0x1021ccu: goto label_1021cc;
        case 0x1021d0u: goto label_1021d0;
        case 0x1021d4u: goto label_1021d4;
        case 0x1021d8u: goto label_1021d8;
        case 0x1021dcu: goto label_1021dc;
        case 0x1021e0u: goto label_1021e0;
        case 0x1021e4u: goto label_1021e4;
        case 0x1021e8u: goto label_1021e8;
        case 0x1021ecu: goto label_1021ec;
        case 0x1021f0u: goto label_1021f0;
        case 0x1021f4u: goto label_1021f4;
        case 0x1021f8u: goto label_1021f8;
        case 0x1021fcu: goto label_1021fc;
        case 0x102200u: goto label_102200;
        case 0x102204u: goto label_102204;
        case 0x102208u: goto label_102208;
        case 0x10220cu: goto label_10220c;
        case 0x102210u: goto label_102210;
        case 0x102214u: goto label_102214;
        case 0x102218u: goto label_102218;
        case 0x10221cu: goto label_10221c;
        case 0x102220u: goto label_102220;
        case 0x102224u: goto label_102224;
        case 0x102228u: goto label_102228;
        case 0x10222cu: goto label_10222c;
        case 0x102230u: goto label_102230;
        case 0x102234u: goto label_102234;
        case 0x102238u: goto label_102238;
        case 0x10223cu: goto label_10223c;
        case 0x102240u: goto label_102240;
        case 0x102244u: goto label_102244;
        case 0x102248u: goto label_102248;
        case 0x10224cu: goto label_10224c;
        case 0x102250u: goto label_102250;
        case 0x102254u: goto label_102254;
        case 0x102258u: goto label_102258;
        case 0x10225cu: goto label_10225c;
        case 0x102260u: goto label_102260;
        case 0x102264u: goto label_102264;
        case 0x102268u: goto label_102268;
        case 0x10226cu: goto label_10226c;
        case 0x102270u: goto label_102270;
        case 0x102274u: goto label_102274;
        case 0x102278u: goto label_102278;
        case 0x10227cu: goto label_10227c;
        case 0x102280u: goto label_102280;
        case 0x102284u: goto label_102284;
        case 0x102288u: goto label_102288;
        case 0x10228cu: goto label_10228c;
        case 0x102290u: goto label_102290;
        case 0x102294u: goto label_102294;
        case 0x102298u: goto label_102298;
        case 0x10229cu: goto label_10229c;
        case 0x1022a0u: goto label_1022a0;
        case 0x1022a4u: goto label_1022a4;
        case 0x1022a8u: goto label_1022a8;
        case 0x1022acu: goto label_1022ac;
        case 0x1022b0u: goto label_1022b0;
        case 0x1022b4u: goto label_1022b4;
        case 0x1022b8u: goto label_1022b8;
        case 0x1022bcu: goto label_1022bc;
        case 0x1022c0u: goto label_1022c0;
        case 0x1022c4u: goto label_1022c4;
        case 0x1022c8u: goto label_1022c8;
        case 0x1022ccu: goto label_1022cc;
        case 0x1022d0u: goto label_1022d0;
        case 0x1022d4u: goto label_1022d4;
        case 0x1022d8u: goto label_1022d8;
        case 0x1022dcu: goto label_1022dc;
        case 0x1022e0u: goto label_1022e0;
        case 0x1022e4u: goto label_1022e4;
        case 0x1022e8u: goto label_1022e8;
        case 0x1022ecu: goto label_1022ec;
        case 0x1022f0u: goto label_1022f0;
        case 0x1022f4u: goto label_1022f4;
        case 0x1022f8u: goto label_1022f8;
        case 0x1022fcu: goto label_1022fc;
        case 0x102300u: goto label_102300;
        case 0x102304u: goto label_102304;
        case 0x102308u: goto label_102308;
        case 0x10230cu: goto label_10230c;
        case 0x102310u: goto label_102310;
        case 0x102314u: goto label_102314;
        case 0x102318u: goto label_102318;
        case 0x10231cu: goto label_10231c;
        case 0x102320u: goto label_102320;
        case 0x102324u: goto label_102324;
        case 0x102328u: goto label_102328;
        case 0x10232cu: goto label_10232c;
        case 0x102330u: goto label_102330;
        case 0x102334u: goto label_102334;
        case 0x102338u: goto label_102338;
        case 0x10233cu: goto label_10233c;
        case 0x102340u: goto label_102340;
        case 0x102344u: goto label_102344;
        case 0x102348u: goto label_102348;
        case 0x10234cu: goto label_10234c;
        case 0x102350u: goto label_102350;
        case 0x102354u: goto label_102354;
        case 0x102358u: goto label_102358;
        case 0x10235cu: goto label_10235c;
        case 0x102360u: goto label_102360;
        case 0x102364u: goto label_102364;
        case 0x102368u: goto label_102368;
        case 0x10236cu: goto label_10236c;
        case 0x102370u: goto label_102370;
        case 0x102374u: goto label_102374;
        case 0x102378u: goto label_102378;
        case 0x10237cu: goto label_10237c;
        case 0x102380u: goto label_102380;
        case 0x102384u: goto label_102384;
        case 0x102388u: goto label_102388;
        case 0x10238cu: goto label_10238c;
        case 0x102390u: goto label_102390;
        case 0x102394u: goto label_102394;
        case 0x102398u: goto label_102398;
        case 0x10239cu: goto label_10239c;
        case 0x1023a0u: goto label_1023a0;
        case 0x1023a4u: goto label_1023a4;
        case 0x1023a8u: goto label_1023a8;
        case 0x1023acu: goto label_1023ac;
        case 0x1023b0u: goto label_1023b0;
        case 0x1023b4u: goto label_1023b4;
        case 0x1023b8u: goto label_1023b8;
        case 0x1023bcu: goto label_1023bc;
        case 0x1023c0u: goto label_1023c0;
        case 0x1023c4u: goto label_1023c4;
        case 0x1023c8u: goto label_1023c8;
        case 0x1023ccu: goto label_1023cc;
        case 0x1023d0u: goto label_1023d0;
        case 0x1023d4u: goto label_1023d4;
        case 0x1023d8u: goto label_1023d8;
        case 0x1023dcu: goto label_1023dc;
        case 0x1023e0u: goto label_1023e0;
        case 0x1023e4u: goto label_1023e4;
        case 0x1023e8u: goto label_1023e8;
        case 0x1023ecu: goto label_1023ec;
        case 0x1023f0u: goto label_1023f0;
        case 0x1023f4u: goto label_1023f4;
        case 0x1023f8u: goto label_1023f8;
        case 0x1023fcu: goto label_1023fc;
        case 0x102400u: goto label_102400;
        case 0x102404u: goto label_102404;
        case 0x102408u: goto label_102408;
        case 0x10240cu: goto label_10240c;
        case 0x102410u: goto label_102410;
        case 0x102414u: goto label_102414;
        default: break;
    }

    ctx->pc = 0x102150u;

label_102150:
    // 0x102150: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x102150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_102154:
    // 0x102154: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x102154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_102158:
    // 0x102158: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x102158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_10215c:
    // 0x10215c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10215cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_102160:
    // 0x102160: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x102160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_102164:
    // 0x102164: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x102164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_102168:
    // 0x102168: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x102168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_10216c:
    // 0x10216c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10216cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_102170:
    // 0x102170: 0xc0b6dac  jal         func_2DB6B0
label_102174:
    if (ctx->pc == 0x102174u) {
        ctx->pc = 0x102174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102170u;
        // 0x102174: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x102178u;
        goto label_102178;
    }
    ctx->pc = 0x102170u;
    SET_GPR_U32(ctx, 31, 0x102178u);
    ctx->pc = 0x102174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102170u;
    // 0x102174: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x102170u, 0x102178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102178u;
label_102178:
    // 0x102178: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x102178u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10217c:
    // 0x10217c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x10217cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_102180:
    // 0x102180: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x102180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31352)));
label_102184:
    // 0x102184: 0x460009b  bltz        $v1, . + 4 + (0x9B << 2)
label_102188:
    if (ctx->pc == 0x102188u) {
        ctx->pc = 0x102188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102184u;
        // 0x102188: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10218Cu;
        goto label_10218c;
    }
    ctx->pc = 0x102184u;
    {
        const bool branch_taken_0x102184 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x102188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102184u;
        // 0x102188: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102184) {
            ctx->pc = 0x1023F4u;
            goto label_1023f4;
        }
    }
    ctx->pc = 0x10218Cu;
label_10218c:
    // 0x10218c: 0x8e2214b4  lw          $v0, 0x14B4($s1)
    ctx->pc = 0x10218cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5300)));
label_102190:
    // 0x102190: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_102194:
    if (ctx->pc == 0x102194u) {
        ctx->pc = 0x102194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102190u;
        // 0x102194: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102198u;
        goto label_102198;
    }
    ctx->pc = 0x102190u;
    {
        const bool branch_taken_0x102190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102190u;
        // 0x102194: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102190) {
            ctx->pc = 0x10219Cu;
            goto label_10219c;
        }
    }
    ctx->pc = 0x102198u;
label_102198:
    // 0x102198: 0xae2214b4  sw          $v0, 0x14B4($s1)
    ctx->pc = 0x102198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5300), GPR_U32(ctx, 2));
label_10219c:
    // 0x10219c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10219cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1021a0:
    // 0x1021a0: 0xc040906  jal         func_102418
label_1021a4:
    if (ctx->pc == 0x1021A4u) {
        ctx->pc = 0x1021A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1021A0u;
        // 0x1021a4: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1021A8u;
        goto label_1021a8;
    }
    ctx->pc = 0x1021A0u;
    SET_GPR_U32(ctx, 31, 0x1021A8u);
    ctx->pc = 0x1021A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1021A0u;
    // 0x1021a4: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102418u, 0x1021A0u, 0x1021A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1021A8u;
label_1021a8:
    // 0x1021a8: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1021a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1021ac:
    // 0x1021ac: 0x26042fc0  addiu       $a0, $s0, 0x2FC0
    ctx->pc = 0x1021acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
label_1021b0:
    // 0x1021b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1021b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1021b4:
    // 0x1021b4: 0xc04d476  jal         func_1351D8
label_1021b8:
    if (ctx->pc == 0x1021B8u) {
        ctx->pc = 0x1021B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1021B4u;
        // 0x1021b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1021BCu;
        goto label_1021bc;
    }
    ctx->pc = 0x1021B4u;
    SET_GPR_U32(ctx, 31, 0x1021BCu);
    ctx->pc = 0x1021B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1021B4u;
    // 0x1021b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x1021B4u, 0x1021BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1021BCu;
label_1021bc:
    // 0x1021bc: 0x8e240250  lw          $a0, 0x250($s1)
    ctx->pc = 0x1021bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_1021c0:
    // 0x1021c0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1021c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1021c4:
    // 0x1021c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1021c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1021c8:
    // 0x1021c8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1021c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_1021cc:
    // 0x1021cc: 0x922502f4  lbu         $a1, 0x2F4($s1)
    ctx->pc = 0x1021ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
label_1021d0:
    // 0x1021d0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1021d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1021d4:
    // 0x1021d4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1021d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1021d8:
    // 0x1021d8: 0xae240250  sw          $a0, 0x250($s1)
    ctx->pc = 0x1021d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 4));
label_1021dc:
    // 0x1021dc: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1021dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1021e0:
    // 0x1021e0: 0x2463c748  addiu       $v1, $v1, -0x38B8
    ctx->pc = 0x1021e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952776));
label_1021e4:
    // 0x1021e4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1021e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1021e8:
    // 0x1021e8: 0x84860002  lh          $a2, 0x2($a0)
    ctx->pc = 0x1021e8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1021ec:
    // 0x1021ec: 0x4c0000a  bltz        $a2, . + 4 + (0xA << 2)
label_1021f0:
    if (ctx->pc == 0x1021F0u) {
        ctx->pc = 0x1021F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1021ECu;
        // 0x1021f0: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1021F4u;
        goto label_1021f4;
    }
    ctx->pc = 0x1021ECu;
    {
        const bool branch_taken_0x1021ec = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x1021F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1021ECu;
        // 0x1021f0: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1021ec) {
            ctx->pc = 0x102218u;
            goto label_102218;
        }
    }
    ctx->pc = 0x1021F4u;
label_1021f4:
    // 0x1021f4: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1021f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1021f8:
    // 0x1021f8: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1021f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1021fc:
    // 0x1021fc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1021fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_102200:
    // 0x102200: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x102200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_102204:
    // 0x102204: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x102204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_102208:
    // 0x102208: 0xdc72fff8  ld          $s2, -0x8($v1)
    ctx->pc = 0x102208u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_10220c:
    // 0x10220c: 0x12283f  dsra32      $a1, $s2, 0
    ctx->pc = 0x10220cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 18) >> (32 + 0));
label_102210:
    // 0x102210: 0x10000003  b           . + 4 + (0x3 << 2)
label_102214:
    if (ctx->pc == 0x102214u) {
        ctx->pc = 0x102214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102210u;
        // 0x102214: 0x922202f4  lbu         $v0, 0x2F4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102218u;
        goto label_102218;
    }
    ctx->pc = 0x102210u;
    {
        const bool branch_taken_0x102210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102210u;
        // 0x102214: 0x922202f4  lbu         $v0, 0x2F4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102210) {
            ctx->pc = 0x102220u;
            goto label_102220;
        }
    }
    ctx->pc = 0x102218u;
label_102218:
    // 0x102218: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x102218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10221c:
    // 0x10221c: 0x922202f4  lbu         $v0, 0x2F4($s1)
    ctx->pc = 0x10221cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
label_102220:
    // 0x102220: 0x24e3c748  addiu       $v1, $a3, -0x38B8
    ctx->pc = 0x102220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952776));
label_102224:
    // 0x102224: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x102224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_102228:
    // 0x102228: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10222c:
    // 0x10222c: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
label_102230:
    if (ctx->pc == 0x102230u) {
        ctx->pc = 0x102230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10222Cu;
        // 0x102230: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102234u;
        goto label_102234;
    }
    ctx->pc = 0x10222Cu;
    {
        const bool branch_taken_0x10222c = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x102230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10222Cu;
        // 0x102230: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10222c) {
            ctx->pc = 0x102248u;
            goto label_102248;
        }
    }
    ctx->pc = 0x102234u;
label_102234:
    // 0x102234: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x102234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_102238:
    // 0x102238: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x102238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_10223c:
    // 0x10223c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x10223cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_102240:
    // 0x102240: 0x10000002  b           . + 4 + (0x2 << 2)
label_102244:
    if (ctx->pc == 0x102244u) {
        ctx->pc = 0x102244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102240u;
        // 0x102244: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102248u;
        goto label_102248;
    }
    ctx->pc = 0x102240u;
    {
        const bool branch_taken_0x102240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102240u;
        // 0x102244: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102240) {
            ctx->pc = 0x10224Cu;
            goto label_10224c;
        }
    }
    ctx->pc = 0x102248u;
label_102248:
    // 0x102248: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x102248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10224c:
    // 0x10224c: 0xa0f809  jalr        $a1
label_102250:
    if (ctx->pc == 0x102250u) {
        ctx->pc = 0x102250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10224Cu;
        // 0x102250: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102254u;
        goto label_102254;
    }
    ctx->pc = 0x10224Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x102254u);
        ctx->pc = 0x102250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10224Cu;
        // 0x102250: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10224Cu, 0x102254u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102254u;
label_102254:
    // 0x102254: 0x26842fc0  addiu       $a0, $s4, 0x2FC0
    ctx->pc = 0x102254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 12224));
label_102258:
    // 0x102258: 0xc04d23a  jal         func_1348E8
label_10225c:
    if (ctx->pc == 0x10225Cu) {
        ctx->pc = 0x10225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102258u;
        // 0x10225c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102260u;
        goto label_102260;
    }
    ctx->pc = 0x102258u;
    SET_GPR_U32(ctx, 31, 0x102260u);
    ctx->pc = 0x10225Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102258u;
    // 0x10225c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1348E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1348E8u, 0x102258u, 0x102260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102260u;
label_102260:
    // 0x102260: 0x8e2314b0  lw          $v1, 0x14B0($s1)
    ctx->pc = 0x102260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5296)));
label_102264:
    // 0x102264: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x102264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_102268:
    // 0x102268: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
label_10226c:
    if (ctx->pc == 0x10226Cu) {
        ctx->pc = 0x10226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102268u;
        // 0x10226c: 0x8e2214b0  lw          $v0, 0x14B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102270u;
        goto label_102270;
    }
    ctx->pc = 0x102268u;
    {
        const bool branch_taken_0x102268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x102268) {
            ctx->pc = 0x10226Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102268u;
            // 0x10226c: 0x8e2214b0  lw          $v0, 0x14B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1022BCu;
            goto label_1022bc;
        }
    }
    ctx->pc = 0x102270u;
label_102270:
    // 0x102270: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x102270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_102274:
    // 0x102274: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x102274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_102278:
    // 0x102278: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x102278u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_10227c:
    // 0x10227c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10227cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_102280:
    // 0x102280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x102280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_102284:
    // 0x102284: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x102284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_102288:
    // 0x102288: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x102288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10228c:
    // 0x10228c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x10228cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_102290:
    // 0x102290: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x102290u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102294:
    // 0x102294: 0xc04cb68  jal         func_132DA0
label_102298:
    if (ctx->pc == 0x102298u) {
        ctx->pc = 0x102298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102294u;
        // 0x102298: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10229Cu;
        goto label_10229c;
    }
    ctx->pc = 0x102294u;
    SET_GPR_U32(ctx, 31, 0x10229Cu);
    ctx->pc = 0x102298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102294u;
    // 0x102298: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132DA0u, 0x102294u, 0x10229Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10229Cu;
label_10229c:
    // 0x10229c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1022a0:
    if (ctx->pc == 0x1022A0u) {
        ctx->pc = 0x1022A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10229Cu;
        // 0x1022a0: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1022A4u;
        goto label_1022a4;
    }
    ctx->pc = 0x10229Cu;
    {
        const bool branch_taken_0x10229c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1022A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10229Cu;
        // 0x1022a0: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10229c) {
            ctx->pc = 0x1022B8u;
            goto label_1022b8;
        }
    }
    ctx->pc = 0x1022A4u;
label_1022a4:
    // 0x1022a4: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1022a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1022a8:
    // 0x1022a8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1022a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1022ac:
    // 0x1022ac: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1022acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1022b0:
    // 0x1022b0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1022b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1022b4:
    // 0x1022b4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1022b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1022b8:
    // 0x1022b8: 0x8e2214b0  lw          $v0, 0x14B0($s1)
    ctx->pc = 0x1022b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5296)));
label_1022bc:
    // 0x1022bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1022bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1022c0:
    // 0x1022c0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_1022c4:
    if (ctx->pc == 0x1022C4u) {
        ctx->pc = 0x1022C8u;
        goto label_1022c8;
    }
    ctx->pc = 0x1022C0u;
    {
        const bool branch_taken_0x1022c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1022c0) {
            ctx->pc = 0x102348u;
            goto label_102348;
        }
    }
    ctx->pc = 0x1022C8u;
label_1022c8:
    // 0x1022c8: 0xae200474  sw          $zero, 0x474($s1)
    ctx->pc = 0x1022c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1140), GPR_U32(ctx, 0));
label_1022cc:
    // 0x1022cc: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1022ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1022d0:
    // 0x1022d0: 0xc4540004  lwc1        $f20, 0x4($v0)
    ctx->pc = 0x1022d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1022d4:
    // 0x1022d4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1022d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1022d8:
    // 0x1022d8: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1022d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_1022dc:
    // 0x1022dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1022dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1022e0:
    // 0x1022e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1022e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1022e4:
    // 0x1022e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1022e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1022e8:
    // 0x1022e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1022e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1022ec:
    // 0x1022ec: 0xc04ca70  jal         func_1329C0
label_1022f0:
    if (ctx->pc == 0x1022F0u) {
        ctx->pc = 0x1022F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022ECu;
        // 0x1022f0: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1022F4u;
        goto label_1022f4;
    }
    ctx->pc = 0x1022ECu;
    SET_GPR_U32(ctx, 31, 0x1022F4u);
    ctx->pc = 0x1022F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1022ECu;
    // 0x1022f0: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1329C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1329C0u, 0x1022ECu, 0x1022F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1022F4u;
label_1022f4:
    // 0x1022f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1022f8:
    if (ctx->pc == 0x1022F8u) {
        ctx->pc = 0x1022F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022F4u;
        // 0x1022f8: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1022FCu;
        goto label_1022fc;
    }
    ctx->pc = 0x1022F4u;
    {
        const bool branch_taken_0x1022f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1022F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022F4u;
        // 0x1022f8: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022f4) {
            ctx->pc = 0x102308u;
            goto label_102308;
        }
    }
    ctx->pc = 0x1022FCu;
label_1022fc:
    // 0x1022fc: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x1022fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_102300:
    // 0x102300: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x102300u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_102304:
    // 0x102304: 0xae220474  sw          $v0, 0x474($s1)
    ctx->pc = 0x102304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1140), GPR_U32(ctx, 2));
label_102308:
    // 0x102308: 0xc62105bc  lwc1        $f1, 0x5BC($s1)
    ctx->pc = 0x102308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10230c:
    // 0x10230c: 0xc62005b8  lwc1        $f0, 0x5B8($s1)
    ctx->pc = 0x10230cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_102310:
    // 0x102310: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x102310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_102314:
    // 0x102314: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x102314u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_102318:
    // 0x102318: 0xe62105bc  swc1        $f1, 0x5BC($s1)
    ctx->pc = 0x102318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1468), bits); }
label_10231c:
    // 0x10231c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x10231cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_102320:
    // 0x102320: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x102320u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_102324:
    // 0x102324: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x102324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_102328:
    // 0x102328: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x102328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_10232c:
    // 0x10232c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x10232cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_102330:
    // 0x102330: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x102330u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_102334:
    // 0x102334: 0x0  nop
    ctx->pc = 0x102334u;
    // NOP
label_102338:
    // 0x102338: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_10233c:
    if (ctx->pc == 0x10233Cu) {
        ctx->pc = 0x102340u;
        goto label_102340;
    }
    ctx->pc = 0x102338u;
    {
        const bool branch_taken_0x102338 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x102338) {
            ctx->pc = 0x102348u;
            goto label_102348;
        }
    }
    ctx->pc = 0x102340u;
label_102340:
    // 0x102340: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x102340u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_102344:
    // 0x102344: 0xae2005bc  sw          $zero, 0x5BC($s1)
    ctx->pc = 0x102344u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1468), GPR_U32(ctx, 0));
label_102348:
    // 0x102348: 0xc053ed2  jal         func_14FB48
label_10234c:
    if (ctx->pc == 0x10234Cu) {
        ctx->pc = 0x10234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102348u;
        // 0x10234c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102350u;
        goto label_102350;
    }
    ctx->pc = 0x102348u;
    SET_GPR_U32(ctx, 31, 0x102350u);
    ctx->pc = 0x10234Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102348u;
    // 0x10234c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FB48u, 0x102348u, 0x102350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102350u;
label_102350:
    // 0x102350: 0xc0527ae  jal         func_149EB8
label_102354:
    if (ctx->pc == 0x102354u) {
        ctx->pc = 0x102354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102350u;
        // 0x102354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102358u;
        goto label_102358;
    }
    ctx->pc = 0x102350u;
    SET_GPR_U32(ctx, 31, 0x102358u);
    ctx->pc = 0x102354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102350u;
    // 0x102354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x102350u, 0x102358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102358u;
label_102358:
    // 0x102358: 0x26240448  addiu       $a0, $s1, 0x448
    ctx->pc = 0x102358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1096));
label_10235c:
    // 0x10235c: 0xc054a88  jal         func_152A20
label_102360:
    if (ctx->pc == 0x102360u) {
        ctx->pc = 0x102360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10235Cu;
        // 0x102360: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102364u;
        goto label_102364;
    }
    ctx->pc = 0x10235Cu;
    SET_GPR_U32(ctx, 31, 0x102364u);
    ctx->pc = 0x102360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10235Cu;
    // 0x102360: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x10235Cu, 0x102364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102364u;
label_102364:
    // 0x102364: 0xc05280e  jal         func_14A038
label_102368:
    if (ctx->pc == 0x102368u) {
        ctx->pc = 0x102368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102364u;
        // 0x102368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10236Cu;
        goto label_10236c;
    }
    ctx->pc = 0x102364u;
    SET_GPR_U32(ctx, 31, 0x10236Cu);
    ctx->pc = 0x102368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102364u;
    // 0x102368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x102364u, 0x10236Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10236Cu;
label_10236c:
    // 0x10236c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x10236cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_102370:
    // 0x102370: 0x26230490  addiu       $v1, $s1, 0x490
    ctx->pc = 0x102370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
label_102374:
    // 0x102374: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_102378:
    if (ctx->pc == 0x102378u) {
        ctx->pc = 0x102378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102374u;
        // 0x102378: 0x8e2214b0  lw          $v0, 0x14B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10237Cu;
        goto label_10237c;
    }
    ctx->pc = 0x102374u;
    {
        const bool branch_taken_0x102374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x102374) {
            ctx->pc = 0x102378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102374u;
            // 0x102378: 0x8e2214b0  lw          $v0, 0x14B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102398u;
            goto label_102398;
        }
    }
    ctx->pc = 0x10237Cu;
label_10237c:
    // 0x10237c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x10237cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_102380:
    // 0x102380: 0xe6200490  swc1        $f0, 0x490($s1)
    ctx->pc = 0x102380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1168), bits); }
label_102384:
    // 0x102384: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x102384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_102388:
    // 0x102388: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x102388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_10238c:
    // 0x10238c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x10238cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_102390:
    // 0x102390: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x102390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_102394:
    // 0x102394: 0x8e2214b0  lw          $v0, 0x14B0($s1)
    ctx->pc = 0x102394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5296)));
label_102398:
    // 0x102398: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x102398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_10239c:
    // 0x10239c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1023a0:
    if (ctx->pc == 0x1023A0u) {
        ctx->pc = 0x1023A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10239Cu;
        // 0x1023a0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1023A4u;
        goto label_1023a4;
    }
    ctx->pc = 0x10239Cu;
    {
        const bool branch_taken_0x10239c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1023A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10239Cu;
        // 0x1023a0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10239c) {
            ctx->pc = 0x1023F4u;
            goto label_1023f4;
        }
    }
    ctx->pc = 0x1023A4u;
label_1023a4:
    // 0x1023a4: 0x8e6300f0  lw          $v1, 0xF0($s3)
    ctx->pc = 0x1023a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_1023a8:
    // 0x1023a8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1023a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1023ac:
    // 0x1023ac: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_1023b0:
    if (ctx->pc == 0x1023B0u) {
        ctx->pc = 0x1023B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023ACu;
        // 0x1023b0: 0x26630100  addiu       $v1, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1023B4u;
        goto label_1023b4;
    }
    ctx->pc = 0x1023ACu;
    {
        const bool branch_taken_0x1023ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1023ac) {
            ctx->pc = 0x1023B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1023ACu;
            // 0x1023b0: 0x26630100  addiu       $v1, $s3, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1023D0u;
            goto label_1023d0;
        }
    }
    ctx->pc = 0x1023B4u;
label_1023b4:
    // 0x1023b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1023b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1023b8:
    // 0x1023b8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1023b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1023bc:
    // 0x1023bc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1023bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1023c0:
    // 0x1023c0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1023c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1023c4:
    // 0x1023c4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1023c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1023c8:
    // 0x1023c8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1023c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1023cc:
    // 0x1023cc: 0x26630100  addiu       $v1, $s3, 0x100
    ctx->pc = 0x1023ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
label_1023d0:
    // 0x1023d0: 0x26220100  addiu       $v0, $s1, 0x100
    ctx->pc = 0x1023d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1023d4:
    // 0x1023d4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1023d8:
    if (ctx->pc == 0x1023D8u) {
        ctx->pc = 0x1023D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023D4u;
        // 0x1023d8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1023DCu;
        goto label_1023dc;
    }
    ctx->pc = 0x1023D4u;
    {
        const bool branch_taken_0x1023d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1023D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023D4u;
        // 0x1023d8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1023d4) {
            ctx->pc = 0x1023F4u;
            goto label_1023f4;
        }
    }
    ctx->pc = 0x1023DCu;
label_1023dc:
    // 0x1023dc: 0xc6200100  lwc1        $f0, 0x100($s1)
    ctx->pc = 0x1023dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1023e0:
    // 0x1023e0: 0xe6600100  swc1        $f0, 0x100($s3)
    ctx->pc = 0x1023e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 256), bits); }
label_1023e4:
    // 0x1023e4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1023e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1023e8:
    // 0x1023e8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1023e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1023ec:
    // 0x1023ec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1023ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1023f0:
    // 0x1023f0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1023f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1023f4:
    // 0x1023f4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1023f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1023f8:
    // 0x1023f8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1023f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1023fc:
    // 0x1023fc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1023fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_102400:
    // 0x102400: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x102400u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_102404:
    // 0x102404: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x102404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_102408:
    // 0x102408: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x102408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_10240c:
    // 0x10240c: 0x3e00008  jr          $ra
label_102410:
    if (ctx->pc == 0x102410u) {
        ctx->pc = 0x102410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10240Cu;
        // 0x102410: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102414u;
        goto label_102414;
    }
    ctx->pc = 0x10240Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10240Cu;
        // 0x102410: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10240Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102414u;
label_102414:
    // 0x102414: 0x0  nop
    ctx->pc = 0x102414u;
    // NOP
    ctx->pc = 0x102418u;
}
