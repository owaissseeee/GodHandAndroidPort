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

// Function: func_0030DAD8
// Address: 0x30dad8 - 0x30e538
void func_0030DAD8_0x30dad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030DAD8_0x30dad8");
#endif

    switch (ctx->pc) {
        case 0x30db0cu: goto label_30db0c;
        case 0x30dcf8u: goto label_30dcf8;
        case 0x30e030u: goto label_30e030;
        case 0x30e220u: goto label_30e220;
        case 0x30e3b8u: goto label_30e3b8;
        case 0x30e504u: goto label_30e504;
        default: break;
    }

    ctx->pc = 0x30dad8u;

    // 0x30dad8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x30dad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x30dadc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x30dadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x30dae0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x30dae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x30dae4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x30dae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x30dae8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x30dae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x30daec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x30daecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x30daf0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x30daf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x30daf4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x30daf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x30daf8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x30daf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x30dafc: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x30dafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x30db00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30db00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30db04: 0xc056c3c  jal         func_15B0F0
    ctx->pc = 0x30DB04u;
    SET_GPR_U32(ctx, 31, 0x30DB0Cu);
    ctx->pc = 0x30DB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DB04u;
    // 0x30db08: 0x24040a10  addiu       $a0, $zero, 0xA10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0F0u, 0x30DB04u, 0x30DB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DB0Cu;
label_30db0c:
    // 0x30db0c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x30db0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30db10: 0x1260027c  beqz        $s3, . + 4 + (0x27C << 2)
    ctx->pc = 0x30DB10u;
    {
        const bool branch_taken_0x30db10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DB10u;
        // 0x30db14: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30db10) {
            ctx->pc = 0x30E504u;
            goto label_30e504;
        }
    }
    ctx->pc = 0x30DB18u;
    // 0x30db18: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x30db18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x30db1c: 0x344200a0  ori         $v0, $v0, 0xA0
    ctx->pc = 0x30db1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)160);
    // 0x30db20: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x30db20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x30db24: 0x31df8  dsll        $v1, $v1, 23
    ctx->pc = 0x30db24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 23);
    // 0x30db28: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x30db28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x30db2c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x30db2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x30db30: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x30db30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30db34: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x30db34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x30db38: 0x3484809f  ori         $a0, $a0, 0x809F
    ctx->pc = 0x30db38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32927);
    // 0x30db3c: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x30db3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x30db40: 0x24070048  addiu       $a3, $zero, 0x48
    ctx->pc = 0x30db40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x30db44: 0x24080356  addiu       $t0, $zero, 0x356
    ctx->pc = 0x30db44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x30db48: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x30db48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x30db4c: 0x240a003f  addiu       $t2, $zero, 0x3F
    ctx->pc = 0x30db4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30db50: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x30db50u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
    // 0x30db54: 0xfe640010  sd          $a0, 0x10($s3)
    ctx->pc = 0x30db54u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 4));
    // 0x30db58: 0x3c0b003c  lui         $t3, 0x3C
    ctx->pc = 0x30db58u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)60 << 16));
    // 0x30db5c: 0xfe660020  sd          $a2, 0x20($s3)
    ctx->pc = 0x30db5cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 6));
    // 0x30db60: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x30db60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x30db64: 0xfe670028  sd          $a3, 0x28($s3)
    ctx->pc = 0x30db64u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 7));
    // 0x30db68: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x30db68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30db6c: 0xfe680030  sd          $t0, 0x30($s3)
    ctx->pc = 0x30db6cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 48), GPR_U64(ctx, 8));
    // 0x30db70: 0x240c004d  addiu       $t4, $zero, 0x4D
    ctx->pc = 0x30db70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x30db74: 0xfe690040  sd          $t1, 0x40($s3)
    ctx->pc = 0x30db74u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 64), GPR_U64(ctx, 9));
    // 0x30db78: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x30db78u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x30db7c: 0xfe6a0048  sd          $t2, 0x48($s3)
    ctx->pc = 0x30db7cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 72), GPR_U64(ctx, 10));
    // 0x30db80: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x30db80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x30db84: 0xfe630008  sd          $v1, 0x8($s3)
    ctx->pc = 0x30db84u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 3));
    // 0x30db88: 0x3c0e2400  lui         $t6, 0x2400
    ctx->pc = 0x30db88u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)9216 << 16));
    // 0x30db8c: 0x35ce0e00  ori         $t6, $t6, 0xE00
    ctx->pc = 0x30db8cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)3584);
    // 0x30db90: 0xfe650018  sd          $a1, 0x18($s3)
    ctx->pc = 0x30db90u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 5));
    // 0x30db94: 0x34108100  ori         $s0, $zero, 0x8100
    ctx->pc = 0x30db94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x30db98: 0x1086f8  dsll        $s0, $s0, 27
    ctx->pc = 0x30db98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 27);
    // 0x30db9c: 0x36108000  ori         $s0, $s0, 0x8000
    ctx->pc = 0x30db9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
    // 0x30dba0: 0x108538  dsll        $s0, $s0, 20
    ctx->pc = 0x30dba0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 20);
    // 0x30dba4: 0xfe600038  sd          $zero, 0x38($s3)
    ctx->pc = 0x30dba4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 0));
    // 0x30dba8: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x30dba8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x30dbac: 0x240a0007  addiu       $t2, $zero, 0x7
    ctx->pc = 0x30dbacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30dbb0: 0x240d0060  addiu       $t5, $zero, 0x60
    ctx->pc = 0x30dbb0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x30dbb4: 0x8d6511a4  lw          $a1, 0x11A4($t3)
    ctx->pc = 0x30dbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4516)));
    // 0x30dbb8: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x30dbb8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x30dbbc: 0x8c4311ac  lw          $v1, 0x11AC($v0)
    ctx->pc = 0x30dbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4524)));
    // 0x30dbc0: 0x240f001a  addiu       $t7, $zero, 0x1A
    ctx->pc = 0x30dbc0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x30dbc4: 0xc5202a  slt         $a0, $a2, $a1
    ctx->pc = 0x30dbc4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x30dbc8: 0x24a2003f  addiu       $v0, $a1, 0x3F
    ctx->pc = 0x30dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x30dbcc: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x30dbccu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x30dbd0: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x30dbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x30dbd4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x30dbd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30dbd8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x30dbd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x30dbdc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30dbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30dbe0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30dbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30dbe4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30dbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30dbe8: 0xfe6c0058  sd          $t4, 0x58($s3)
    ctx->pc = 0x30dbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 88), GPR_U64(ctx, 12));
    // 0x30dbec: 0xfe630050  sd          $v1, 0x50($s3)
    ctx->pc = 0x30dbecu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 80), GPR_U64(ctx, 3));
    // 0x30dbf0: 0x24090009  addiu       $t1, $zero, 0x9
    ctx->pc = 0x30dbf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x30dbf4: 0x340c8000  ori         $t4, $zero, 0x8000
    ctx->pc = 0x30dbf4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30dbf8: 0xc6638  dsll        $t4, $t4, 24
    ctx->pc = 0x30dbf8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 24);
    // 0x30dbfc: 0x358c002a  ori         $t4, $t4, 0x2A
    ctx->pc = 0x30dbfcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)42);
    // 0x30dc00: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x30dc00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dc04: 0x8e241180  lw          $a0, 0x1180($s1)
    ctx->pc = 0x30dc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x30dc08: 0x267800b0  addiu       $t8, $s3, 0xB0
    ctx->pc = 0x30dc08u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    // 0x30dc0c: 0x8ce511b8  lw          $a1, 0x11B8($a3)
    ctx->pc = 0x30dc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4536)));
    // 0x30dc10: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x30dc10u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x30dc14: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x30dc14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x30dc18: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x30dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x30dc1c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x30dc1cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x30dc20: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x30dc20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x30dc24: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x30dc24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x30dc28: 0xae2825  or          $a1, $a1, $t6
    ctx->pc = 0x30dc28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 14));
    // 0x30dc2c: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x30dc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x30dc30: 0xfe680078  sd          $t0, 0x78($s3)
    ctx->pc = 0x30dc30u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 120), GPR_U64(ctx, 8));
    // 0x30dc34: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x30dc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x30dc38: 0xfe6a0068  sd          $t2, 0x68($s3)
    ctx->pc = 0x30dc38u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 104), GPR_U64(ctx, 10));
    // 0x30dc3c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x30dc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x30dc40: 0xfe6d0070  sd          $t5, 0x70($s3)
    ctx->pc = 0x30dc40u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 112), GPR_U64(ctx, 13));
    // 0x30dc44: 0xfe620060  sd          $v0, 0x60($s3)
    ctx->pc = 0x30dc44u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 96), GPR_U64(ctx, 2));
    // 0x30dc48: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x30dc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x30dc4c: 0x3405fe00  ori         $a1, $zero, 0xFE00
    ctx->pc = 0x30dc4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x30dc50: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x30dc50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x30dc54: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x30dc54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x30dc58: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x30dc58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x30dc5c: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x30dc5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x30dc60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30dc60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dc64: 0x8e42118c  lw          $v0, 0x118C($s2)
    ctx->pc = 0x30dc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4492)));
    // 0x30dc68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30dc68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dc6c: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x30dc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x30dc70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30dc74: 0xfe690088  sd          $t1, 0x88($s3)
    ctx->pc = 0x30dc74u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 136), GPR_U64(ctx, 9));
    // 0x30dc78: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30dc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30dc7c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x30dc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x30dc80: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x30dc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x30dc84: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x30dc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x30dc88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30dc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30dc8c: 0xfe6c0090  sd          $t4, 0x90($s3)
    ctx->pc = 0x30dc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 144), GPR_U64(ctx, 12));
    // 0x30dc90: 0xfe630080  sd          $v1, 0x80($s3)
    ctx->pc = 0x30dc90u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 128), GPR_U64(ctx, 3));
    // 0x30dc94: 0xfe640098  sd          $a0, 0x98($s3)
    ctx->pc = 0x30dc94u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 152), GPR_U64(ctx, 4));
    // 0x30dc98: 0xfe6500a0  sd          $a1, 0xA0($s3)
    ctx->pc = 0x30dc98u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 160), GPR_U64(ctx, 5));
    // 0x30dc9c: 0xfe6700a8  sd          $a3, 0xA8($s3)
    ctx->pc = 0x30dc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 168), GPR_U64(ctx, 7));
    // 0x30dca0: 0x8d6311a4  lw          $v1, 0x11A4($t3)
    ctx->pc = 0x30dca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4516)));
    // 0x30dca4: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x30dca4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30dca8: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x30dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x30dcac: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x30dcacu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x30dcb0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x30dcb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x30dcb4: 0x1840006a  blez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x30DCB4u;
    {
        const bool branch_taken_0x30dcb4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x30DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DCB4u;
        // 0x30dcb8: 0x3c1e003c  lui         $fp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dcb4) {
            ctx->pc = 0x30DE60u;
            goto label_30de60;
        }
    }
    ctx->pc = 0x30DCBCu;
    // 0x30dcbc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x30dcbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dcc0: 0x240c82d  daddu       $t9, $s2, $zero
    ctx->pc = 0x30dcc0u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dcc4: 0x2a0782d  daddu       $t7, $s5, $zero
    ctx->pc = 0x30dcc4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dcc8: 0x24170041  addiu       $s7, $zero, 0x41
    ctx->pc = 0x30dcc8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x30dccc: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x30dcccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dcd0: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x30dcd0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dcd4: 0x3c160008  lui         $s6, 0x8
    ctx->pc = 0x30dcd4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)8 << 16));
    // 0x30dcd8: 0x240d0003  addiu       $t5, $zero, 0x3
    ctx->pc = 0x30dcd8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30dcdc: 0x3c0c0058  lui         $t4, 0x58
    ctx->pc = 0x30dcdcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)88 << 16));
    // 0x30dce0: 0x340bffff  ori         $t3, $zero, 0xFFFF
    ctx->pc = 0x30dce0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30dce4: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x30dce4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x30dce8: 0x2412000d  addiu       $s2, $zero, 0xD
    ctx->pc = 0x30dce8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x30dcec: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x30dcecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30dcf0: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x30dcf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30dcf4: 0x0  nop
    ctx->pc = 0x30dcf4u;
    // NOP
label_30dcf8:
    // 0x30dcf8: 0x82180  sll         $a0, $t0, 6
    ctx->pc = 0x30dcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x30dcfc: 0x8de311a8  lw          $v1, 0x11A8($t7)
    ctx->pc = 0x30dcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4520)));
    // 0x30dd00: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x30dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x30dd04: 0x24870800  addiu       $a3, $a0, 0x800
    ctx->pc = 0x30dd04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 2048));
    // 0x30dd08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30dd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30dd0c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30dd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30dd10: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x30dd10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30dd14: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x30dd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x30dd18: 0x25050001  addiu       $a1, $t0, 0x1
    ctx->pc = 0x30dd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x30dd1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30dd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30dd20: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x30dd20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x30dd24: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x30dd24u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x30dd28: 0x24c60800  addiu       $a2, $a2, 0x800
    ctx->pc = 0x30dd28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2048));
    // 0x30dd2c: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30dd2cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30dd30: 0xff170000  sd          $s7, 0x0($t8)
    ctx->pc = 0x30dd30u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 23));
    // 0x30dd34: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30dd34u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30dd38: 0x8d221180  lw          $v0, 0x1180($t1)
    ctx->pc = 0x30dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4480)));
    // 0x30dd3c: 0x8d4311a4  lw          $v1, 0x11A4($t2)
    ctx->pc = 0x30dd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4516)));
    // 0x30dd40: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30dd44: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x30dd44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30dd48: 0x506e0001  beql        $v1, $t6, . + 4 + (0x1 << 2)
    ctx->pc = 0x30DD48u;
    {
        const bool branch_taken_0x30dd48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 14));
        if (branch_taken_0x30dd48) {
            ctx->pc = 0x30DD4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30DD48u;
            // 0x30dd4c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30DD50u;
            goto label_30dd50;
        }
    }
    ctx->pc = 0x30DD50u;
label_30dd50:
    // 0x30dd50: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x30dd50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dd54: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x30dd54u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30dd58: 0x1012  mflo        $v0
    ctx->pc = 0x30dd58u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x30dd5c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x30dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x30dd60: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30dd64: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x30dd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x30dd68: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x30dd68u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x30dd6c: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30dd6cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30dd70: 0xff0d0000  sd          $t5, 0x0($t8)
    ctx->pc = 0x30dd70u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 13));
    // 0x30dd74: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30dd74u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30dd78: 0x8d241180  lw          $a0, 0x1180($t1)
    ctx->pc = 0x30dd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4480)));
    // 0x30dd7c: 0x8d826b80  lw          $v0, 0x6B80($t4)
    ctx->pc = 0x30dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 27520)));
    // 0x30dd80: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x30dd80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x30dd84: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x30dd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30dd88: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30dd8c: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x30dd8cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x30dd90: 0xe43823  subu        $a3, $a3, $a0
    ctx->pc = 0x30dd90u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x30dd94: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30dd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30dd98: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x30dd98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x30dd9c: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x30dd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x30dda0: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x30dda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x30dda4: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x30dda4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x30dda8: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30dda8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30ddac: 0xff120000  sd          $s2, 0x0($t8)
    ctx->pc = 0x30ddacu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 18));
    // 0x30ddb0: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30ddb0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30ddb4: 0x8d221180  lw          $v0, 0x1180($t1)
    ctx->pc = 0x30ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4480)));
    // 0x30ddb8: 0x8d4311a4  lw          $v1, 0x11A4($t2)
    ctx->pc = 0x30ddb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4516)));
    // 0x30ddbc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30ddc0: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x30ddc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x30ddc4: 0x506e0001  beql        $v1, $t6, . + 4 + (0x1 << 2)
    ctx->pc = 0x30DDC4u;
    {
        const bool branch_taken_0x30ddc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 14));
        if (branch_taken_0x30ddc4) {
            ctx->pc = 0x30DDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30DDC4u;
            // 0x30ddc8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30DDCCu;
            goto label_30ddcc;
        }
    }
    ctx->pc = 0x30DDCCu;
label_30ddcc:
    // 0x30ddcc: 0x8f22118c  lw          $v0, 0x118C($t9)
    ctx->pc = 0x30ddccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4492)));
    // 0x30ddd0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30ddd4: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x30ddd4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30ddd8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30dddc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30dddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30dde0: 0x2812  mflo        $a1
    ctx->pc = 0x30dde0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x30dde4: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x30dde4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x30dde8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x30dde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x30ddec: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x30ddecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x30ddf0: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x30ddf0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x30ddf4: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30ddf4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30ddf8: 0xff0d0000  sd          $t5, 0x0($t8)
    ctx->pc = 0x30ddf8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 13));
    // 0x30ddfc: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30ddfcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30de00: 0x8d241180  lw          $a0, 0x1180($t1)
    ctx->pc = 0x30de00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4480)));
    // 0x30de04: 0x8d826b80  lw          $v0, 0x6B80($t4)
    ctx->pc = 0x30de04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 27520)));
    // 0x30de08: 0x8de511a8  lw          $a1, 0x11A8($t7)
    ctx->pc = 0x30de08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4520)));
    // 0x30de0c: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x30de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x30de10: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x30de10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30de14: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x30de14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30de18: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x30de18u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x30de1c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30de20: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x30de20u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x30de24: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x30de24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x30de28: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30de28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30de2c: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x30de2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x30de30: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x30de30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x30de34: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x30de34u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x30de38: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30de38u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30de3c: 0xff110000  sd          $s1, 0x0($t8)
    ctx->pc = 0x30de3cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 17));
    // 0x30de40: 0x8d4311a4  lw          $v1, 0x11A4($t2)
    ctx->pc = 0x30de40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4516)));
    // 0x30de44: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x30de44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x30de48: 0x203202a  slt         $a0, $s0, $v1
    ctx->pc = 0x30de48u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30de4c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x30de4cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x30de50: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x30de50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x30de54: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x30de54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30de58: 0x1440ffa7  bnez        $v0, . + 4 + (-0x59 << 2)
    ctx->pc = 0x30DE58u;
    {
        const bool branch_taken_0x30de58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE58u;
        // 0x30de5c: 0x27180008  addiu       $t8, $t8, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de58) {
            ctx->pc = 0x30DCF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30dcf8;
        }
    }
    ctx->pc = 0x30DE60u;
label_30de60:
    // 0x30de60: 0x24020356  addiu       $v0, $zero, 0x356
    ctx->pc = 0x30de60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x30de64: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x30de64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x30de68: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x30de68u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x30de6c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x30de6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30de70: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30de70u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30de74: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x30de74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30de78: 0xff000000  sd          $zero, 0x0($t8)
    ctx->pc = 0x30de78u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 0));
    // 0x30de7c: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x30de7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x30de80: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30de80u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30de84: 0x2408004d  addiu       $t0, $zero, 0x4D
    ctx->pc = 0x30de84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x30de88: 0xff030000  sd          $v1, 0x0($t8)
    ctx->pc = 0x30de88u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 3));
    // 0x30de8c: 0x3c092400  lui         $t1, 0x2400
    ctx->pc = 0x30de8cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)9216 << 16));
    // 0x30de90: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30de90u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30de94: 0x340a8100  ori         $t2, $zero, 0x8100
    ctx->pc = 0x30de94u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x30de98: 0xa53fc  dsll32      $t2, $t2, 15
    ctx->pc = 0x30de98u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 15));
    // 0x30de9c: 0xff040000  sd          $a0, 0x0($t8)
    ctx->pc = 0x30de9cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 4));
    // 0x30dea0: 0x240b0007  addiu       $t3, $zero, 0x7
    ctx->pc = 0x30dea0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30dea4: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30dea4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30dea8: 0x240c0015  addiu       $t4, $zero, 0x15
    ctx->pc = 0x30dea8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x30deac: 0x8e8411a4  lw          $a0, 0x11A4($s4)
    ctx->pc = 0x30deacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4516)));
    // 0x30deb0: 0x300282d  daddu       $a1, $t8, $zero
    ctx->pc = 0x30deb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30deb4: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30deb4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30deb8: 0x240d001a  addiu       $t5, $zero, 0x1A
    ctx->pc = 0x30deb8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x30debc: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x30debcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x30dec0: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x30dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x30dec4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x30dec4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x30dec8: 0x240e0009  addiu       $t6, $zero, 0x9
    ctx->pc = 0x30dec8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x30decc: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x30deccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x30ded0: 0x340ffe00  ori         $t7, $zero, 0xFE00
    ctx->pc = 0x30ded0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x30ded4: 0xf7fb8  dsll        $t7, $t7, 30
    ctx->pc = 0x30ded4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 30);
    // 0x30ded8: 0x35ef8000  ori         $t7, $t7, 0x8000
    ctx->pc = 0x30ded8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)32768);
    // 0x30dedc: 0xf7c38  dsll        $t7, $t7, 16
    ctx->pc = 0x30dedcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 16);
    // 0x30dee0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30dee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30dee4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x30dee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dee8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x30dee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x30deec: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x30deecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30def0: 0x118e38  dsll        $s1, $s1, 24
    ctx->pc = 0x30def0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 24);
    // 0x30def4: 0x36310064  ori         $s1, $s1, 0x64
    ctx->pc = 0x30def4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)100);
    // 0x30def8: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x30def8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x30defc: 0x24120043  addiu       $s2, $zero, 0x43
    ctx->pc = 0x30defcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x30df00: 0xff080000  sd          $t0, 0x0($t8)
    ctx->pc = 0x30df00u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 8));
    // 0x30df04: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x30df04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x30df08: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30df08u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30df0c: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x30df0cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30df10: 0x8e8511a4  lw          $a1, 0x11A4($s4)
    ctx->pc = 0x30df10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4516)));
    // 0x30df14: 0x300402d  daddu       $t0, $t8, $zero
    ctx->pc = 0x30df14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30df18: 0x8c4611b8  lw          $a2, 0x11B8($v0)
    ctx->pc = 0x30df18u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C11B8u));
    // 0x30df1c: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30df1cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30df20: 0xe5202a  slt         $a0, $a3, $a1
    ctx->pc = 0x30df20u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x30df24: 0x24a2003f  addiu       $v0, $a1, 0x3F
    ctx->pc = 0x30df24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x30df28: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x30df28u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x30df2c: 0x637b8  dsll        $a2, $a2, 30
    ctx->pc = 0x30df2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 30);
    // 0x30df30: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x30df30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x30df34: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x30df34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x30df38: 0x9c8311ac  lwu         $v1, 0x11AC($a0)
    ctx->pc = 0x30df38u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4524)));
    // 0x30df3c: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x30df3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x30df40: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x30df40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x30df44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30df44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30df48: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x30df48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x30df4c: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x30df4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x30df50: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x30df50u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x30df54: 0xff0b0000  sd          $t3, 0x0($t8)
    ctx->pc = 0x30df54u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 11));
    // 0x30df58: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30df58u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30df5c: 0xff000000  sd          $zero, 0x0($t8)
    ctx->pc = 0x30df5cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 0));
    // 0x30df60: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30df60u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30df64: 0xff0c0000  sd          $t4, 0x0($t8)
    ctx->pc = 0x30df64u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 12));
    // 0x30df68: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30df68u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30df6c: 0x8ea211a8  lw          $v0, 0x11A8($s5)
    ctx->pc = 0x30df6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4520)));
    // 0x30df70: 0x8e8311a4  lw          $v1, 0x11A4($s4)
    ctx->pc = 0x30df70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4516)));
    // 0x30df74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30df74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30df78: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30df78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30df7c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x30df7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x30df80: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x30df80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x30df84: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x30df84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x30df88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30df88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30df8c: 0xff030000  sd          $v1, 0x0($t8)
    ctx->pc = 0x30df8cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 3));
    // 0x30df90: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30df90u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30df94: 0xff0e0000  sd          $t6, 0x0($t8)
    ctx->pc = 0x30df94u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 14));
    // 0x30df98: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30df98u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30df9c: 0x9fc23ccc  lwu         $v0, 0x3CCC($fp)
    ctx->pc = 0x30df9cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 15564)));
    // 0x30dfa0: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x30dfa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
    // 0x30dfa4: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x30dfa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x30dfa8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30dfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30dfac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30dfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30dfb0: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x30dfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x30dfb4: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x30dfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x30dfb8: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30dfb8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30dfbc: 0xff100000  sd          $s0, 0x0($t8)
    ctx->pc = 0x30dfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 16));
    // 0x30dfc0: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30dfc0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30dfc4: 0xff110000  sd          $s1, 0x0($t8)
    ctx->pc = 0x30dfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 17));
    // 0x30dfc8: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30dfc8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30dfcc: 0xff120000  sd          $s2, 0x0($t8)
    ctx->pc = 0x30dfccu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 18));
    // 0x30dfd0: 0x8e8311a4  lw          $v1, 0x11A4($s4)
    ctx->pc = 0x30dfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4516)));
    // 0x30dfd4: 0xe3382a  slt         $a3, $a3, $v1
    ctx->pc = 0x30dfd4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30dfd8: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x30dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x30dfdc: 0x67100b  movn        $v0, $v1, $a3
    ctx->pc = 0x30dfdcu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x30dfe0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x30dfe0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x30dfe4: 0x18400059  blez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x30DFE4u;
    {
        const bool branch_taken_0x30dfe4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x30DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DFE4u;
        // 0x30dfe8: 0x27180008  addiu       $t8, $t8, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dfe4) {
            ctx->pc = 0x30E14Cu;
            goto label_30e14c;
        }
    }
    ctx->pc = 0x30DFECu;
    // 0x30dfec: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x30dfecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dff0: 0x24160041  addiu       $s6, $zero, 0x41
    ctx->pc = 0x30dff0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x30dff4: 0x3c150008  lui         $s5, 0x8
    ctx->pc = 0x30dff4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)8 << 16));
    // 0x30dff8: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x30dff8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30dffc: 0x3c0e003c  lui         $t6, 0x3C
    ctx->pc = 0x30dffcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)60 << 16));
    // 0x30e000: 0x3c0d0058  lui         $t5, 0x58
    ctx->pc = 0x30e000u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)88 << 16));
    // 0x30e004: 0x340cffff  ori         $t4, $zero, 0xFFFF
    ctx->pc = 0x30e004u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30e008: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x30e008u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x30e00c: 0x2412000d  addiu       $s2, $zero, 0xD
    ctx->pc = 0x30e00cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x30e010: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x30e010u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30e014: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x30e014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30e018: 0x240a0840  addiu       $t2, $zero, 0x840
    ctx->pc = 0x30e018u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2112));
    // 0x30e01c: 0x24090408  addiu       $t1, $zero, 0x408
    ctx->pc = 0x30e01cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
    // 0x30e020: 0x24080800  addiu       $t0, $zero, 0x800
    ctx->pc = 0x30e020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30e024: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x30e024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30e028: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x30e028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30e02c: 0x0  nop
    ctx->pc = 0x30e02cu;
    // NOP
label_30e030:
    // 0x30e030: 0x8d6311a8  lw          $v1, 0x11A8($t3)
    ctx->pc = 0x30e030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4520)));
    // 0x30e034: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x30e034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e038: 0x192180  sll         $a0, $t9, 6
    ctx->pc = 0x30e038u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 25), 6));
    // 0x30e03c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30e03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30e040: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30e040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30e044: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x30e044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x30e048: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x30e048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30e04c: 0xf52025  or          $a0, $a3, $s5
    ctx->pc = 0x30e04cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 21));
    // 0x30e050: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30e050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30e054: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x30e054u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x30e058: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x30e058u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x30e05c: 0x24e70400  addiu       $a3, $a3, 0x400
    ctx->pc = 0x30e05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
    // 0x30e060: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e060u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e064: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x30e064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x30e068: 0xff160000  sd          $s6, 0x0($t8)
    ctx->pc = 0x30e068u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 22));
    // 0x30e06c: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e06cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e070: 0xff040000  sd          $a0, 0x0($t8)
    ctx->pc = 0x30e070u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 4));
    // 0x30e074: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e074u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e078: 0xff0f0000  sd          $t7, 0x0($t8)
    ctx->pc = 0x30e078u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 15));
    // 0x30e07c: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e07cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e080: 0x8dc21180  lw          $v0, 0x1180($t6)
    ctx->pc = 0x30e080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4480)));
    // 0x30e084: 0x8da36b80  lw          $v1, 0x6B80($t5)
    ctx->pc = 0x30e084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 27520)));
    // 0x30e088: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x30e088u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x30e08c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30e090: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30e090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30e094: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x30e094u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x30e098: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x30e098u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x30e09c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30e09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30e0a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30e0a4: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x30e0a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x30e0a8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x30e0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30e0ac: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x30e0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x30e0b0: 0xff030000  sd          $v1, 0x0($t8)
    ctx->pc = 0x30e0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 3));
    // 0x30e0b4: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e0b4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e0b8: 0xff120000  sd          $s2, 0x0($t8)
    ctx->pc = 0x30e0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 18));
    // 0x30e0bc: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e0bcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e0c0: 0x8d6211a8  lw          $v0, 0x11A8($t3)
    ctx->pc = 0x30e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4520)));
    // 0x30e0c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30e0c8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30e0cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30e0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30e0d0: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x30e0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x30e0d4: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x30e0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x30e0d8: 0x25290400  addiu       $t1, $t1, 0x400
    ctx->pc = 0x30e0d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
    // 0x30e0dc: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e0dcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e0e0: 0xff0f0000  sd          $t7, 0x0($t8)
    ctx->pc = 0x30e0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 15));
    // 0x30e0e4: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e0e4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e0e8: 0x8dc41180  lw          $a0, 0x1180($t6)
    ctx->pc = 0x30e0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4480)));
    // 0x30e0ec: 0x8da26b80  lw          $v0, 0x6B80($t5)
    ctx->pc = 0x30e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 27520)));
    // 0x30e0f0: 0x8d6511a8  lw          $a1, 0x11A8($t3)
    ctx->pc = 0x30e0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4520)));
    // 0x30e0f4: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x30e0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x30e0f8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x30e0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30e0fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x30e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30e100: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x30e100u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x30e104: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30e104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30e108: 0x1442023  subu        $a0, $t2, $a0
    ctx->pc = 0x30e108u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x30e10c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x30e10cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x30e110: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30e110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30e114: 0x254a0040  addiu       $t2, $t2, 0x40
    ctx->pc = 0x30e114u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 64));
    // 0x30e118: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x30e118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x30e11c: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x30e11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x30e120: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x30e120u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x30e124: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e124u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e128: 0xff110000  sd          $s1, 0x0($t8)
    ctx->pc = 0x30e128u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 17));
    // 0x30e12c: 0x8e8311a4  lw          $v1, 0x11A4($s4)
    ctx->pc = 0x30e12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4516)));
    // 0x30e130: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x30e130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x30e134: 0x203202a  slt         $a0, $s0, $v1
    ctx->pc = 0x30e134u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30e138: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x30e138u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x30e13c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x30e13cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x30e140: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x30e140u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30e144: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x30E144u;
    {
        const bool branch_taken_0x30e144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E144u;
        // 0x30e148: 0x27180008  addiu       $t8, $t8, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e144) {
            ctx->pc = 0x30E030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e030;
        }
    }
    ctx->pc = 0x30E14Cu;
label_30e14c:
    // 0x30e14c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x30e14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30e150: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x30e150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x30e154: 0x34630068  ori         $v1, $v1, 0x68
    ctx->pc = 0x30e154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)104);
    // 0x30e158: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x30e158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x30e15c: 0xff030000  sd          $v1, 0x0($t8)
    ctx->pc = 0x30e15cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 3));
    // 0x30e160: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x30e160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30e164: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e164u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e168: 0x3406fe00  ori         $a2, $zero, 0xFE00
    ctx->pc = 0x30e168u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x30e16c: 0x637b8  dsll        $a2, $a2, 30
    ctx->pc = 0x30e16cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 30);
    // 0x30e170: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x30e170u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x30e174: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x30e174u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x30e178: 0xff040000  sd          $a0, 0x0($t8)
    ctx->pc = 0x30e178u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 4));
    // 0x30e17c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30e17cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e180: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e180u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e184: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x30e184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30e188: 0x8fc33ccc  lw          $v1, 0x3CCC($fp)
    ctx->pc = 0x30e188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 15564)));
    // 0x30e18c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30e18cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e190: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30e190u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30e194: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x30e194u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x30e198: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30e198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30e19c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30e19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30e1a0: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x30e1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
    // 0x30e1a4: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x30e1a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x30e1a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30e1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30e1ac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30e1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30e1b0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x30e1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x30e1b4: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x30e1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x30e1b8: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e1b8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e1bc: 0xff070000  sd          $a3, 0x0($t8)
    ctx->pc = 0x30e1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 7));
    // 0x30e1c0: 0x8e8311a4  lw          $v1, 0x11A4($s4)
    ctx->pc = 0x30e1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4516)));
    // 0x30e1c4: 0xa3282a  slt         $a1, $a1, $v1
    ctx->pc = 0x30e1c4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30e1c8: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x30e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x30e1cc: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x30e1ccu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x30e1d0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x30e1d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x30e1d4: 0x1840005f  blez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x30E1D4u;
    {
        const bool branch_taken_0x30e1d4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x30E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E1D4u;
        // 0x30e1d8: 0x27180008  addiu       $t8, $t8, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e1d4) {
            ctx->pc = 0x30E354u;
            goto label_30e354;
        }
    }
    ctx->pc = 0x30E1DCu;
    // 0x30e1dc: 0x3c0d003c  lui         $t5, 0x3C
    ctx->pc = 0x30e1dcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)60 << 16));
    // 0x30e1e0: 0x241e0041  addiu       $fp, $zero, 0x41
    ctx->pc = 0x30e1e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x30e1e4: 0x3c170008  lui         $s7, 0x8
    ctx->pc = 0x30e1e4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)8 << 16));
    // 0x30e1e8: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x30e1e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30e1ec: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x30e1ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x30e1f0: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x30e1f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x30e1f4: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x30e1f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x30e1f8: 0x340effff  ori         $t6, $zero, 0xFFFF
    ctx->pc = 0x30e1f8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30e1fc: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x30e1fcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x30e200: 0x2416000d  addiu       $s6, $zero, 0xD
    ctx->pc = 0x30e200u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x30e204: 0x24190005  addiu       $t9, $zero, 0x5
    ctx->pc = 0x30e204u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30e208: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x30e208u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30e20c: 0x240c0840  addiu       $t4, $zero, 0x840
    ctx->pc = 0x30e20cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2112));
    // 0x30e210: 0x240b0408  addiu       $t3, $zero, 0x408
    ctx->pc = 0x30e210u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
    // 0x30e214: 0x240a0800  addiu       $t2, $zero, 0x800
    ctx->pc = 0x30e214u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30e218: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x30e218u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30e21c: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x30e21cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_30e220:
    // 0x30e220: 0x8da311a8  lw          $v1, 0x11A8($t5)
    ctx->pc = 0x30e220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4520)));
    // 0x30e224: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x30e224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e228: 0x82180  sll         $a0, $t0, 6
    ctx->pc = 0x30e228u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x30e22c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30e22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30e230: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30e230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30e234: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x30e234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x30e238: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x30e238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30e23c: 0x1372025  or          $a0, $t1, $s7
    ctx->pc = 0x30e23cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | GPR_U64(ctx, 23));
    // 0x30e240: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30e240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30e244: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x30e244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x30e248: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x30e248u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x30e24c: 0x25290400  addiu       $t1, $t1, 0x400
    ctx->pc = 0x30e24cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
    // 0x30e250: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e250u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e254: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x30e254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x30e258: 0xff1e0000  sd          $fp, 0x0($t8)
    ctx->pc = 0x30e258u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 30));
    // 0x30e25c: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e25cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e260: 0xff040000  sd          $a0, 0x0($t8)
    ctx->pc = 0x30e260u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 4));
    // 0x30e264: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e264u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e268: 0xff120000  sd          $s2, 0x0($t8)
    ctx->pc = 0x30e268u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 18));
    // 0x30e26c: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e26cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e270: 0x8e241180  lw          $a0, 0x1180($s1)
    ctx->pc = 0x30e270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x30e274: 0x8e026b80  lw          $v0, 0x6B80($s0)
    ctx->pc = 0x30e274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27520)));
    // 0x30e278: 0x8de53cd0  lw          $a1, 0x3CD0($t7)
    ctx->pc = 0x30e278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 15568)));
    // 0x30e27c: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x30e27cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x30e280: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x30e280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30e284: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30e284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30e288: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x30e288u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30e28c: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x30e28cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x30e290: 0x1442023  subu        $a0, $t2, $a0
    ctx->pc = 0x30e290u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x30e294: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30e294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30e298: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x30e298u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x30e29c: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x30e29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x30e2a0: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x30e2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x30e2a4: 0x254a0040  addiu       $t2, $t2, 0x40
    ctx->pc = 0x30e2a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 64));
    // 0x30e2a8: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x30e2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x30e2ac: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x30e2acu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x30e2b0: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e2b0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e2b4: 0xff160000  sd          $s6, 0x0($t8)
    ctx->pc = 0x30e2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 22));
    // 0x30e2b8: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e2b8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e2bc: 0x8da211a8  lw          $v0, 0x11A8($t5)
    ctx->pc = 0x30e2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4520)));
    // 0x30e2c0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30e2c4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30e2c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30e2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30e2cc: 0x1621025  or          $v0, $t3, $v0
    ctx->pc = 0x30e2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x30e2d0: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x30e2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x30e2d4: 0x256b0400  addiu       $t3, $t3, 0x400
    ctx->pc = 0x30e2d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1024));
    // 0x30e2d8: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e2d8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e2dc: 0xff120000  sd          $s2, 0x0($t8)
    ctx->pc = 0x30e2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 18));
    // 0x30e2e0: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e2e0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e2e4: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x30e2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x30e2e8: 0x8e026b80  lw          $v0, 0x6B80($s0)
    ctx->pc = 0x30e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27520)));
    // 0x30e2ec: 0x8da511a8  lw          $a1, 0x11A8($t5)
    ctx->pc = 0x30e2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4520)));
    // 0x30e2f0: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x30e2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x30e2f4: 0x8de63cd0  lw          $a2, 0x3CD0($t7)
    ctx->pc = 0x30e2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 15568)));
    // 0x30e2f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30e2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30e2fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x30e2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30e300: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x30e300u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x30e304: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30e304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30e308: 0x1831823  subu        $v1, $t4, $v1
    ctx->pc = 0x30e308u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x30e30c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x30e30cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x30e310: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30e310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30e314: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30e314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30e318: 0x258c0040  addiu       $t4, $t4, 0x40
    ctx->pc = 0x30e318u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 64));
    // 0x30e31c: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x30e31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x30e320: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30e320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30e324: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x30e324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x30e328: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x30e328u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x30e32c: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e32cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e330: 0xff190000  sd          $t9, 0x0($t8)
    ctx->pc = 0x30e330u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 25));
    // 0x30e334: 0x8e8311a4  lw          $v1, 0x11A4($s4)
    ctx->pc = 0x30e334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4516)));
    // 0x30e338: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x30e338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x30e33c: 0x2a3202a  slt         $a0, $s5, $v1
    ctx->pc = 0x30e33cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30e340: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x30e340u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x30e344: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x30e344u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x30e348: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x30e348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30e34c: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x30E34Cu;
    {
        const bool branch_taken_0x30e34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E34Cu;
        // 0x30e350: 0x27180008  addiu       $t8, $t8, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e34c) {
            ctx->pc = 0x30E220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e220;
        }
    }
    ctx->pc = 0x30E354u;
label_30e354:
    // 0x30e354: 0x8e8411a4  lw          $a0, 0x11A4($s4)
    ctx->pc = 0x30e354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4516)));
    // 0x30e358: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30e358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30e35c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x30e35cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x30e360: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x30e360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x30e364: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x30e364u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x30e368: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x30e368u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x30e36c: 0x1840005f  blez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x30E36Cu;
    {
        const bool branch_taken_0x30e36c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x30E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E36Cu;
        // 0x30e370: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e36c) {
            ctx->pc = 0x30E4ECu;
            goto label_30e4ec;
        }
    }
    ctx->pc = 0x30E374u;
    // 0x30e374: 0x3c0d003c  lui         $t5, 0x3C
    ctx->pc = 0x30e374u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)60 << 16));
    // 0x30e378: 0x241e0041  addiu       $fp, $zero, 0x41
    ctx->pc = 0x30e378u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x30e37c: 0x3c170008  lui         $s7, 0x8
    ctx->pc = 0x30e37cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)8 << 16));
    // 0x30e380: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x30e380u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30e384: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x30e384u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x30e388: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x30e388u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x30e38c: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x30e38cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x30e390: 0x340effff  ori         $t6, $zero, 0xFFFF
    ctx->pc = 0x30e390u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30e394: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x30e394u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x30e398: 0x2416000d  addiu       $s6, $zero, 0xD
    ctx->pc = 0x30e398u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x30e39c: 0x24190005  addiu       $t9, $zero, 0x5
    ctx->pc = 0x30e39cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30e3a0: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x30e3a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30e3a4: 0x240c0840  addiu       $t4, $zero, 0x840
    ctx->pc = 0x30e3a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2112));
    // 0x30e3a8: 0x240b0408  addiu       $t3, $zero, 0x408
    ctx->pc = 0x30e3a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
    // 0x30e3ac: 0x240a0800  addiu       $t2, $zero, 0x800
    ctx->pc = 0x30e3acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30e3b0: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x30e3b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30e3b4: 0x2408003f  addiu       $t0, $zero, 0x3F
    ctx->pc = 0x30e3b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_30e3b8:
    // 0x30e3b8: 0x8da311a8  lw          $v1, 0x11A8($t5)
    ctx->pc = 0x30e3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4520)));
    // 0x30e3bc: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x30e3bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e3c0: 0x72180  sll         $a0, $a3, 6
    ctx->pc = 0x30e3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x30e3c4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30e3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30e3c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30e3cc: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x30e3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x30e3d0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x30e3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30e3d4: 0x1372025  or          $a0, $t1, $s7
    ctx->pc = 0x30e3d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | GPR_U64(ctx, 23));
    // 0x30e3d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30e3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30e3dc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x30e3dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x30e3e0: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x30e3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x30e3e4: 0x25290400  addiu       $t1, $t1, 0x400
    ctx->pc = 0x30e3e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
    // 0x30e3e8: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e3e8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e3ec: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x30e3ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x30e3f0: 0xff1e0000  sd          $fp, 0x0($t8)
    ctx->pc = 0x30e3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 30));
    // 0x30e3f4: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e3f4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e3f8: 0xff040000  sd          $a0, 0x0($t8)
    ctx->pc = 0x30e3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 4));
    // 0x30e3fc: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e3fcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e400: 0xff120000  sd          $s2, 0x0($t8)
    ctx->pc = 0x30e400u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 18));
    // 0x30e404: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e404u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e408: 0x8e241180  lw          $a0, 0x1180($s1)
    ctx->pc = 0x30e408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x30e40c: 0x8e026b80  lw          $v0, 0x6B80($s0)
    ctx->pc = 0x30e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27520)));
    // 0x30e410: 0x8de53cd0  lw          $a1, 0x3CD0($t7)
    ctx->pc = 0x30e410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 15568)));
    // 0x30e414: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x30e414u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x30e418: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x30e418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30e41c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30e41cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30e420: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x30e420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30e424: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x30e424u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x30e428: 0x1442023  subu        $a0, $t2, $a0
    ctx->pc = 0x30e428u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x30e42c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30e42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30e430: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x30e430u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x30e434: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x30e434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x30e438: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x30e438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x30e43c: 0x254a0040  addiu       $t2, $t2, 0x40
    ctx->pc = 0x30e43cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 64));
    // 0x30e440: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x30e440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x30e444: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x30e444u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x30e448: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e448u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e44c: 0xff160000  sd          $s6, 0x0($t8)
    ctx->pc = 0x30e44cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 22));
    // 0x30e450: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e450u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e454: 0x8da211a8  lw          $v0, 0x11A8($t5)
    ctx->pc = 0x30e454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4520)));
    // 0x30e458: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30e458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30e45c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30e460: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30e460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30e464: 0x1621025  or          $v0, $t3, $v0
    ctx->pc = 0x30e464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x30e468: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x30e468u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x30e46c: 0x256b0400  addiu       $t3, $t3, 0x400
    ctx->pc = 0x30e46cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1024));
    // 0x30e470: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e470u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e474: 0xff120000  sd          $s2, 0x0($t8)
    ctx->pc = 0x30e474u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 18));
    // 0x30e478: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e478u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e47c: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x30e47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x30e480: 0x8e026b80  lw          $v0, 0x6B80($s0)
    ctx->pc = 0x30e480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27520)));
    // 0x30e484: 0x8da511a8  lw          $a1, 0x11A8($t5)
    ctx->pc = 0x30e484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4520)));
    // 0x30e488: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x30e488u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x30e48c: 0x8de63cd0  lw          $a2, 0x3CD0($t7)
    ctx->pc = 0x30e48cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 15568)));
    // 0x30e490: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30e490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30e494: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x30e494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30e498: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x30e498u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x30e49c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30e4a0: 0x1831823  subu        $v1, $t4, $v1
    ctx->pc = 0x30e4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x30e4a4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x30e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x30e4a8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30e4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30e4ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30e4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30e4b0: 0x258c0040  addiu       $t4, $t4, 0x40
    ctx->pc = 0x30e4b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 64));
    // 0x30e4b4: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x30e4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x30e4b8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30e4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30e4bc: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x30e4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x30e4c0: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x30e4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x30e4c4: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x30e4c4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x30e4c8: 0xff190000  sd          $t9, 0x0($t8)
    ctx->pc = 0x30e4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 25));
    // 0x30e4cc: 0x8e8311a4  lw          $v1, 0x11A4($s4)
    ctx->pc = 0x30e4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4516)));
    // 0x30e4d0: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x30e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x30e4d4: 0x2a3202a  slt         $a0, $s5, $v1
    ctx->pc = 0x30e4d4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30e4d8: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x30e4d8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x30e4dc: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x30e4dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x30e4e0: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x30e4e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30e4e4: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x30E4E4u;
    {
        const bool branch_taken_0x30e4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E4E4u;
        // 0x30e4e8: 0x27180008  addiu       $t8, $t8, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e4e4) {
            ctx->pc = 0x30E3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e3b8;
        }
    }
    ctx->pc = 0x30E4ECu;
label_30e4ec:
    // 0x30e4ec: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x30e4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x30e4f0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x30e4f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e4f4: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x30e4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x30e4f8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x30e4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x30e4fc: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x30E4FCu;
    SET_GPR_U32(ctx, 31, 0x30E504u);
    ctx->pc = 0x30E500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E4FCu;
    // 0x30e500: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x30E4FCu, 0x30E504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E504u;
label_30e504:
    // 0x30e504: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x30e504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30e508: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x30e508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30e50c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x30e50cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30e510: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x30e510u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30e514: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x30e514u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30e518: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x30e518u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30e51c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x30e51cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30e520: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x30e520u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30e524: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x30e524u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30e528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e52c: 0x3e00008  jr          $ra
    ctx->pc = 0x30E52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E52Cu;
        // 0x30e530: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E534u;
    // 0x30e534: 0x0  nop
    ctx->pc = 0x30e534u;
    // NOP
    ctx->pc = 0x30e538u;
}
