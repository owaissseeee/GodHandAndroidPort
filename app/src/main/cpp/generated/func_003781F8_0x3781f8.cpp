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

// Function: func_003781F8
// Address: 0x3781f8 - 0x378398
void func_003781F8_0x3781f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003781F8_0x3781f8");
#endif

    switch (ctx->pc) {
        case 0x378250u: goto label_378250;
        case 0x3782c0u: goto label_3782c0;
        default: break;
    }

    ctx->pc = 0x3781f8u;

    // 0x3781f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3781f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3781fc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3781fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x378200: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x378200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x378204: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x378204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x378208: 0x49403  sra         $s2, $a0, 16
    ctx->pc = 0x378208u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 4), 16));
    // 0x37820c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x37820cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x378210: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x378210u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378214: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x378214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x378218: 0x6400036  bltz        $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x378218u;
    {
        const bool branch_taken_0x378218 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x37821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378218u;
        // 0x37821c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378218) {
            ctx->pc = 0x3782F4u;
            goto label_3782f4;
        }
    }
    ctx->pc = 0x378220u;
    // 0x378220: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x378220u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x378224: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x378224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x378228: 0x2442df10  addiu       $v0, $v0, -0x20F0
    ctx->pc = 0x378228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958864));
    // 0x37822c: 0x80a4001e  lb          $a0, 0x1E($a1)
    ctx->pc = 0x37822cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x378230: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x378230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x378234: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x378234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x378238: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x378238u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x37823c: 0x8c700010  lw          $s0, 0x10($v1)
    ctx->pc = 0x37823cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x378240: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x378240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x378244: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x378244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x378248: 0xc0dd5bc  jal         func_3756F0
    ctx->pc = 0x378248u;
    SET_GPR_U32(ctx, 31, 0x378250u);
    ctx->pc = 0x37824Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378248u;
    // 0x37824c: 0x448821  addu        $s1, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3756F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3756F0u, 0x378248u, 0x378250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378250u;
label_378250:
    // 0x378250: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x378250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x378254: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x378254u;
    {
        const bool branch_taken_0x378254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x378254) {
            ctx->pc = 0x378258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378254u;
            // 0x378258: 0x82230000  lb          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378260u;
            goto label_378260;
        }
    }
    ctx->pc = 0x37825Cu;
    // 0x37825c: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x37825cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_378260:
    // 0x378260: 0x4630004  bgezl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x378260u;
    {
        const bool branch_taken_0x378260 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x378260) {
            ctx->pc = 0x378264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378260u;
            // 0x378264: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378274u;
            goto label_378274;
        }
    }
    ctx->pc = 0x378268u;
    // 0x378268: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x378268u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x37826c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x37826Cu;
    {
        const bool branch_taken_0x37826c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37826Cu;
        // 0x378270: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37826c) {
            ctx->pc = 0x37837Cu;
            goto label_37837c;
        }
    }
    ctx->pc = 0x378274u;
label_378274:
    // 0x378274: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x378274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x378278: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x378278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x37827c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37827cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x378280: 0x94460006  lhu         $a2, 0x6($v0)
    ctx->pc = 0x378280u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x378284: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x378284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x378288: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x378288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x37828c: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x37828cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x378290: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x378290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x378294: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x378294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x378298: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x378298u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x37829c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x37829cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3782a0: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x3782A0u;
    {
        const bool branch_taken_0x3782a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3782a0) {
            ctx->pc = 0x3782A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3782A0u;
            // 0x3782a4: 0x94e20002  lhu         $v0, 0x2($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378374u;
            goto label_378374;
        }
    }
    ctx->pc = 0x3782A8u;
    // 0x3782a8: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x3782A8u;
    {
        const bool branch_taken_0x3782a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3782ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3782A8u;
        // 0x3782ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3782a8) {
            ctx->pc = 0x3782F4u;
            goto label_3782f4;
        }
    }
    ctx->pc = 0x3782B0u;
    // 0x3782b0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x3782b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3782b4: 0x3c090001  lui         $t1, 0x1
    ctx->pc = 0x3782b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
    // 0x3782b8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3782b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3782bc: 0x3c0a0001  lui         $t2, 0x1
    ctx->pc = 0x3782bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1 << 16));
label_3782c0:
    // 0x3782c0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3782c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3782c4: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x3782c4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3782c8: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x3782c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3782cc: 0x12460028  beq         $s2, $a2, . + 4 + (0x28 << 2)
    ctx->pc = 0x3782CCu;
    {
        const bool branch_taken_0x3782cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 6));
        ctx->pc = 0x3782D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3782CCu;
        // 0x3782d0: 0x95040000  lhu         $a0, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3782cc) {
            ctx->pc = 0x378370u;
            goto label_378370;
        }
    }
    ctx->pc = 0x3782D4u;
    // 0x3782d4: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x3782d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3782d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3782D8u;
    {
        const bool branch_taken_0x3782d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3782DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3782D8u;
        // 0x3782dc: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3782d8) {
            ctx->pc = 0x378300u;
            goto label_378300;
        }
    }
    ctx->pc = 0x3782E0u;
    // 0x3782e0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3782e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3782e4: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x3782e4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x3782e8: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x3782e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3782ec: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3782ECu;
    {
        const bool branch_taken_0x3782ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3782F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3782ECu;
        // 0x3782f0: 0x12a4821  addu        $t1, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3782ec) {
            ctx->pc = 0x3782C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3782c0;
        }
    }
    ctx->pc = 0x3782F4u;
label_3782f4:
    // 0x3782f4: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x3782f4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3782f8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3782F8u;
    {
        const bool branch_taken_0x3782f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3782FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3782F8u;
        // 0x3782fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3782f8) {
            ctx->pc = 0x37837Cu;
            goto label_37837c;
        }
    }
    ctx->pc = 0x378300u;
label_378300:
    // 0x378300: 0x94e3fffc  lhu         $v1, -0x4($a3)
    ctx->pc = 0x378300u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294967292)));
    // 0x378304: 0x94e5fffe  lhu         $a1, -0x2($a3)
    ctx->pc = 0x378304u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294967294)));
    // 0x378308: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x378308u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x37830c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x37830cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x378310: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x378310u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x378314: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x378314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x378318: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x378318u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x37831c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x37831cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x378320: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x378320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x378324: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x378324u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x378328: 0x0  nop
    ctx->pc = 0x378328u;
    // NOP
    // 0x37832c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x37832cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x378330: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x378330u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x378334: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x378334u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x378338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x378338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37833c: 0x0  nop
    ctx->pc = 0x37833cu;
    // NOP
    // 0x378340: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x378340u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x378344: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x378344u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x378348: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x378348u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37834c: 0x0  nop
    ctx->pc = 0x37834cu;
    // NOP
    // 0x378350: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x378350u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x378354: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x378354u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x378358: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x378358u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37835c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37835cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x378360: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x378360u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x378364: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x378364u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x378368: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x378368u;
    {
        const bool branch_taken_0x378368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378368u;
        // 0x37836c: 0xa6650000  sh          $a1, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378368) {
            ctx->pc = 0x378378u;
            goto label_378378;
        }
    }
    ctx->pc = 0x378370u;
label_378370:
    // 0x378370: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x378370u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_378374:
    // 0x378374: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x378374u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
label_378378:
    // 0x378378: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x378378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37837c:
    // 0x37837c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x37837cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x378380: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x378380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x378384: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x378384u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x378388: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x378388u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37838c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37838cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378390: 0x3e00008  jr          $ra
    ctx->pc = 0x378390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378390u;
        // 0x378394: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378398u;
}
