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

// Function: func_00376F18
// Address: 0x376f18 - 0x377150
void func_00376F18_0x376f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00376F18_0x376f18");
#endif

    switch (ctx->pc) {
        case 0x376ff8u: goto label_376ff8;
        case 0x377044u: goto label_377044;
        case 0x37705cu: goto label_37705c;
        case 0x3770d0u: goto label_3770d0;
        case 0x3770f8u: goto label_3770f8;
        case 0x377108u: goto label_377108;
        default: break;
    }

    ctx->pc = 0x376f18u;

    // 0x376f18: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x376f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x376f1c: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x376f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x376f20: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x376f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x376f24: 0x2442e910  addiu       $v0, $v0, -0x16F0
    ctx->pc = 0x376f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961424));
    // 0x376f28: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x376f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x376f2c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x376f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x376f30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x376f30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376f34: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x376f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x376f38: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x376f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x376f3c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x376f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x376f40: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x376f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x376f44: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x376f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x376f48: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x376f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x376f4c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x376f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x376f50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x376f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x376f54: 0x8623000c  lh          $v1, 0xC($s1)
    ctx->pc = 0x376f54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x376f58: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x376f58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x376f5c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x376f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x376f60: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x376f60u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x376f64: 0x1480006d  bnez        $a0, . + 4 + (0x6D << 2)
    ctx->pc = 0x376F64u;
    {
        const bool branch_taken_0x376f64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x376F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376F64u;
        // 0x376f68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376f64) {
            ctx->pc = 0x37711Cu;
            goto label_37711c;
        }
    }
    ctx->pc = 0x376F6Cu;
    // 0x376f6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x376f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376f70: 0x26030068  addiu       $v1, $s0, 0x68
    ctx->pc = 0x376f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x376f74: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x376f74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x376f78: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x376f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x376f7c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x376f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x376f80: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x376f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x376f84: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x376f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x376f88: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x376f88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376f8c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x376f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x376f90: 0x261e0060  addiu       $fp, $s0, 0x60
    ctx->pc = 0x376f90u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x376f94: 0x26120038  addiu       $s2, $s0, 0x38
    ctx->pc = 0x376f94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x376f98: 0x2617003e  addiu       $s7, $s0, 0x3E
    ctx->pc = 0x376f98u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 62));
    // 0x376f9c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x376f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x376fa0: 0x2616003c  addiu       $s6, $s0, 0x3C
    ctx->pc = 0x376fa0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x376fa4: 0x2615003a  addiu       $s5, $s0, 0x3A
    ctx->pc = 0x376fa4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 58));
    // 0x376fa8: 0x26340020  addiu       $s4, $s1, 0x20
    ctx->pc = 0x376fa8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x376fac: 0x96220010  lhu         $v0, 0x10($s1)
    ctx->pc = 0x376facu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x376fb0: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x376fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x376fb4: 0x96230012  lhu         $v1, 0x12($s1)
    ctx->pc = 0x376fb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x376fb8: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x376fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x376fbc: 0x96220014  lhu         $v0, 0x14($s1)
    ctx->pc = 0x376fbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x376fc0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x376fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x376fc4: 0x92230008  lbu         $v1, 0x8($s1)
    ctx->pc = 0x376fc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x376fc8: 0xa204000f  sb          $a0, 0xF($s0)
    ctx->pc = 0x376fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 4));
    // 0x376fcc: 0xa203000e  sb          $v1, 0xE($s0)
    ctx->pc = 0x376fccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x376fd0: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x376fd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x376fd4: 0x9622001c  lhu         $v0, 0x1C($s1)
    ctx->pc = 0x376fd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x376fd8: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x376fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x376fdc: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x376fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x376fe0: 0xa6000016  sh          $zero, 0x16($s0)
    ctx->pc = 0x376fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x376fe4: 0x96220044  lhu         $v0, 0x44($s1)
    ctx->pc = 0x376fe4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x376fe8: 0xa602005c  sh          $v0, 0x5C($s0)
    ctx->pc = 0x376fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 92), (uint16_t)GPR_U32(ctx, 2));
    // 0x376fec: 0x96230046  lhu         $v1, 0x46($s1)
    ctx->pc = 0x376fecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 70)));
    // 0x376ff0: 0xa603005e  sh          $v1, 0x5E($s0)
    ctx->pc = 0x376ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 94), (uint16_t)GPR_U32(ctx, 3));
    // 0x376ff4: 0x0  nop
    ctx->pc = 0x376ff4u;
    // NOP
label_376ff8:
    // 0x376ff8: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x376ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x376ffc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x376ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x377000: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x377000u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x377004: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x377004u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x377008: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x377008u;
    {
        const bool branch_taken_0x377008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x377008) {
            ctx->pc = 0x37700Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x377008u;
            // 0x37700c: 0xa6400000  sh          $zero, 0x0($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x377018u;
            goto label_377018;
        }
    }
    ctx->pc = 0x377010u;
    // 0x377010: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x377010u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x377014: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x377014u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_377018:
    // 0x377018: 0xa6a00000  sh          $zero, 0x0($s5)
    ctx->pc = 0x377018u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x37701c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x37701cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x377020: 0xa6c00000  sh          $zero, 0x0($s6)
    ctx->pc = 0x377020u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x377024: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x377024u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x377028: 0xa6e00000  sh          $zero, 0x0($s7)
    ctx->pc = 0x377028u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x37702c: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x37702cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x377030: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x377030u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x377034: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x377034u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x377038: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x377038u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x37703c: 0xc0de02c  jal         func_3780B0
    ctx->pc = 0x37703Cu;
    SET_GPR_U32(ctx, 31, 0x377044u);
    ctx->pc = 0x377040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37703Cu;
    // 0x377040: 0x8604005c  lh          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3780B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3780B0u, 0x37703Cu, 0x377044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377044u;
label_377044:
    // 0x377044: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x377044u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x377048: 0x27de0002  addiu       $fp, $fp, 0x2
    ctx->pc = 0x377048u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
    // 0x37704c: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x37704cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x377050: 0x8604005e  lh          $a0, 0x5E($s0)
    ctx->pc = 0x377050u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 94)));
    // 0x377054: 0xc0de02c  jal         func_3780B0
    ctx->pc = 0x377054u;
    SET_GPR_U32(ctx, 31, 0x37705Cu);
    ctx->pc = 0x377058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377054u;
    // 0x377058: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3780B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3780B0u, 0x377054u, 0x37705Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37705Cu;
label_37705c:
    // 0x37705c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x37705cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x377060: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x377060u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x377064: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x377064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x377068: 0x2e620004  sltiu       $v0, $s3, 0x4
    ctx->pc = 0x377068u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x37706c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x37706Cu;
    {
        const bool branch_taken_0x37706c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x377070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37706Cu;
        // 0x377070: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37706c) {
            ctx->pc = 0x376FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376ff8;
        }
    }
    ctx->pc = 0x377074u;
    // 0x377074: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x377074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x377078: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x377078u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37707c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x37707cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377080: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x377080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x377084: 0x96220048  lhu         $v0, 0x48($s1)
    ctx->pc = 0x377084u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x377088: 0xa6020070  sh          $v0, 0x70($s0)
    ctx->pc = 0x377088u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 112), (uint16_t)GPR_U32(ctx, 2));
    // 0x37708c: 0x9623004a  lhu         $v1, 0x4A($s1)
    ctx->pc = 0x37708cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x377090: 0xa6000074  sh          $zero, 0x74($s0)
    ctx->pc = 0x377090u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 116), (uint16_t)GPR_U32(ctx, 0));
    // 0x377094: 0xa6030072  sh          $v1, 0x72($s0)
    ctx->pc = 0x377094u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 114), (uint16_t)GPR_U32(ctx, 3));
    // 0x377098: 0xa6000076  sh          $zero, 0x76($s0)
    ctx->pc = 0x377098u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 118), (uint16_t)GPR_U32(ctx, 0));
    // 0x37709c: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x37709cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x3770a0: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x3770a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x3770a4: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3770a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x3770a8: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x3770a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x3770ac: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x3770acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x3770b0: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x3770b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x3770b4: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x3770b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x3770b8: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x3770b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    // 0x3770bc: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x3770bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x3770c0: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x3770c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x3770c4: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x3770c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x3770c8: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x3770c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
    // 0x3770cc: 0x0  nop
    ctx->pc = 0x3770ccu;
    // NOP
label_3770d0:
    // 0x3770d0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3770d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3770d4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3770d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3770d8: 0x2e620008  sltiu       $v0, $s3, 0x8
    ctx->pc = 0x3770d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3770dc: 0x0  nop
    ctx->pc = 0x3770dcu;
    // NOP
    // 0x3770e0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3770E0u;
    {
        const bool branch_taken_0x3770e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3770E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3770E0u;
        // 0x3770e4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3770e0) {
            ctx->pc = 0x3770D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3770d0;
        }
    }
    ctx->pc = 0x3770E8u;
    // 0x3770e8: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x3770e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x3770ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3770ECu;
    {
        const bool branch_taken_0x3770ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3770F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3770ECu;
        // 0x3770f0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3770ec) {
            ctx->pc = 0x377118u;
            goto label_377118;
        }
    }
    ctx->pc = 0x3770F4u;
    // 0x3770f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3770f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3770f8:
    // 0x3770f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3770f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3770fc: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x3770fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x377100: 0xc0ddc54  jal         func_377150
    ctx->pc = 0x377100u;
    SET_GPR_U32(ctx, 31, 0x377108u);
    ctx->pc = 0x377104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377100u;
    // 0x377104: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377150u, 0x377100u, 0x377108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377108u;
label_377108:
    // 0x377108: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x377108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x37710c: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x37710cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x377110: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x377110u;
    {
        const bool branch_taken_0x377110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x377114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377110u;
        // 0x377114: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377110) {
            ctx->pc = 0x3770F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3770f8;
        }
    }
    ctx->pc = 0x377118u;
label_377118:
    // 0x377118: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x377118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37711c:
    // 0x37711c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x37711cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x377120: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x377120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x377124: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x377124u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x377128: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x377128u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37712c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x37712cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x377130: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x377130u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x377134: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x377134u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x377138: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x377138u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37713c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x37713cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377140: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x377140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377144: 0x3e00008  jr          $ra
    ctx->pc = 0x377144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377144u;
        // 0x377148: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37714Cu;
    // 0x37714c: 0x0  nop
    ctx->pc = 0x37714cu;
    // NOP
    ctx->pc = 0x377150u;
}
