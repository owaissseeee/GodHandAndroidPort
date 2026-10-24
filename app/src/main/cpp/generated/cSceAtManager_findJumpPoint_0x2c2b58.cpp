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

// Function: cSceAtManager_findJumpPoint
// Address: 0x2c2b58 - 0x2c2d20
void cSceAtManager_findJumpPoint_0x2c2b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtManager_findJumpPoint_0x2c2b58");
#endif

    switch (ctx->pc) {
        case 0x2c2bacu: goto label_2c2bac;
        case 0x2c2bd0u: goto label_2c2bd0;
        case 0x2c2bfcu: goto label_2c2bfc;
        case 0x2c2c08u: goto label_2c2c08;
        case 0x2c2c24u: goto label_2c2c24;
        case 0x2c2cd8u: goto label_2c2cd8;
        default: break;
    }

    ctx->pc = 0x2c2b58u;

    // 0x2c2b58: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2c2b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2c2b5c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2c2b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x2c2b60: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x2c2b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x2c2b64: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c2b64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2b68: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x2c2b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x2c2b6c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2c2b6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2b70: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2c2b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x2c2b74: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2c2b74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2b78: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2c2b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x2c2b7c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x2c2b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x2c2b80: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2c2b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2c2b84: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2c2b84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2b88: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x2c2b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x2c2b8c: 0x3c170074  lui         $s7, 0x74
    ctx->pc = 0x2c2b8cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)116 << 16));
    // 0x2c2b90: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x2c2b90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2c2b94: 0x3c1e0045  lui         $fp, 0x45
    ctx->pc = 0x2c2b94u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)69 << 16));
    // 0x2c2b98: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x2c2b98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2c2b9c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2c2b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x2c2ba0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c2ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c2ba4: 0xc0b0c30  jal         func_2C30C0
    ctx->pc = 0x2C2BA4u;
    SET_GPR_U32(ctx, 31, 0x2C2BACu);
    ctx->pc = 0x2C2BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2BA4u;
    // 0x2c2ba8: 0xafa70040  sw          $a3, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C30C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C30C0u, 0x2C2BA4u, 0x2C2BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2BACu;
label_2c2bac:
    // 0x2c2bac: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2c2bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2c2bb0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2c2bb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2c2bb4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2c2bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c2bb8: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2c2bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2c2bbc: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x2c2bbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x2c2bc0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2c2bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2c2bc4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2c2bc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c2bc8: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2C2BC8u;
    {
        const bool branch_taken_0x2c2bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2BC8u;
        // 0x2c2bcc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2bc8) {
            ctx->pc = 0x2C2CCCu;
            goto label_2c2ccc;
        }
    }
    ctx->pc = 0x2C2BD0u;
label_2c2bd0:
    // 0x2c2bd0: 0x1456003f  bne         $v0, $s6, . + 4 + (0x3F << 2)
    ctx->pc = 0x2C2BD0u;
    {
        const bool branch_taken_0x2c2bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x2C2BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2BD0u;
        // 0x2c2bd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2bd0) {
            ctx->pc = 0x2C2CD0u;
            goto label_2c2cd0;
        }
    }
    ctx->pc = 0x2C2BD8u;
    // 0x2c2bd8: 0x9211007a  lbu         $s1, 0x7A($s0)
    ctx->pc = 0x2c2bd8u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 122)));
    // 0x2c2bdc: 0x1622003c  bne         $s1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2C2BDCu;
    {
        const bool branch_taken_0x2c2bdc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c2bdc) {
            ctx->pc = 0x2C2CD0u;
            goto label_2c2cd0;
        }
    }
    ctx->pc = 0x2C2BE4u;
    // 0x2c2be4: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x2c2be4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2c2be8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2c2be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c2bec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c2becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2bf0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c2bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2bf4: 0xc0b075a  jal         func_2C1D68
    ctx->pc = 0x2C2BF4u;
    SET_GPR_U32(ctx, 31, 0x2C2BFCu);
    ctx->pc = 0x2C2BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2BF4u;
    // 0x2c2bf8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1D68u, 0x2C2BF4u, 0x2C2BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2BFCu;
label_2c2bfc:
    // 0x2c2bfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c2bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2c00: 0xc07e0fa  jal         func_1F83E8
    ctx->pc = 0x2C2C00u;
    SET_GPR_U32(ctx, 31, 0x2C2C08u);
    ctx->pc = 0x2C2C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2C00u;
    // 0x2c2c04: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F83E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F83E8u, 0x2C2C00u, 0x2C2C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2C08u;
label_2c2c08:
    // 0x2c2c08: 0x14510031  bne         $v0, $s1, . + 4 + (0x31 << 2)
    ctx->pc = 0x2C2C08u;
    {
        const bool branch_taken_0x2c2c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2C2C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C08u;
        // 0x2c2c0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2c08) {
            ctx->pc = 0x2C2CD0u;
            goto label_2c2cd0;
        }
    }
    ctx->pc = 0x2C2C10u;
    // 0x2c2c10: 0x26f174a0  addiu       $s1, $s7, 0x74A0
    ctx->pc = 0x2c2c10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
    // 0x2c2c14: 0x27c5c230  addiu       $a1, $fp, -0x3DD0
    ctx->pc = 0x2c2c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294951472));
    // 0x2c2c18: 0x8e2405ac  lw          $a0, 0x5AC($s1)
    ctx->pc = 0x2c2c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1452)));
    // 0x2c2c1c: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2C2C1Cu;
    SET_GPR_U32(ctx, 31, 0x2C2C24u);
    ctx->pc = 0x2C2C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2C1Cu;
    // 0x2c2c20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2C2C1Cu, 0x2C2C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2C24u;
label_2c2c24:
    // 0x2c2c24: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c2c24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2c28: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2C2C28u;
    {
        const bool branch_taken_0x2c2c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C28u;
        // 0x2c2c2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2c28) {
            ctx->pc = 0x2C2CE8u;
            goto label_2c2ce8;
        }
    }
    ctx->pc = 0x2C2C30u;
    // 0x2c2c30: 0x92050079  lbu         $a1, 0x79($s0)
    ctx->pc = 0x2c2c30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 121)));
    // 0x2c2c34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c2c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c2c38: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2c2c38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c2c3c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2C2C3Cu;
    {
        const bool branch_taken_0x2c2c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C3Cu;
        // 0x2c2c40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2c3c) {
            ctx->pc = 0x2C2CE8u;
            goto label_2c2ce8;
        }
    }
    ctx->pc = 0x2C2C44u;
    // 0x2c2c44: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2c2c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c2c48: 0xa41018  mult        $v0, $a1, $a0
    ctx->pc = 0x2c2c48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c2c4c: 0x962405b0  lhu         $a0, 0x5B0($s1)
    ctx->pc = 0x2c2c4cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1456)));
    // 0x2c2c50: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2c2c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c2c54: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x2c2c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c2c58: 0x84c30008  lh          $v1, 0x8($a2)
    ctx->pc = 0x2c2c58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2c2c5c: 0x14640021  bne         $v1, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C2C5Cu;
    {
        const bool branch_taken_0x2c2c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C2C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C5Cu;
        // 0x2c2c60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2c5c) {
            ctx->pc = 0x2C2CE4u;
            goto label_2c2ce4;
        }
    }
    ctx->pc = 0x2C2C64u;
    // 0x2c2c64: 0x84c30002  lh          $v1, 0x2($a2)
    ctx->pc = 0x2c2c64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c2c68: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x2c2c68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c2c6c: 0x84c40004  lh          $a0, 0x4($a2)
    ctx->pc = 0x2c2c6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2c2c70: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c2c70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c2c74: 0x0  nop
    ctx->pc = 0x2c2c74u;
    // NOP
    // 0x2c2c78: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c2c78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c2c7c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2c2c7cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2c80: 0x0  nop
    ctx->pc = 0x2c2c80u;
    // NOP
    // 0x2c2c84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c2c84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c2c88: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2c2c88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c2c8c: 0x0  nop
    ctx->pc = 0x2c2c8cu;
    // NOP
    // 0x2c2c90: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c2c90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c2c94: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2c2c94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2c2c98: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2c2c98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2c2c9c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2c2c9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2c2ca0: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x2c2ca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x2c2ca4: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x2c2ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x2c2ca8: 0xe6820008  swc1        $f2, 0x8($s4)
    ctx->pc = 0x2c2ca8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x2c2cac: 0x84c30006  lh          $v1, 0x6($a2)
    ctx->pc = 0x2c2cacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x2c2cb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2cb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2cb4: 0x0  nop
    ctx->pc = 0x2c2cb4u;
    // NOP
    // 0x2c2cb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c2cb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c2cbc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2c2cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c2cc0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2c2cc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2c2cc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C2CC4u;
    {
        const bool branch_taken_0x2c2cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2CC4u;
        // 0x2c2cc8: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2cc4) {
            ctx->pc = 0x2C2CE8u;
            goto label_2c2ce8;
        }
    }
    ctx->pc = 0x2C2CCCu;
label_2c2ccc:
    // 0x2c2ccc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c2cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2cd0:
    // 0x2c2cd0: 0xc0b0c32  jal         func_2C30C8
    ctx->pc = 0x2C2CD0u;
    SET_GPR_U32(ctx, 31, 0x2C2CD8u);
    ctx->pc = 0x2C2CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2CD0u;
    // 0x2c2cd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C30C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C30C8u, 0x2C2CD0u, 0x2C2CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2CD8u;
label_2c2cd8:
    // 0x2c2cd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c2cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2cdc: 0x5600ffbc  bnel        $s0, $zero, . + 4 + (-0x44 << 2)
    ctx->pc = 0x2C2CDCu;
    {
        const bool branch_taken_0x2c2cdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2cdc) {
            ctx->pc = 0x2C2CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2CDCu;
            // 0x2c2ce0: 0x92020035  lbu         $v0, 0x35($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2bd0;
        }
    }
    ctx->pc = 0x2C2CE4u;
label_2c2ce4:
    // 0x2c2ce4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2ce8:
    // 0x2c2ce8: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2c2ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c2cec: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2c2cecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c2cf0: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2c2cf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c2cf4: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2c2cf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c2cf8: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x2c2cf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c2cfc: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x2c2cfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c2d00: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2c2d00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c2d04: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2c2d04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c2d08: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x2c2d08u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c2d0c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c2d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c2d10: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x2c2d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c2d14: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2c2d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c2d18: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2D18u;
        // 0x2c2d1c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2D20u;
}
