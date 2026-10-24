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

// Function: func_0030CF10
// Address: 0x30cf10 - 0x30d168
void func_0030CF10_0x30cf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030CF10_0x30cf10");
#endif

    switch (ctx->pc) {
        case 0x30cf80u: goto label_30cf80;
        case 0x30cfd8u: goto label_30cfd8;
        case 0x30d038u: goto label_30d038;
        case 0x30d0a4u: goto label_30d0a4;
        case 0x30d108u: goto label_30d108;
        default: break;
    }

    ctx->pc = 0x30cf10u;

    // 0x30cf10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x30cf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x30cf14: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x30cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x30cf18: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x30cf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x30cf1c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x30cf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x30cf20: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x30cf20u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x30cf24: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x30cf24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x30cf28: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x30cf28u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x30cf2c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x30cf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x30cf30: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x30cf30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30cf34: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x30cf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x30cf38: 0x24502780  addiu       $s0, $v0, 0x2780
    ctx->pc = 0x30cf38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10112));
    // 0x30cf3c: 0x96251180  lhu         $a1, 0x1180($s1)
    ctx->pc = 0x30cf3cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x3C1180u));
    // 0x30cf40: 0x241400ff  addiu       $s4, $zero, 0xFF
    ctx->pc = 0x30cf40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x30cf44: 0x9663118c  lhu         $v1, 0x118C($s3)
    ctx->pc = 0x30cf44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x3C118Cu));
    // 0x30cf48: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x30cf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x30cf4c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x30cf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x30cf50: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x30cf50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30cf54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30cf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30cf58: 0x3416c000  ori         $s6, $zero, 0xC000
    ctx->pc = 0x30cf58u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x30cf5c: 0x16b4f8  dsll        $s6, $s6, 19
    ctx->pc = 0x30cf5cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << 19);
    // 0x30cf60: 0x8e241180  lw          $a0, 0x1180($s1)
    ctx->pc = 0x30cf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x30cf64: 0xa0552780  sb          $s5, 0x2780($v0)
    ctx->pc = 0x30cf64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10112), (uint8_t)GPR_U32(ctx, 21));
    // 0x30cf68: 0xa6050004  sh          $a1, 0x4($s0)
    ctx->pc = 0x30cf68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x30cf6c: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x30cf6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x30cf70: 0xa2140001  sb          $s4, 0x1($s0)
    ctx->pc = 0x30cf70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 20));
    // 0x30cf74: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x30cf74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30cf78: 0xc0c2750  jal         func_309D40
    ctx->pc = 0x30CF78u;
    SET_GPR_U32(ctx, 31, 0x30CF80u);
    ctx->pc = 0x30CF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CF78u;
    // 0x30cf7c: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309D40u, 0x30CF78u, 0x30CF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CF80u;
label_30cf80:
    // 0x30cf80: 0x8e241180  lw          $a0, 0x1180($s1)
    ctx->pc = 0x30cf80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x30cf84: 0xfe000020  sd          $zero, 0x20($s0)
    ctx->pc = 0x30cf84u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 0));
    // 0x30cf88: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x30cf88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x30cf8c: 0x2486003f  addiu       $a2, $a0, 0x3F
    ctx->pc = 0x30cf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x30cf90: 0x2483007e  addiu       $v1, $a0, 0x7E
    ctx->pc = 0x30cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 126));
    // 0x30cf94: 0x246282a  slt         $a1, $s2, $a2
    ctx->pc = 0x30cf94u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x30cf98: 0x96281180  lhu         $t0, 0x1180($s1)
    ctx->pc = 0x30cf98u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x30cf9c: 0xc5180b  movn        $v1, $a2, $a1
    ctx->pc = 0x30cf9cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x30cfa0: 0x9667118c  lhu         $a3, 0x118C($s3)
    ctx->pc = 0x30cfa0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4492)));
    // 0x30cfa4: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x30cfa4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x30cfa8: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x30cfa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x30cfac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30cfacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30cfb0: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x30cfb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
    // 0x30cfb4: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x30cfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x30cfb8: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x30cfb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x30cfbc: 0xa6080004  sh          $t0, 0x4($s0)
    ctx->pc = 0x30cfbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 8));
    // 0x30cfc0: 0xa6070006  sh          $a3, 0x6($s0)
    ctx->pc = 0x30cfc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 7));
    // 0x30cfc4: 0xa2150000  sb          $s5, 0x0($s0)
    ctx->pc = 0x30cfc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x30cfc8: 0xa2140001  sb          $s4, 0x1($s0)
    ctx->pc = 0x30cfc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 20));
    // 0x30cfcc: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x30cfccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30cfd0: 0xc0c2750  jal         func_309D40
    ctx->pc = 0x30CFD0u;
    SET_GPR_U32(ctx, 31, 0x30CFD8u);
    ctx->pc = 0x30CFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CFD0u;
    // 0x30cfd4: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309D40u, 0x30CFD0u, 0x30CFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CFD8u;
label_30cfd8:
    // 0x30cfd8: 0x8e241180  lw          $a0, 0x1180($s1)
    ctx->pc = 0x30cfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x30cfdc: 0x24070e00  addiu       $a3, $zero, 0xE00
    ctx->pc = 0x30cfdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x30cfe0: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x30cfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x30cfe4: 0x2486003f  addiu       $a2, $a0, 0x3F
    ctx->pc = 0x30cfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x30cfe8: 0x2483007e  addiu       $v1, $a0, 0x7E
    ctx->pc = 0x30cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 126));
    // 0x30cfec: 0x246282a  slt         $a1, $s2, $a2
    ctx->pc = 0x30cfecu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x30cff0: 0xfe000020  sd          $zero, 0x20($s0)
    ctx->pc = 0x30cff0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 0));
    // 0x30cff4: 0xc5180b  movn        $v1, $a2, $a1
    ctx->pc = 0x30cff4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x30cff8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x30cff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x30cffc: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x30cffcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x30d000: 0x96261180  lhu         $a2, 0x1180($s1)
    ctx->pc = 0x30d000u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x30d004: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x30d004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x30d008: 0x9665118c  lhu         $a1, 0x118C($s3)
    ctx->pc = 0x30d008u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4492)));
    // 0x30d00c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30d00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30d010: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x30d010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
    // 0x30d014: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x30d014u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x30d018: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x30d018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x30d01c: 0xa6060004  sh          $a2, 0x4($s0)
    ctx->pc = 0x30d01cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x30d020: 0xa6050006  sh          $a1, 0x6($s0)
    ctx->pc = 0x30d020u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x30d024: 0xa2150000  sb          $s5, 0x0($s0)
    ctx->pc = 0x30d024u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x30d028: 0xa2140001  sb          $s4, 0x1($s0)
    ctx->pc = 0x30d028u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 20));
    // 0x30d02c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x30d02cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d030: 0xc0c2750  jal         func_309D40
    ctx->pc = 0x30D030u;
    SET_GPR_U32(ctx, 31, 0x30D038u);
    ctx->pc = 0x30D034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D030u;
    // 0x30d034: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309D40u, 0x30D030u, 0x30D038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D038u;
label_30d038:
    // 0x30d038: 0x8e241180  lw          $a0, 0x1180($s1)
    ctx->pc = 0x30d038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x30d03c: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x30d03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x30d040: 0x3c0700a0  lui         $a3, 0xA0
    ctx->pc = 0x30d040u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)160 << 16));
    // 0x30d044: 0x34e71f00  ori         $a3, $a3, 0x1F00
    ctx->pc = 0x30d044u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)7936);
    // 0x30d048: 0x2486003f  addiu       $a2, $a0, 0x3F
    ctx->pc = 0x30d048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x30d04c: 0x2483007e  addiu       $v1, $a0, 0x7E
    ctx->pc = 0x30d04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 126));
    // 0x30d050: 0x246282a  slt         $a1, $s2, $a2
    ctx->pc = 0x30d050u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x30d054: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x30d054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x30d058: 0xc5180b  movn        $v1, $a2, $a1
    ctx->pc = 0x30d058u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x30d05c: 0xfe000020  sd          $zero, 0x20($s0)
    ctx->pc = 0x30d05cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 0));
    // 0x30d060: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x30d060u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x30d064: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x30d064u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x30d068: 0x73cf8  dsll        $a3, $a3, 19
    ctx->pc = 0x30d068u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 19);
    // 0x30d06c: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x30d06cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x30d070: 0x96251180  lhu         $a1, 0x1180($s1)
    ctx->pc = 0x30d070u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x30d074: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30d074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30d078: 0x9662118c  lhu         $v0, 0x118C($s3)
    ctx->pc = 0x30d078u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4492)));
    // 0x30d07c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x30d07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x30d080: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x30d080u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x30d084: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x30d084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x30d088: 0xa6050004  sh          $a1, 0x4($s0)
    ctx->pc = 0x30d088u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x30d08c: 0xa2150000  sb          $s5, 0x0($s0)
    ctx->pc = 0x30d08cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x30d090: 0xa2140001  sb          $s4, 0x1($s0)
    ctx->pc = 0x30d090u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 20));
    // 0x30d094: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x30d094u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x30d098: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x30d098u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d09c: 0xc0c2750  jal         func_309D40
    ctx->pc = 0x30D09Cu;
    SET_GPR_U32(ctx, 31, 0x30D0A4u);
    ctx->pc = 0x30D0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D09Cu;
    // 0x30d0a0: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309D40u, 0x30D09Cu, 0x30D0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D0A4u;
label_30d0a4:
    // 0x30d0a4: 0x8e241180  lw          $a0, 0x1180($s1)
    ctx->pc = 0x30d0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x30d0a8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x30d0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x30d0ac: 0x9c6511ac  lwu         $a1, 0x11AC($v1)
    ctx->pc = 0x30d0acu;
    SET_GPR_ZE32(ctx, 5, FAST_READ32(0x3C11ACu));
    // 0x30d0b0: 0x2487003f  addiu       $a3, $a0, 0x3F
    ctx->pc = 0x30d0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x30d0b4: 0x2483007e  addiu       $v1, $a0, 0x7E
    ctx->pc = 0x30d0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 126));
    // 0x30d0b8: 0x247302a  slt         $a2, $s2, $a3
    ctx->pc = 0x30d0b8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x30d0bc: 0x9668118c  lhu         $t0, 0x118C($s3)
    ctx->pc = 0x30d0bcu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4492)));
    // 0x30d0c0: 0xe6180b  movn        $v1, $a3, $a2
    ctx->pc = 0x30d0c0u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x30d0c4: 0xfe000020  sd          $zero, 0x20($s0)
    ctx->pc = 0x30d0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 0));
    // 0x30d0c8: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x30d0c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x30d0cc: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x30d0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x30d0d0: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x30d0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x30d0d4: 0x96261180  lhu         $a2, 0x1180($s1)
    ctx->pc = 0x30d0d4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x30d0d8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x30d0d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x30d0dc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x30d0dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x30d0e0: 0xb62825  or          $a1, $a1, $s6
    ctx->pc = 0x30d0e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 22));
    // 0x30d0e4: 0xfe050018  sd          $a1, 0x18($s0)
    ctx->pc = 0x30d0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 5));
    // 0x30d0e8: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x30d0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x30d0ec: 0xa2150000  sb          $s5, 0x0($s0)
    ctx->pc = 0x30d0ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x30d0f0: 0xa2140001  sb          $s4, 0x1($s0)
    ctx->pc = 0x30d0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 20));
    // 0x30d0f4: 0xa6060004  sh          $a2, 0x4($s0)
    ctx->pc = 0x30d0f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x30d0f8: 0xa6080006  sh          $t0, 0x6($s0)
    ctx->pc = 0x30d0f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 8));
    // 0x30d0fc: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x30d0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d100: 0xc0c2750  jal         func_309D40
    ctx->pc = 0x30D100u;
    SET_GPR_U32(ctx, 31, 0x30D108u);
    ctx->pc = 0x30D104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D100u;
    // 0x30d104: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309D40u, 0x30D100u, 0x30D108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D108u;
label_30d108:
    // 0x30d108: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x30d108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x30d10c: 0x24051b00  addiu       $a1, $zero, 0x1B00
    ctx->pc = 0x30d10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6912));
    // 0x30d110: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x30d110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x30d114: 0x2464003f  addiu       $a0, $v1, 0x3F
    ctx->pc = 0x30d114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x30d118: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x30d118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x30d11c: 0x244902a  slt         $s2, $s2, $a0
    ctx->pc = 0x30d11cu;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x30d120: 0x2463007e  addiu       $v1, $v1, 0x7E
    ctx->pc = 0x30d120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 126));
    // 0x30d124: 0x92180b  movn        $v1, $a0, $s2
    ctx->pc = 0x30d124u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x30d128: 0xfe000020  sd          $zero, 0x20($s0)
    ctx->pc = 0x30d128u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 0));
    // 0x30d12c: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x30d12cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x30d130: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x30d130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30d134: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x30d134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x30d138: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x30d138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30d13c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30d13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30d140: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x30d140u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30d144: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x30d144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
    // 0x30d148: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x30d148u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30d14c: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x30d14cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x30d150: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x30d150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30d154: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x30d154u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d158: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x30d158u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d15c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30d15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d160: 0x3e00008  jr          $ra
    ctx->pc = 0x30D160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D160u;
        // 0x30d164: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D168u;
}
