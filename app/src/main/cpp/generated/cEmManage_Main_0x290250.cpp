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

// Function: cEmManage_Main
// Address: 0x290250 - 0x2905d0
void cEmManage_Main_0x290250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_Main_0x290250");
#endif

    switch (ctx->pc) {
        case 0x29026cu: goto label_29026c;
        case 0x290478u: goto label_290478;
        case 0x2904b0u: goto label_2904b0;
        case 0x290550u: goto label_290550;
        case 0x290558u: goto label_290558;
        case 0x290570u: goto label_290570;
        case 0x290590u: goto label_290590;
        case 0x2905b0u: goto label_2905b0;
        case 0x2905b8u: goto label_2905b8;
        default: break;
    }

    ctx->pc = 0x290250u;

    // 0x290250: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x290250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x290254: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x290254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x290258: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x290258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x29025c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x29025cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x290260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290264: 0xc0a52b6  jal         func_294AD8
    ctx->pc = 0x290264u;
    SET_GPR_U32(ctx, 31, 0x29026Cu);
    ctx->pc = 0x290268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290264u;
    // 0x290268: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294AD8u, 0x290264u, 0x29026Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29026Cu;
label_29026c:
    // 0x29026c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x29026cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x290270: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x290270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x290274: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x290274u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x290278: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x290278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x29027c: 0x546000cf  bnel        $v1, $zero, . + 4 + (0xCF << 2)
    ctx->pc = 0x29027Cu;
    {
        const bool branch_taken_0x29027c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29027c) {
            ctx->pc = 0x290280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29027Cu;
            // 0x290280: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2905BCu;
            goto label_2905bc;
        }
    }
    ctx->pc = 0x290284u;
    // 0x290284: 0x8e020510  lw          $v0, 0x510($s0)
    ctx->pc = 0x290284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x290288: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x290288u;
    {
        const bool branch_taken_0x290288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290288u;
        // 0x29028c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290288) {
            ctx->pc = 0x290294u;
            goto label_290294;
        }
    }
    ctx->pc = 0x290290u;
    // 0x290290: 0xae020510  sw          $v0, 0x510($s0)
    ctx->pc = 0x290290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1296), GPR_U32(ctx, 2));
label_290294:
    // 0x290294: 0x8e020514  lw          $v0, 0x514($s0)
    ctx->pc = 0x290294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1300)));
    // 0x290298: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x290298u;
    {
        const bool branch_taken_0x290298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290298u;
        // 0x29029c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290298) {
            ctx->pc = 0x2902A4u;
            goto label_2902a4;
        }
    }
    ctx->pc = 0x2902A0u;
    // 0x2902a0: 0xae020514  sw          $v0, 0x514($s0)
    ctx->pc = 0x2902a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1300), GPR_U32(ctx, 2));
label_2902a4:
    // 0x2902a4: 0x8e020530  lw          $v0, 0x530($s0)
    ctx->pc = 0x2902a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1328)));
    // 0x2902a8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2902A8u;
    {
        const bool branch_taken_0x2902a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2902ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2902A8u;
        // 0x2902ac: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2902a8) {
            ctx->pc = 0x2902B4u;
            goto label_2902b4;
        }
    }
    ctx->pc = 0x2902B0u;
    // 0x2902b0: 0xae020530  sw          $v0, 0x530($s0)
    ctx->pc = 0x2902b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1328), GPR_U32(ctx, 2));
label_2902b4:
    // 0x2902b4: 0x82020538  lb          $v0, 0x538($s0)
    ctx->pc = 0x2902b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1336)));
    // 0x2902b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2902B8u;
    {
        const bool branch_taken_0x2902b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2902BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2902B8u;
        // 0x2902bc: 0x92030538  lbu         $v1, 0x538($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2902b8) {
            ctx->pc = 0x2902C8u;
            goto label_2902c8;
        }
    }
    ctx->pc = 0x2902C0u;
    // 0x2902c0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2902c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2902c4: 0xa2020538  sb          $v0, 0x538($s0)
    ctx->pc = 0x2902c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1336), (uint8_t)GPR_U32(ctx, 2));
label_2902c8:
    // 0x2902c8: 0x82020539  lb          $v0, 0x539($s0)
    ctx->pc = 0x2902c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1337)));
    // 0x2902cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2902CCu;
    {
        const bool branch_taken_0x2902cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2902D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2902CCu;
        // 0x2902d0: 0x92030539  lbu         $v1, 0x539($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1337)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2902cc) {
            ctx->pc = 0x2902DCu;
            goto label_2902dc;
        }
    }
    ctx->pc = 0x2902D4u;
    // 0x2902d4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2902d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2902d8: 0xa2020539  sb          $v0, 0x539($s0)
    ctx->pc = 0x2902d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1337), (uint8_t)GPR_U32(ctx, 2));
label_2902dc:
    // 0x2902dc: 0x8202053a  lb          $v0, 0x53A($s0)
    ctx->pc = 0x2902dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1338)));
    // 0x2902e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2902E0u;
    {
        const bool branch_taken_0x2902e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2902E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2902E0u;
        // 0x2902e4: 0x9203053a  lbu         $v1, 0x53A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1338)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2902e0) {
            ctx->pc = 0x2902F0u;
            goto label_2902f0;
        }
    }
    ctx->pc = 0x2902E8u;
    // 0x2902e8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2902e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2902ec: 0xa202053a  sb          $v0, 0x53A($s0)
    ctx->pc = 0x2902ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1338), (uint8_t)GPR_U32(ctx, 2));
label_2902f0:
    // 0x2902f0: 0x8202053b  lb          $v0, 0x53B($s0)
    ctx->pc = 0x2902f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x2902f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2902F4u;
    {
        const bool branch_taken_0x2902f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2902F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2902F4u;
        // 0x2902f8: 0x9203053b  lbu         $v1, 0x53B($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2902f4) {
            ctx->pc = 0x290304u;
            goto label_290304;
        }
    }
    ctx->pc = 0x2902FCu;
    // 0x2902fc: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2902fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x290300: 0xa202053b  sb          $v0, 0x53B($s0)
    ctx->pc = 0x290300u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1339), (uint8_t)GPR_U32(ctx, 2));
label_290304:
    // 0x290304: 0x8202053c  lb          $v0, 0x53C($s0)
    ctx->pc = 0x290304u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1340)));
    // 0x290308: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290308u;
    {
        const bool branch_taken_0x290308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290308u;
        // 0x29030c: 0x9203053c  lbu         $v1, 0x53C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290308) {
            ctx->pc = 0x290318u;
            goto label_290318;
        }
    }
    ctx->pc = 0x290310u;
    // 0x290310: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x290310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x290314: 0xa202053c  sb          $v0, 0x53C($s0)
    ctx->pc = 0x290314u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1340), (uint8_t)GPR_U32(ctx, 2));
label_290318:
    // 0x290318: 0x8202053d  lb          $v0, 0x53D($s0)
    ctx->pc = 0x290318u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1341)));
    // 0x29031c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29031Cu;
    {
        const bool branch_taken_0x29031c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29031Cu;
        // 0x290320: 0x9203053d  lbu         $v1, 0x53D($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1341)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29031c) {
            ctx->pc = 0x29032Cu;
            goto label_29032c;
        }
    }
    ctx->pc = 0x290324u;
    // 0x290324: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x290324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x290328: 0xa202053d  sb          $v0, 0x53D($s0)
    ctx->pc = 0x290328u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1341), (uint8_t)GPR_U32(ctx, 2));
label_29032c:
    // 0x29032c: 0xc6010544  lwc1        $f1, 0x544($s0)
    ctx->pc = 0x29032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290330: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x290330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290334: 0x0  nop
    ctx->pc = 0x290334u;
    // NOP
    // 0x290338: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x290338u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29033c: 0x0  nop
    ctx->pc = 0x29033cu;
    // NOP
    // 0x290340: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x290340u;
    {
        const bool branch_taken_0x290340 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x290340) {
            ctx->pc = 0x290344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290340u;
            // 0x290344: 0x82020540  lb          $v0, 0x540($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290358u;
            goto label_290358;
        }
    }
    ctx->pc = 0x290348u;
    // 0x290348: 0xc6000548  lwc1        $f0, 0x548($s0)
    ctx->pc = 0x290348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29034c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29034cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x290350: 0xe6000544  swc1        $f0, 0x544($s0)
    ctx->pc = 0x290350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1348), bits); }
    // 0x290354: 0x82020540  lb          $v0, 0x540($s0)
    ctx->pc = 0x290354u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1344)));
label_290358:
    // 0x290358: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290358u;
    {
        const bool branch_taken_0x290358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290358u;
        // 0x29035c: 0x92030540  lbu         $v1, 0x540($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290358) {
            ctx->pc = 0x290368u;
            goto label_290368;
        }
    }
    ctx->pc = 0x290360u;
    // 0x290360: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x290360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x290364: 0xa2020540  sb          $v0, 0x540($s0)
    ctx->pc = 0x290364u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1344), (uint8_t)GPR_U32(ctx, 2));
label_290368:
    // 0x290368: 0x82020541  lb          $v0, 0x541($s0)
    ctx->pc = 0x290368u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1345)));
    // 0x29036c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29036Cu;
    {
        const bool branch_taken_0x29036c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29036Cu;
        // 0x290370: 0x92030541  lbu         $v1, 0x541($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1345)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29036c) {
            ctx->pc = 0x29037Cu;
            goto label_29037c;
        }
    }
    ctx->pc = 0x290374u;
    // 0x290374: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x290374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x290378: 0xa2020541  sb          $v0, 0x541($s0)
    ctx->pc = 0x290378u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1345), (uint8_t)GPR_U32(ctx, 2));
label_29037c:
    // 0x29037c: 0x86020542  lh          $v0, 0x542($s0)
    ctx->pc = 0x29037cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1346)));
    // 0x290380: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290380u;
    {
        const bool branch_taken_0x290380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290380u;
        // 0x290384: 0x96030542  lhu         $v1, 0x542($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1346)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290380) {
            ctx->pc = 0x290390u;
            goto label_290390;
        }
    }
    ctx->pc = 0x290388u;
    // 0x290388: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x290388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29038c: 0xa6020542  sh          $v0, 0x542($s0)
    ctx->pc = 0x29038cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1346), (uint16_t)GPR_U32(ctx, 2));
label_290390:
    // 0x290390: 0x8e020560  lw          $v0, 0x560($s0)
    ctx->pc = 0x290390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x290394: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x290394u;
    {
        const bool branch_taken_0x290394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290394) {
            ctx->pc = 0x290398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290394u;
            // 0x290398: 0x8e020564  lw          $v0, 0x564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2903ACu;
            goto label_2903ac;
        }
    }
    ctx->pc = 0x29039Cu;
    // 0x29039c: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x29039cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2903a0: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2903A0u;
    {
        const bool branch_taken_0x2903a0 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2903a0) {
            ctx->pc = 0x2903A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2903A0u;
            // 0x2903a4: 0xae000560  sw          $zero, 0x560($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2903A8u;
            goto label_2903a8;
        }
    }
    ctx->pc = 0x2903A8u;
label_2903a8:
    // 0x2903a8: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x2903a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_2903ac:
    // 0x2903ac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2903ACu;
    {
        const bool branch_taken_0x2903ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2903ac) {
            ctx->pc = 0x2903B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2903ACu;
            // 0x2903b0: 0x8e020568  lw          $v0, 0x568($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2903C4u;
            goto label_2903c4;
        }
    }
    ctx->pc = 0x2903B4u;
    // 0x2903b4: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x2903b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2903b8: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2903B8u;
    {
        const bool branch_taken_0x2903b8 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2903b8) {
            ctx->pc = 0x2903BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2903B8u;
            // 0x2903bc: 0xae000564  sw          $zero, 0x564($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2903C0u;
            goto label_2903c0;
        }
    }
    ctx->pc = 0x2903C0u;
label_2903c0:
    // 0x2903c0: 0x8e020568  lw          $v0, 0x568($s0)
    ctx->pc = 0x2903c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1384)));
label_2903c4:
    // 0x2903c4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2903C4u;
    {
        const bool branch_taken_0x2903c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2903c4) {
            ctx->pc = 0x2903C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2903C4u;
            // 0x2903c8: 0x8e02056c  lw          $v0, 0x56C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2903DCu;
            goto label_2903dc;
        }
    }
    ctx->pc = 0x2903CCu;
    // 0x2903cc: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x2903ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2903d0: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2903D0u;
    {
        const bool branch_taken_0x2903d0 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2903d0) {
            ctx->pc = 0x2903D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2903D0u;
            // 0x2903d4: 0xae000568  sw          $zero, 0x568($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1384), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2903D8u;
            goto label_2903d8;
        }
    }
    ctx->pc = 0x2903D8u;
label_2903d8:
    // 0x2903d8: 0x8e02056c  lw          $v0, 0x56C($s0)
    ctx->pc = 0x2903d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1388)));
label_2903dc:
    // 0x2903dc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2903DCu;
    {
        const bool branch_taken_0x2903dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2903dc) {
            ctx->pc = 0x2903E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2903DCu;
            // 0x2903e0: 0x8e020570  lw          $v0, 0x570($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1392)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2903F4u;
            goto label_2903f4;
        }
    }
    ctx->pc = 0x2903E4u;
    // 0x2903e4: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x2903e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2903e8: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2903E8u;
    {
        const bool branch_taken_0x2903e8 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2903e8) {
            ctx->pc = 0x2903ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2903E8u;
            // 0x2903ec: 0xae00056c  sw          $zero, 0x56C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1388), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2903F0u;
            goto label_2903f0;
        }
    }
    ctx->pc = 0x2903F0u;
label_2903f0:
    // 0x2903f0: 0x8e020570  lw          $v0, 0x570($s0)
    ctx->pc = 0x2903f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1392)));
label_2903f4:
    // 0x2903f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2903F4u;
    {
        const bool branch_taken_0x2903f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2903f4) {
            ctx->pc = 0x2903F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2903F4u;
            // 0x2903f8: 0x8e020588  lw          $v0, 0x588($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29040Cu;
            goto label_29040c;
        }
    }
    ctx->pc = 0x2903FCu;
    // 0x2903fc: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x2903fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x290400: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x290400u;
    {
        const bool branch_taken_0x290400 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x290400) {
            ctx->pc = 0x290404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290400u;
            // 0x290404: 0xae000570  sw          $zero, 0x570($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1392), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290408u;
            goto label_290408;
        }
    }
    ctx->pc = 0x290408u;
label_290408:
    // 0x290408: 0x8e020588  lw          $v0, 0x588($s0)
    ctx->pc = 0x290408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1416)));
label_29040c:
    // 0x29040c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29040Cu;
    {
        const bool branch_taken_0x29040c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29040c) {
            ctx->pc = 0x290410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29040Cu;
            // 0x290410: 0x8e02058c  lw          $v0, 0x58C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290424u;
            goto label_290424;
        }
    }
    ctx->pc = 0x290414u;
    // 0x290414: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x290414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x290418: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x290418u;
    {
        const bool branch_taken_0x290418 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x290418) {
            ctx->pc = 0x29041Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290418u;
            // 0x29041c: 0xae000588  sw          $zero, 0x588($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1416), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290420u;
            goto label_290420;
        }
    }
    ctx->pc = 0x290420u;
label_290420:
    // 0x290420: 0x8e02058c  lw          $v0, 0x58C($s0)
    ctx->pc = 0x290420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1420)));
label_290424:
    // 0x290424: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x290424u;
    {
        const bool branch_taken_0x290424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290424) {
            ctx->pc = 0x290428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290424u;
            // 0x290428: 0x8e020590  lw          $v0, 0x590($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29043Cu;
            goto label_29043c;
        }
    }
    ctx->pc = 0x29042Cu;
    // 0x29042c: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x29042cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x290430: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x290430u;
    {
        const bool branch_taken_0x290430 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x290430) {
            ctx->pc = 0x290434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290430u;
            // 0x290434: 0xae00058c  sw          $zero, 0x58C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1420), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290438u;
            goto label_290438;
        }
    }
    ctx->pc = 0x290438u;
label_290438:
    // 0x290438: 0x8e020590  lw          $v0, 0x590($s0)
    ctx->pc = 0x290438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1424)));
label_29043c:
    // 0x29043c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29043Cu;
    {
        const bool branch_taken_0x29043c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29043c) {
            ctx->pc = 0x290440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29043Cu;
            // 0x290440: 0x8e020594  lw          $v0, 0x594($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290454u;
            goto label_290454;
        }
    }
    ctx->pc = 0x290444u;
    // 0x290444: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x290444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x290448: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x290448u;
    {
        const bool branch_taken_0x290448 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x290448) {
            ctx->pc = 0x29044Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290448u;
            // 0x29044c: 0xae000590  sw          $zero, 0x590($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290450u;
            goto label_290450;
        }
    }
    ctx->pc = 0x290450u;
label_290450:
    // 0x290450: 0x8e020594  lw          $v0, 0x594($s0)
    ctx->pc = 0x290450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1428)));
label_290454:
    // 0x290454: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x290454u;
    {
        const bool branch_taken_0x290454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290454u;
        // 0x290458: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290454) {
            ctx->pc = 0x29046Cu;
            goto label_29046c;
        }
    }
    ctx->pc = 0x29045Cu;
    // 0x29045c: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x29045cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x290460: 0x4420002  bltzl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x290460u;
    {
        const bool branch_taken_0x290460 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x290460) {
            ctx->pc = 0x290464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290460u;
            // 0x290464: 0xae000594  sw          $zero, 0x594($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1428), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29046Cu;
            goto label_29046c;
        }
    }
    ctx->pc = 0x290468u;
    // 0x290468: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x290468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29046c:
    // 0x29046c: 0x260505ac  addiu       $a1, $s0, 0x5AC
    ctx->pc = 0x29046cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1452));
    // 0x290470: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x290470u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x290474: 0x26030574  addiu       $v1, $s0, 0x574
    ctx->pc = 0x290474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1396));
label_290478:
    // 0x290478: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x290478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29047c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x29047Cu;
    {
        const bool branch_taken_0x29047c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29047c) {
            ctx->pc = 0x290480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29047Cu;
            // 0x290480: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290498u;
            goto label_290498;
        }
    }
    ctx->pc = 0x290484u;
    // 0x290484: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x290484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x290488: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x290488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x29048c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29048Cu;
    {
        const bool branch_taken_0x29048c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29048c) {
            ctx->pc = 0x290490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29048Cu;
            // 0x290490: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290494u;
            goto label_290494;
        }
    }
    ctx->pc = 0x290494u;
label_290494:
    // 0x290494: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x290494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_290498:
    // 0x290498: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x290498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x29049c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x29049Cu;
    {
        const bool branch_taken_0x29049c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2904A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29049Cu;
        // 0x2904a0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29049c) {
            ctx->pc = 0x290478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290478;
        }
    }
    ctx->pc = 0x2904A4u;
    // 0x2904a4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2904a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2904a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904ac: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2904acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_2904b0:
    // 0x2904b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2904b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2904b4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2904B4u;
    {
        const bool branch_taken_0x2904b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2904b4) {
            ctx->pc = 0x2904B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2904B4u;
            // 0x2904b8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2904D0u;
            goto label_2904d0;
        }
    }
    ctx->pc = 0x2904BCu;
    // 0x2904bc: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x2904bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2904c0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2904c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2904c4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2904C4u;
    {
        const bool branch_taken_0x2904c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2904c4) {
            ctx->pc = 0x2904C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2904C4u;
            // 0x2904c8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2904CCu;
            goto label_2904cc;
        }
    }
    ctx->pc = 0x2904CCu;
label_2904cc:
    // 0x2904cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2904ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2904d0:
    // 0x2904d0: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x2904d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2904d4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2904D4u;
    {
        const bool branch_taken_0x2904d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2904D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2904D4u;
        // 0x2904d8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2904d4) {
            ctx->pc = 0x2904B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2904b0;
        }
    }
    ctx->pc = 0x2904DCu;
    // 0x2904dc: 0x920305a3  lbu         $v1, 0x5A3($s0)
    ctx->pc = 0x2904dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1443)));
    // 0x2904e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2904e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2904e4: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2904E4u;
    {
        const bool branch_taken_0x2904e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2904e4) {
            ctx->pc = 0x2904E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2904E4u;
            // 0x2904e8: 0xa20005a0  sb          $zero, 0x5A0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1440), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2904F4u;
            goto label_2904f4;
        }
    }
    ctx->pc = 0x2904ECu;
    // 0x2904ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2904ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2904f0: 0xa20205a0  sb          $v0, 0x5A0($s0)
    ctx->pc = 0x2904f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1440), (uint8_t)GPR_U32(ctx, 2));
label_2904f4:
    // 0x2904f4: 0x920305a4  lbu         $v1, 0x5A4($s0)
    ctx->pc = 0x2904f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1444)));
    // 0x2904f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2904f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2904fc: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2904FCu;
    {
        const bool branch_taken_0x2904fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2904fc) {
            ctx->pc = 0x290500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2904FCu;
            // 0x290500: 0xa20005a1  sb          $zero, 0x5A1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1441), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29050Cu;
            goto label_29050c;
        }
    }
    ctx->pc = 0x290504u;
    // 0x290504: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290508: 0xa20205a1  sb          $v0, 0x5A1($s0)
    ctx->pc = 0x290508u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1441), (uint8_t)GPR_U32(ctx, 2));
label_29050c:
    // 0x29050c: 0x920205a5  lbu         $v0, 0x5A5($s0)
    ctx->pc = 0x29050cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1445)));
    // 0x290510: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290510u;
    {
        const bool branch_taken_0x290510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290510u;
        // 0x290514: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290510) {
            ctx->pc = 0x290520u;
            goto label_290520;
        }
    }
    ctx->pc = 0x290518u;
    // 0x290518: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x290518u;
    {
        const bool branch_taken_0x290518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290518u;
        // 0x29051c: 0xa20205a2  sb          $v0, 0x5A2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1442), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290518) {
            ctx->pc = 0x290524u;
            goto label_290524;
        }
    }
    ctx->pc = 0x290520u;
label_290520:
    // 0x290520: 0xa20005a2  sb          $zero, 0x5A2($s0)
    ctx->pc = 0x290520u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1442), (uint8_t)GPR_U32(ctx, 0));
label_290524:
    // 0x290524: 0x8e020560  lw          $v0, 0x560($s0)
    ctx->pc = 0x290524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x290528: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x290528u;
    {
        const bool branch_taken_0x290528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290528) {
            ctx->pc = 0x29052Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290528u;
            // 0x29052c: 0xa20005a0  sb          $zero, 0x5A0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1440), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290540u;
            goto label_290540;
        }
    }
    ctx->pc = 0x290530u;
    // 0x290530: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x290530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x290534: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290534u;
    {
        const bool branch_taken_0x290534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290534) {
            ctx->pc = 0x290548u;
            goto label_290548;
        }
    }
    ctx->pc = 0x29053Cu;
    // 0x29053c: 0xa20005a0  sb          $zero, 0x5A0($s0)
    ctx->pc = 0x29053cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1440), (uint8_t)GPR_U32(ctx, 0));
label_290540:
    // 0x290540: 0xa20005a1  sb          $zero, 0x5A1($s0)
    ctx->pc = 0x290540u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1441), (uint8_t)GPR_U32(ctx, 0));
    // 0x290544: 0xa20005a2  sb          $zero, 0x5A2($s0)
    ctx->pc = 0x290544u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1442), (uint8_t)GPR_U32(ctx, 0));
label_290548:
    // 0x290548: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x290548u;
    SET_GPR_U32(ctx, 31, 0x290550u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x290548u, 0x290550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290550u;
label_290550:
    // 0x290550: 0xc0497ce  jal         func_125F38
    ctx->pc = 0x290550u;
    SET_GPR_U32(ctx, 31, 0x290558u);
    ctx->pc = 0x290554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290550u;
    // 0x290554: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125F38u, 0x290550u, 0x290558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290558u;
label_290558:
    // 0x290558: 0x8e110500  lw          $s1, 0x500($s0)
    ctx->pc = 0x290558u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x29055c: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x29055Cu;
    {
        const bool branch_taken_0x29055c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x290560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29055Cu;
        // 0x290560: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29055c) {
            ctx->pc = 0x29059Cu;
            goto label_29059c;
        }
    }
    ctx->pc = 0x290564u;
    // 0x290564: 0x245274a0  addiu       $s2, $v0, 0x74A0
    ctx->pc = 0x290564u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x290568: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x290568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x29056c: 0x0  nop
    ctx->pc = 0x29056cu;
    // NOP
label_290570:
    // 0x290570: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x290570u;
    {
        const bool branch_taken_0x290570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290570u;
        // 0x290574: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290570) {
            ctx->pc = 0x290590u;
            goto label_290590;
        }
    }
    ctx->pc = 0x290578u;
    // 0x290578: 0xc6010548  lwc1        $f1, 0x548($s0)
    ctx->pc = 0x290578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29057c: 0xc6400574  lwc1        $f0, 0x574($s2)
    ctx->pc = 0x29057cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290580: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x290580u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x290584: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x290584u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x290588: 0xc0560a2  jal         func_158288
    ctx->pc = 0x290588u;
    SET_GPR_U32(ctx, 31, 0x290590u);
    ctx->pc = 0x29058Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290588u;
    // 0x29058c: 0xe44105a8  swc1        $f1, 0x5A8($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x290588u, 0x290590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290590u;
label_290590:
    // 0x290590: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x290590u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x290594: 0x5620fff6  bnel        $s1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x290594u;
    {
        const bool branch_taken_0x290594 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x290594) {
            ctx->pc = 0x290598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290594u;
            // 0x290598: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290570;
        }
    }
    ctx->pc = 0x29059Cu;
label_29059c:
    // 0x29059c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29059cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2905a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2905a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2905a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2905a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2905a8: 0xc0a4752  jal         func_291D48
    ctx->pc = 0x2905A8u;
    SET_GPR_U32(ctx, 31, 0x2905B0u);
    ctx->pc = 0x2905ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2905A8u;
    // 0x2905ac: 0xe6000548  swc1        $f0, 0x548($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1352), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D48u, 0x2905A8u, 0x2905B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2905B0u;
label_2905b0:
    // 0x2905b0: 0xc0a4bda  jal         func_292F68
    ctx->pc = 0x2905B0u;
    SET_GPR_U32(ctx, 31, 0x2905B8u);
    ctx->pc = 0x2905B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2905B0u;
    // 0x2905b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F68u, 0x2905B0u, 0x2905B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2905B8u;
label_2905b8:
    // 0x2905b8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2905b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2905bc:
    // 0x2905bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2905bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2905c0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2905c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2905c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2905c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2905c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2905C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2905CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2905C8u;
        // 0x2905cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2905C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2905D0u;
}
