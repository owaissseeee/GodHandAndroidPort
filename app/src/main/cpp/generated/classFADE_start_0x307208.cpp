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

// Function: classFADE_start
// Address: 0x307208 - 0x307388
void classFADE_start_0x307208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("classFADE_start_0x307208");
#endif

    switch (ctx->pc) {
        case 0x307358u: goto label_307358;
        default: break;
    }

    ctx->pc = 0x307208u;

    // 0x307208: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x307208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30720c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x30720cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x307210: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x307210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x307214: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x307214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x307218: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x307218u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30721c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30721cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307220: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x307220u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
    // 0x307224: 0xafc60004  sw          $a2, 0x4($fp)
    ctx->pc = 0x307224u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 6));
    // 0x307228: 0xafc70008  sw          $a3, 0x8($fp)
    ctx->pc = 0x307228u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 7));
    // 0x30722c: 0xafc8000c  sw          $t0, 0xC($fp)
    ctx->pc = 0x30722cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 8));
    // 0x307230: 0xafc90010  sw          $t1, 0x10($fp)
    ctx->pc = 0x307230u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 9));
    // 0x307234: 0xafca0014  sw          $t2, 0x14($fp)
    ctx->pc = 0x307234u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 10));
    // 0x307238: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x307238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x30723c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x30723cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x307240: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x307240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x307244: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x307244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x307248: 0x93c20000  lbu         $v0, 0x0($fp)
    ctx->pc = 0x307248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x30724c: 0xa202001d  sb          $v0, 0x1D($s0)
    ctx->pc = 0x30724cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 2));
    // 0x307250: 0x93c20004  lbu         $v0, 0x4($fp)
    ctx->pc = 0x307250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x307254: 0x34430001  ori         $v1, $v0, 0x1
    ctx->pc = 0x307254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x307258: 0xa203001c  sb          $v1, 0x1C($s0)
    ctx->pc = 0x307258u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 3));
    // 0x30725c: 0x97c20014  lhu         $v0, 0x14($fp)
    ctx->pc = 0x30725cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x307260: 0xa6020018  sh          $v0, 0x18($s0)
    ctx->pc = 0x307260u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x307264: 0x96020018  lhu         $v0, 0x18($s0)
    ctx->pc = 0x307264u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x307268: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x307268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x30726c: 0x8c637a04  lw          $v1, 0x7A04($v1)
    ctx->pc = 0x30726cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A04u));
    // 0x307270: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x307270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x307274: 0xa6020018  sh          $v0, 0x18($s0)
    ctx->pc = 0x307274u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x307278: 0xa600001a  sh          $zero, 0x1A($s0)
    ctx->pc = 0x307278u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x30727c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x30727cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x307280: 0x8c421180  lw          $v0, 0x1180($v0)
    ctx->pc = 0x307280u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C1180u));
    // 0x307284: 0x21fc3  sra         $v1, $v0, 31
    ctx->pc = 0x307284u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 31));
    // 0x307288: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x307288u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x30728c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x30728cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x307290: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x307290u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x307294: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x307294u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307298: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x307298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30729c: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x30729cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3072a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3072a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3072a4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x3072a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3072a8: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x3072a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x3072ac: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3072acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x3072b0: 0x94426b80  lhu         $v0, 0x6B80($v0)
    ctx->pc = 0x3072b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x586B80u));
    // 0x3072b4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3072b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3072b8: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x3072b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x3072bc: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x3072bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x3072c0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x3072c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x3072c4: 0x24021c00  addiu       $v0, $zero, 0x1C00
    ctx->pc = 0x3072c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7168));
    // 0x3072c8: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x3072c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3072cc: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3072ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3072d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3072d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3072d4: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3072D4u;
    {
        const bool branch_taken_0x3072d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3072d4) {
            ctx->pc = 0x307314u;
            goto label_307314;
        }
    }
    ctx->pc = 0x3072DCu;
    // 0x3072dc: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x3072dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3072e0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3072E0u;
    {
        const bool branch_taken_0x3072e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3072e0) {
            ctx->pc = 0x3072FCu;
            goto label_3072fc;
        }
    }
    ctx->pc = 0x3072E8u;
    // 0x3072e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3072e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3072ec: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3072ECu;
    {
        const bool branch_taken_0x3072ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3072ec) {
            ctx->pc = 0x30732Cu;
            goto label_30732c;
        }
    }
    ctx->pc = 0x3072F4u;
    // 0x3072f4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3072F4u;
    {
        const bool branch_taken_0x3072f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3072f4) {
            ctx->pc = 0x307344u;
            goto label_307344;
        }
    }
    ctx->pc = 0x3072FCu;
label_3072fc:
    // 0x3072fc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x3072fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x307300: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x307300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x307304: 0x34420044  ori         $v0, $v0, 0x44
    ctx->pc = 0x307304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)68);
    // 0x307308: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x307308u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x30730c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x30730Cu;
    {
        const bool branch_taken_0x30730c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30730c) {
            ctx->pc = 0x307344u;
            goto label_307344;
        }
    }
    ctx->pc = 0x307314u;
label_307314:
    // 0x307314: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x307314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x307318: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x307318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x30731c: 0x34420029  ori         $v0, $v0, 0x29
    ctx->pc = 0x30731cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41);
    // 0x307320: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x307320u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x307324: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x307324u;
    {
        const bool branch_taken_0x307324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307324) {
            ctx->pc = 0x307344u;
            goto label_307344;
        }
    }
    ctx->pc = 0x30732Cu;
label_30732c:
    // 0x30732c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x30732cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x307330: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x307330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x307334: 0x344200a1  ori         $v0, $v0, 0xA1
    ctx->pc = 0x307334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)161);
    // 0x307338: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x307338u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x30733c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x30733Cu;
    {
        const bool branch_taken_0x30733c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30733c) {
            ctx->pc = 0x307344u;
            goto label_307344;
        }
    }
    ctx->pc = 0x307344u;
label_307344:
    // 0x307344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307348: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x307348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30734c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x30734cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307350: 0xc0c1dd8  jal         func_307760
    ctx->pc = 0x307350u;
    SET_GPR_U32(ctx, 31, 0x307358u);
    ctx->pc = 0x307760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307760u, 0x307350u, 0x307358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307358u;
label_307358:
    // 0x307358: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307358u;
    {
        const bool branch_taken_0x307358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307358) {
            ctx->pc = 0x307368u;
            goto label_307368;
        }
    }
    ctx->pc = 0x307360u;
    // 0x307360: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x307360u;
    {
        const bool branch_taken_0x307360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307360) {
            ctx->pc = 0x307368u;
            goto label_307368;
        }
    }
    ctx->pc = 0x307368u;
label_307368:
    // 0x307368: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x307368u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30736c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x30736cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x307370: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x307370u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x307374: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x307374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x307378: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x307378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30737c: 0x3e00008  jr          $ra
    ctx->pc = 0x30737Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30737Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307384u;
    // 0x307384: 0x0  nop
    ctx->pc = 0x307384u;
    // NOP
    ctx->pc = 0x307388u;
}
