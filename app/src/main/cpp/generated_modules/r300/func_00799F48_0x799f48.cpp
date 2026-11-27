#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "r300_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r300
{
// Function: func_00799F48
// Address: 0x799f48 - 0x79a0e8
void func_00799F48_0x799f48(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799F48_0x799f48");
#endif

    if (__builtin_expect(ctx->pc != 0x799f48u, 0)) {
        switch (ctx->pc) {
            case 0x799f70u: goto label_799f70;
            case 0x799f80u: goto label_799f80;
            case 0x799f8cu: goto label_799f8c;
            case 0x799fb0u: goto label_799fb0;
            case 0x799fb8u: goto label_799fb8;
            case 0x799fdcu: goto label_799fdc;
            case 0x799fe4u: goto label_799fe4;
            case 0x79a008u: goto label_79a008;
            case 0x79a010u: goto label_79a010;
            case 0x79a034u: goto label_79a034;
            case 0x79a03cu: goto label_79a03c;
            case 0x79a060u: goto label_79a060;
            case 0x79a068u: goto label_79a068;
            case 0x79a08cu: goto label_79a08c;
            case 0x79a094u: goto label_79a094;
            case 0x79a0b8u: goto label_79a0b8;
            case 0x79a0c0u: goto label_79a0c0;
            default: break;
        }
    }



    // 0x799f48: 0x27bdff50  addiu       $sp, $sp, -0xB0
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x799f4c: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f50: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x799f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x799f54: 0x3c100058  lui         $s0, 0x58
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x799f58: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x799f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x799f5c: 0x26106ab0  addiu       $s0, $s0, 0x6AB0
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    // 0x799f60: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x799f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x799f64: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x799f64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x799f68: 0xc0a54b4  jal         func_2952D0
    SET_GPR_U32(ctx, 31, 0x799F70u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F68u;
    // 0x799f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmSetParam_setEm_0x2952d0, 0x2952D0u, 0x799F70u)) {
        return;
    }
label_799f70:
    // 0x799f70: 0x3c11007a  lui         $s1, 0x7A
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x799f74: 0x3a0202d  daddu       $a0, $sp, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f78: 0xc0a578e  jal         func_295E38
    SET_GPR_U32(ctx, 31, 0x799F80u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F78u;
    // 0x799f7c: 0x240503d9  addiu       $a1, $zero, 0x3D9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 985));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmWrap_setDropItem_0x295e38, 0x295E38u, 0x799F80u)) {
        return;
    }
label_799f80:
    // 0x799f80: 0x3a0202d  daddu       $a0, $sp, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f84: 0xc0a57b8  jal         func_295EE0
    SET_GPR_U32(ctx, 31, 0x799F8Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F84u;
    // 0x799f88: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295EE0u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmWrap_SetRaderType_0x295ee0, 0x295EE0u, 0x799F8Cu)) {
        return;
    }
label_799f8c:
    // 0x799f8c: 0x8e23ae80  lw          $v1, -0x5180($s1)
    ctx->pc = 0x799f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
    // 0x799f90: 0x24060001  addiu       $a2, $zero, 0x1
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799f94: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799f98: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f9c: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x799f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x799fa0: 0x24420001  addiu       $v0, $v0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799fa4: 0xac620114  sw          $v0, 0x114($v1)
    ctx->pc = 0x799fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 2));
    // 0x799fa8: 0xc0a54b4  jal         func_2952D0
    SET_GPR_U32(ctx, 31, 0x799FB0u);
    ctx->pc = 0x799FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FA8u;
    // 0x799fac: 0xa3a60010  sb          $a2, 0x10($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmSetParam_setEm_0x2952d0, 0x2952D0u, 0x799FB0u)) {
        return;
    }
label_799fb0:
    // 0x799fb0: 0xc0a573a  jal         func_295CE8
    SET_GPR_U32(ctx, 31, 0x799FB8u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FB0u;
    // 0x799fb4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmWrap_StartAction_0x295ce8, 0x295CE8u, 0x799FB8u)) {
        return;
    }
label_799fb8:
    // 0x799fb8: 0x8e23ae80  lw          $v1, -0x5180($s1)
    ctx->pc = 0x799fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
    // 0x799fbc: 0x24060002  addiu       $a2, $zero, 0x2
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799fc0: 0x24050002  addiu       $a1, $zero, 0x2
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799fc4: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fc8: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x799fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x799fcc: 0x24420001  addiu       $v0, $v0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799fd0: 0xac620114  sw          $v0, 0x114($v1)
    ctx->pc = 0x799fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 2));
    // 0x799fd4: 0xc0a54b4  jal         func_2952D0
    SET_GPR_U32(ctx, 31, 0x799FDCu);
    ctx->pc = 0x799FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FD4u;
    // 0x799fd8: 0xa3a60020  sb          $a2, 0x20($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmSetParam_setEm_0x2952d0, 0x2952D0u, 0x799FDCu)) {
        return;
    }
label_799fdc:
    // 0x799fdc: 0xc0a573a  jal         func_295CE8
    SET_GPR_U32(ctx, 31, 0x799FE4u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FDCu;
    // 0x799fe0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmWrap_StartAction_0x295ce8, 0x295CE8u, 0x799FE4u)) {
        return;
    }
label_799fe4:
    // 0x799fe4: 0x8e23ae80  lw          $v1, -0x5180($s1)
    ctx->pc = 0x799fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
    // 0x799fe8: 0x24060003  addiu       $a2, $zero, 0x3
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799fec: 0x24050003  addiu       $a1, $zero, 0x3
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799ff0: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ff4: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x799ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x799ff8: 0x24420001  addiu       $v0, $v0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799ffc: 0xac620114  sw          $v0, 0x114($v1)
    ctx->pc = 0x799ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 2));
    // 0x79a000: 0xc0a54b4  jal         func_2952D0
    SET_GPR_U32(ctx, 31, 0x79A008u);
    ctx->pc = 0x79A004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A000u;
    // 0x79a004: 0xa3a60030  sb          $a2, 0x30($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmSetParam_setEm_0x2952d0, 0x2952D0u, 0x79A008u)) {
        return;
    }
label_79a008:
    // 0x79a008: 0xc0a573a  jal         func_295CE8
    SET_GPR_U32(ctx, 31, 0x79A010u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A008u;
    // 0x79a00c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmWrap_StartAction_0x295ce8, 0x295CE8u, 0x79A010u)) {
        return;
    }
label_79a010:
    // 0x79a010: 0x8e23ae80  lw          $v1, -0x5180($s1)
    ctx->pc = 0x79a010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
    // 0x79a014: 0x24060004  addiu       $a2, $zero, 0x4
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a018: 0x24050004  addiu       $a1, $zero, 0x4
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a01c: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a020: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x79a020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x79a024: 0x24420001  addiu       $v0, $v0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a028: 0xac620114  sw          $v0, 0x114($v1)
    ctx->pc = 0x79a028u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 2));
    // 0x79a02c: 0xc0a54b4  jal         func_2952D0
    SET_GPR_U32(ctx, 31, 0x79A034u);
    ctx->pc = 0x79A030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A02Cu;
    // 0x79a030: 0xa3a60040  sb          $a2, 0x40($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmSetParam_setEm_0x2952d0, 0x2952D0u, 0x79A034u)) {
        return;
    }
label_79a034:
    // 0x79a034: 0xc0a573a  jal         func_295CE8
    SET_GPR_U32(ctx, 31, 0x79A03Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A034u;
    // 0x79a038: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmWrap_StartAction_0x295ce8, 0x295CE8u, 0x79A03Cu)) {
        return;
    }
label_79a03c:
    // 0x79a03c: 0x8e23ae80  lw          $v1, -0x5180($s1)
    ctx->pc = 0x79a03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
    // 0x79a040: 0x24060005  addiu       $a2, $zero, 0x5
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a044: 0x24050005  addiu       $a1, $zero, 0x5
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a048: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a04c: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x79a04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x79a050: 0x24420001  addiu       $v0, $v0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a054: 0xac620114  sw          $v0, 0x114($v1)
    ctx->pc = 0x79a054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 2));
    // 0x79a058: 0xc0a54b4  jal         func_2952D0
    SET_GPR_U32(ctx, 31, 0x79A060u);
    ctx->pc = 0x79A05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A058u;
    // 0x79a05c: 0xa3a60050  sb          $a2, 0x50($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmSetParam_setEm_0x2952d0, 0x2952D0u, 0x79A060u)) {
        return;
    }
label_79a060:
    // 0x79a060: 0xc0a573a  jal         func_295CE8
    SET_GPR_U32(ctx, 31, 0x79A068u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A060u;
    // 0x79a064: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmWrap_StartAction_0x295ce8, 0x295CE8u, 0x79A068u)) {
        return;
    }
label_79a068:
    // 0x79a068: 0x8e23ae80  lw          $v1, -0x5180($s1)
    ctx->pc = 0x79a068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
    // 0x79a06c: 0x24060006  addiu       $a2, $zero, 0x6
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79a070: 0x24050006  addiu       $a1, $zero, 0x6
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79a074: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a078: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x79a078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x79a07c: 0x24420001  addiu       $v0, $v0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a080: 0xac620114  sw          $v0, 0x114($v1)
    ctx->pc = 0x79a080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 2));
    // 0x79a084: 0xc0a54b4  jal         func_2952D0
    SET_GPR_U32(ctx, 31, 0x79A08Cu);
    ctx->pc = 0x79A088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A084u;
    // 0x79a088: 0xa3a60060  sb          $a2, 0x60($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmSetParam_setEm_0x2952d0, 0x2952D0u, 0x79A08Cu)) {
        return;
    }
label_79a08c:
    // 0x79a08c: 0xc0a573a  jal         func_295CE8
    SET_GPR_U32(ctx, 31, 0x79A094u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A08Cu;
    // 0x79a090: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmWrap_StartAction_0x295ce8, 0x295CE8u, 0x79A094u)) {
        return;
    }
label_79a094:
    // 0x79a094: 0x8e23ae80  lw          $v1, -0x5180($s1)
    ctx->pc = 0x79a094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
    // 0x79a098: 0x24060007  addiu       $a2, $zero, 0x7
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79a09c: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0a0: 0x24050007  addiu       $a1, $zero, 0x7
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79a0a4: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x79a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x79a0a8: 0x24420001  addiu       $v0, $v0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a0ac: 0xac620114  sw          $v0, 0x114($v1)
    ctx->pc = 0x79a0acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 2));
    // 0x79a0b0: 0xc0a54b4  jal         func_2952D0
    SET_GPR_U32(ctx, 31, 0x79A0B8u);
    ctx->pc = 0x79A0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0B0u;
    // 0x79a0b4: 0xa3a60070  sb          $a2, 0x70($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmSetParam_setEm_0x2952d0, 0x2952D0u, 0x79A0B8u)) {
        return;
    }
label_79a0b8:
    // 0x79a0b8: 0xc0a573a  jal         func_295CE8
    SET_GPR_U32(ctx, 31, 0x79A0C0u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0B8u;
    // 0x79a0bc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmWrap_StartAction_0x295ce8, 0x295CE8u, 0x79A0C0u)) {
        return;
    }
label_79a0c0:
    // 0x79a0c0: 0x8e23ae80  lw          $v1, -0x5180($s1)
    ctx->pc = 0x79a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
    // 0x79a0c4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x79a0c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79a0c8: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x79a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x79a0cc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x79a0ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79a0d0: 0x24420001  addiu       $v0, $v0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a0d4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x79a0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79a0d8: 0xac620114  sw          $v0, 0x114($v1)
    ctx->pc = 0x79a0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 2));
    // 0x79a0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x79A0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0DCu;
        // 0x79a0e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x79a0e4: 0x0  nop
    // NOP
    ctx->pc = 0x79a0e8u;
}
} // namespace gh_r300
