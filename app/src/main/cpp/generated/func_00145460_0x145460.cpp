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

// Function: func_00145460
// Address: 0x145460 - 0x145810
void func_00145460_0x145460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00145460_0x145460");
#endif

    switch (ctx->pc) {
        case 0x1454f0u: goto label_1454f0;
        case 0x1455d8u: goto label_1455d8;
        case 0x1456c0u: goto label_1456c0;
        case 0x1456ccu: goto label_1456cc;
        case 0x145718u: goto label_145718;
        case 0x1457a0u: goto label_1457a0;
        default: break;
    }

    ctx->pc = 0x145460u;

    // 0x145460: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x145460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x145464: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145468: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x145468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x14546c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x14546cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x145470: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145474: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x145474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x145478: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x145478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x14547c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14547cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x145480: 0x86030420  lh          $v1, 0x420($s0)
    ctx->pc = 0x145480u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1056)));
    // 0x145484: 0x96040420  lhu         $a0, 0x420($s0)
    ctx->pc = 0x145484u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1056)));
    // 0x145488: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x145488u;
    {
        const bool branch_taken_0x145488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145488u;
        // 0x14548c: 0x96080422  lhu         $t0, 0x422($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1058)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145488) {
            ctx->pc = 0x14557Cu;
            goto label_14557c;
        }
    }
    ctx->pc = 0x145490u;
    // 0x145490: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x145490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x145494: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x145494u;
    {
        const bool branch_taken_0x145494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145494) {
            ctx->pc = 0x145498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145494u;
            // 0x145498: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1454ACu;
            goto label_1454ac;
        }
    }
    ctx->pc = 0x14549Cu;
    // 0x14549c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14549Cu;
    {
        const bool branch_taken_0x14549c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1454A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14549Cu;
        // 0x1454a0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14549c) {
            ctx->pc = 0x1454C4u;
            goto label_1454c4;
        }
    }
    ctx->pc = 0x1454A4u;
    // 0x1454a4: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x1454A4u;
    {
        const bool branch_taken_0x1454a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1454A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1454A4u;
        // 0x1454a8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1454a4) {
            ctx->pc = 0x1457F8u;
            goto label_1457f8;
        }
    }
    ctx->pc = 0x1454ACu;
label_1454ac:
    // 0x1454ac: 0x1062008e  beq         $v1, $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x1454ACu;
    {
        const bool branch_taken_0x1454ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1454B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1454ACu;
        // 0x1454b0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1454ac) {
            ctx->pc = 0x1456E8u;
            goto label_1456e8;
        }
    }
    ctx->pc = 0x1454B4u;
    // 0x1454b4: 0x106200b3  beq         $v1, $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x1454B4u;
    {
        const bool branch_taken_0x1454b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1454B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1454B4u;
        // 0x1454b8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1454b4) {
            ctx->pc = 0x145784u;
            goto label_145784;
        }
    }
    ctx->pc = 0x1454BCu;
    // 0x1454bc: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x1454BCu;
    {
        const bool branch_taken_0x1454bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1454C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1454BCu;
        // 0x1454c0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1454bc) {
            ctx->pc = 0x1457F8u;
            goto label_1457f8;
        }
    }
    ctx->pc = 0x1454C4u;
label_1454c4:
    // 0x1454c4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1454c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1454c8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1454c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1454cc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1454ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1454d0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1454d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1454d4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1454d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1454d8: 0x2446e880  addiu       $a2, $v0, -0x1780
    ctx->pc = 0x1454d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x1454dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1454dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1454e0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1454e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1454e4: 0x26070094  addiu       $a3, $s0, 0x94
    ctx->pc = 0x1454e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    // 0x1454e8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1454e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1454ec: 0x0  nop
    ctx->pc = 0x1454ecu;
    // NOP
label_1454f0:
    // 0x1454f0: 0x2251818  mult        $v1, $s1, $a1
    ctx->pc = 0x1454f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1454f4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1454f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1454f8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1454f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1454fc: 0x46051843  div.s       $f1, $f3, $f5
    ctx->pc = 0x1454fcu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[3], ctx->f[5]);
    // 0x145500: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x145500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x145504: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x145504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x145508: 0x46041881  sub.s       $f2, $f3, $f4
    ctx->pc = 0x145508u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x14550c: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x14550cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145510: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x145510u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x145514: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x145514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x145518: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x145518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14551c: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x14551cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145520: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x145520u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x145524: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x145524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x145528: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x145528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14552c: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x14552cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145530: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x145530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145534: 0x0  nop
    ctx->pc = 0x145534u;
    // NOP
    // 0x145538: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x145538u;
    {
        const bool branch_taken_0x145538 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x145538) {
            ctx->pc = 0x14553Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145538u;
            // 0x14553c: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145564u;
            goto label_145564;
        }
    }
    ctx->pc = 0x145540u;
    // 0x145540: 0xe4430040  swc1        $f3, 0x40($v0)
    ctx->pc = 0x145540u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x145544: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x145544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x145548: 0xe4430044  swc1        $f3, 0x44($v0)
    ctx->pc = 0x145548u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x14554c: 0x86020420  lh          $v0, 0x420($s0)
    ctx->pc = 0x14554cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1056)));
    // 0x145550: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145550u;
    {
        const bool branch_taken_0x145550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145550u;
        // 0x145554: 0x96030420  lhu         $v1, 0x420($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145550) {
            ctx->pc = 0x145560u;
            goto label_145560;
        }
    }
    ctx->pc = 0x145558u;
    // 0x145558: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x145558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14555c: 0xa6020420  sh          $v0, 0x420($s0)
    ctx->pc = 0x14555cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1056), (uint16_t)GPR_U32(ctx, 2));
label_145560:
    // 0x145560: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x145560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_145564:
    // 0x145564: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x145564u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x145568: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x145568u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x14556c: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x14556Cu;
    {
        const bool branch_taken_0x14556c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x145570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14556Cu;
        // 0x145570: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14556c) {
            ctx->pc = 0x1454F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1454f0;
        }
    }
    ctx->pc = 0x145574u;
    // 0x145574: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x145574u;
    {
        const bool branch_taken_0x145574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145574u;
        // 0x145578: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145574) {
            ctx->pc = 0x1457F8u;
            goto label_1457f8;
        }
    }
    ctx->pc = 0x14557Cu;
label_14557c:
    // 0x14557c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x14557cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x145580: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x145580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x145584: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x145584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145588: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x145588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x14558c: 0xa6020420  sh          $v0, 0x420($s0)
    ctx->pc = 0x14558cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1056), (uint16_t)GPR_U32(ctx, 2));
    // 0x145590: 0x3c0cf7ff  lui         $t4, 0xF7FF
    ctx->pc = 0x145590u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)63487 << 16));
    // 0x145594: 0x3c0b0030  lui         $t3, 0x30
    ctx->pc = 0x145594u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)48 << 16));
    // 0x145598: 0x3c0a0080  lui         $t2, 0x80
    ctx->pc = 0x145598u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)128 << 16));
    // 0x14559c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14559cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1455a0: 0xc464e840  lwc1        $f4, -0x17C0($v1)
    ctx->pc = 0x1455a0u;
    { uint32_t bits = FAST_READ32(0x41E840u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1455a4: 0x246de840  addiu       $t5, $v1, -0x17C0
    ctx->pc = 0x1455a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961216));
    // 0x1455a8: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x1455a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x1455ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1455acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1455b0: 0x2453e880  addiu       $s3, $v0, -0x1780
    ctx->pc = 0x1455b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x1455b4: 0x240f0014  addiu       $t7, $zero, 0x14
    ctx->pc = 0x1455b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1455b8: 0x26090098  addiu       $t1, $s0, 0x98
    ctx->pc = 0x1455b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
    // 0x1455bc: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x1455bcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x1455c0: 0x261902a8  addiu       $t9, $s0, 0x2A8
    ctx->pc = 0x1455c0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), 680));
    // 0x1455c4: 0x261803fa  addiu       $t8, $s0, 0x3FA
    ctx->pc = 0x1455c4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 16), 1018));
    // 0x1455c8: 0x3c0eff00  lui         $t6, 0xFF00
    ctx->pc = 0x1455c8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)65280 << 16));
    // 0x1455cc: 0x356b3030  ori         $t3, $t3, 0x3030
    ctx->pc = 0x1455ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)12336);
    // 0x1455d0: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x1455d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x1455d4: 0x26120094  addiu       $s2, $s0, 0x94
    ctx->pc = 0x1455d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
label_1455d8:
    // 0x1455d8: 0x22f1018  mult        $v0, $s1, $t7
    ctx->pc = 0x1455d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1455dc: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x1455dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1455e0: 0x3252821  addu        $a1, $t9, $a1
    ctx->pc = 0x1455e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x1455e4: 0x3083021  addu        $a2, $t8, $t0
    ctx->pc = 0x1455e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 8)));
    // 0x1455e8: 0x493821  addu        $a3, $v0, $t1
    ctx->pc = 0x1455e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1455ec: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1455ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1455f0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1455f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1455f4: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x1455f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x1455f8: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x1455f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x1455fc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1455fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x145600: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x145600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x145604: 0xac640024  sw          $a0, 0x24($v1)
    ctx->pc = 0x145604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 4));
    // 0x145608: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x145608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14560c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14560cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x145610: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x145610u;
    {
        const bool branch_taken_0x145610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145610u;
        // 0x145614: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145610) {
            ctx->pc = 0x145628u;
            goto label_145628;
        }
    }
    ctx->pc = 0x145618u;
    // 0x145618: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x145618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x14561c: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x14561cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x145620: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x145620u;
    {
        const bool branch_taken_0x145620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145620u;
        // 0x145624: 0x4b1025  or          $v0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145620) {
            ctx->pc = 0x145634u;
            goto label_145634;
        }
    }
    ctx->pc = 0x145628u;
label_145628:
    // 0x145628: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x145628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x14562c: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x14562cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x145630: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x145630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_145634:
    // 0x145634: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x145634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x145638: 0x22f2818  mult        $a1, $s1, $t7
    ctx->pc = 0x145638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x14563c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x14563cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x145640: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x145640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x145644: 0xc5a10004  lwc1        $f1, 0x4($t5)
    ctx->pc = 0x145644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145648: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x145648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14564c: 0x25060001  addiu       $a2, $t0, 0x1
    ctx->pc = 0x14564cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x145650: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x145650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x145654: 0xc5a20008  lwc1        $f2, 0x8($t5)
    ctx->pc = 0x145654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x145658: 0x1252021  addu        $a0, $t1, $a1
    ctx->pc = 0x145658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x14565c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x14565cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x145660: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x145660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x145664: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x145664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x145668: 0xc5a3000c  lwc1        $f3, 0xC($t5)
    ctx->pc = 0x145668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14566c: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x14566cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x145670: 0xe4640070  swc1        $f4, 0x70($v1)
    ctx->pc = 0x145670u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x145674: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x145674u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145678: 0x2e270005  sltiu       $a3, $s1, 0x5
    ctx->pc = 0x145678u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x14567c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14567cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x145680: 0xe4410074  swc1        $f1, 0x74($v0)
    ctx->pc = 0x145680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x145684: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x145684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x145688: 0xe4620078  swc1        $f2, 0x78($v1)
    ctx->pc = 0x145688u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x14568c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14568cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x145690: 0xe443007c  swc1        $f3, 0x7C($v0)
    ctx->pc = 0x145690u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x145694: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x145694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x145698: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x145698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x14569c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x14569cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1456a0: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x1456a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x1456a4: 0x860203b2  lh          $v0, 0x3B2($s0)
    ctx->pc = 0x1456a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 946)));
    // 0x1456a8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1456a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1456ac: 0x14e0ffca  bnez        $a3, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1456ACu;
    {
        const bool branch_taken_0x1456ac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1456B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1456ACu;
        // 0x1456b0: 0xc2400b  movn        $t0, $a2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1456ac) {
            ctx->pc = 0x1455D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1455d8;
        }
    }
    ctx->pc = 0x1456B4u;
    // 0x1456b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1456b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1456b8: 0x24120050  addiu       $s2, $zero, 0x50
    ctx->pc = 0x1456b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1456bc: 0x2322018  mult        $a0, $s1, $s2
    ctx->pc = 0x1456bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1456c0:
    // 0x1456c0: 0x24840100  addiu       $a0, $a0, 0x100
    ctx->pc = 0x1456c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x1456c4: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x1456C4u;
    SET_GPR_U32(ctx, 31, 0x1456CCu);
    ctx->pc = 0x1456C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1456C4u;
    // 0x1456c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x1456C4u, 0x1456CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1456CCu;
label_1456cc:
    // 0x1456cc: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1456ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1456d0: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1456d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1456d4: 0x2e230005  sltiu       $v1, $s1, 0x5
    ctx->pc = 0x1456d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1456d8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1456D8u;
    {
        const bool branch_taken_0x1456d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1456DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1456D8u;
        // 0x1456dc: 0x2322018  mult        $a0, $s1, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1456d8) {
            ctx->pc = 0x1456C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1456c0;
        }
    }
    ctx->pc = 0x1456E0u;
    // 0x1456e0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1456E0u;
    {
        const bool branch_taken_0x1456e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1456E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1456E0u;
        // 0x1456e4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1456e0) {
            ctx->pc = 0x1457F8u;
            goto label_1457f8;
        }
    }
    ctx->pc = 0x1456E8u;
label_1456e8:
    // 0x1456e8: 0xc6000338  lwc1        $f0, 0x338($s0)
    ctx->pc = 0x1456e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1456ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1456ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1456f0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1456f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1456f4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1456f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1456f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1456f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1456fc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1456fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x145700: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x145700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x145704: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x145704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x145708: 0x26060098  addiu       $a2, $s0, 0x98
    ctx->pc = 0x145708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
    // 0x14570c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14570cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x145710: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x145710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x145714: 0x0  nop
    ctx->pc = 0x145714u;
    // NOP
label_145718:
    // 0x145718: 0x2251018  mult        $v0, $s1, $a1
    ctx->pc = 0x145718u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x14571c: 0xc6010338  lwc1        $f1, 0x338($s0)
    ctx->pc = 0x14571cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145720: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x145720u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x145724: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x145724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x145728: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x145728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14572c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x14572cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x145730: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x145730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x145734: 0x2e240005  sltiu       $a0, $s1, 0x5
    ctx->pc = 0x145734u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x145738: 0xe4410044  swc1        $f1, 0x44($v0)
    ctx->pc = 0x145738u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x14573c: 0xc6000338  lwc1        $f0, 0x338($s0)
    ctx->pc = 0x14573cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145740: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x145740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x145744: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x145744u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x145748: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x145748u;
    {
        const bool branch_taken_0x145748 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145748u;
        // 0x14574c: 0xe4400040  swc1        $f0, 0x40($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x145748) {
            ctx->pc = 0x145718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145718;
        }
    }
    ctx->pc = 0x145750u;
    // 0x145750: 0xc6010338  lwc1        $f1, 0x338($s0)
    ctx->pc = 0x145750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145754: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x145754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x145758: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x145758u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x14575c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14575cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145760: 0x0  nop
    ctx->pc = 0x145760u;
    // NOP
    // 0x145764: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x145764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145768: 0x0  nop
    ctx->pc = 0x145768u;
    // NOP
    // 0x14576c: 0x45020022  bc1fl       . + 4 + (0x22 << 2)
    ctx->pc = 0x14576Cu;
    {
        const bool branch_taken_0x14576c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14576c) {
            ctx->pc = 0x145770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14576Cu;
            // 0x145770: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1457F8u;
            goto label_1457f8;
        }
    }
    ctx->pc = 0x145774u;
    // 0x145774: 0x96020420  lhu         $v0, 0x420($s0)
    ctx->pc = 0x145774u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1056)));
    // 0x145778: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x145778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14577c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x14577Cu;
    {
        const bool branch_taken_0x14577c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14577Cu;
        // 0x145780: 0xa6020420  sh          $v0, 0x420($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14577c) {
            ctx->pc = 0x1457F4u;
            goto label_1457f4;
        }
    }
    ctx->pc = 0x145784u;
label_145784:
    // 0x145784: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x145784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x145788: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x145788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14578c: 0x244ae880  addiu       $t2, $v0, -0x1780
    ctx->pc = 0x14578cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x145790: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x145790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145794: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x145794u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x145798: 0x26080098  addiu       $t0, $s0, 0x98
    ctx->pc = 0x145798u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
    // 0x14579c: 0x26070094  addiu       $a3, $s0, 0x94
    ctx->pc = 0x14579cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
label_1457a0:
    // 0x1457a0: 0x2292818  mult        $a1, $s1, $t1
    ctx->pc = 0x1457a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1457a4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1457a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1457a8: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1457a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1457ac: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1457acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1457b0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1457b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1457b4: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x1457b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1457b8: 0x2e260005  sltiu       $a2, $s1, 0x5
    ctx->pc = 0x1457b8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1457bc: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x1457bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1457c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1457c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1457c4: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x1457c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1457c8: 0xe4410044  swc1        $f1, 0x44($v0)
    ctx->pc = 0x1457c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x1457cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1457ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1457d0: 0xe4610040  swc1        $f1, 0x40($v1)
    ctx->pc = 0x1457d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x1457d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1457d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1457d8: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x1457d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x1457dc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1457dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1457e0: 0x14c0ffef  bnez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1457E0u;
    {
        const bool branch_taken_0x1457e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1457E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1457E0u;
        // 0x1457e4: 0xe4600044  swc1        $f0, 0x44($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1457e0) {
            ctx->pc = 0x1457A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1457a0;
        }
    }
    ctx->pc = 0x1457E8u;
    // 0x1457e8: 0x9602041e  lhu         $v0, 0x41E($s0)
    ctx->pc = 0x1457e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1054)));
    // 0x1457ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1457ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1457f0: 0xa602041e  sh          $v0, 0x41E($s0)
    ctx->pc = 0x1457f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1054), (uint16_t)GPR_U32(ctx, 2));
label_1457f4:
    // 0x1457f4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1457f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1457f8:
    // 0x1457f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1457f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1457fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1457fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145800: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x145800u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145808: 0x3e00008  jr          $ra
    ctx->pc = 0x145808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145808u;
        // 0x14580c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145810u;
}
