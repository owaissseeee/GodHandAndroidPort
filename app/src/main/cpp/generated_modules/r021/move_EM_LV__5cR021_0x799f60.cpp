#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r021_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r021
{
// Function: move_EM_LV__5cR021
// Address: 0x799f60 - 0x79a498
void move_EM_LV__5cR021_0x799f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("move_EM_LV__5cR021_0x799f60");
#endif

    switch (ctx->pc) {
        case 0x799fd8u: goto label_799fd8;
        case 0x79a0ccu: goto label_79a0cc;
        case 0x79a0e4u: goto label_79a0e4;
        case 0x79a10cu: goto label_79a10c;
        case 0x79a124u: goto label_79a124;
        case 0x79a14cu: goto label_79a14c;
        case 0x79a164u: goto label_79a164;
        case 0x79a18cu: goto label_79a18c;
        case 0x79a1a4u: goto label_79a1a4;
        case 0x79a1c0u: goto label_79a1c0;
        case 0x79a1dcu: goto label_79a1dc;
        case 0x79a1f8u: goto label_79a1f8;
        case 0x79a214u: goto label_79a214;
        case 0x79a22cu: goto label_79a22c;
        case 0x79a240u: goto label_79a240;
        case 0x79a250u: goto label_79a250;
        case 0x79a260u: goto label_79a260;
        case 0x79a2c4u: goto label_79a2c4;
        case 0x79a364u: goto label_79a364;
        case 0x79a38cu: goto label_79a38c;
        case 0x79a39cu: goto label_79a39c;
        case 0x79a3acu: goto label_79a3ac;
        case 0x79a3bcu: goto label_79a3bc;
        case 0x79a410u: goto label_79a410;
        case 0x79a424u: goto label_79a424;
        case 0x79a438u: goto label_79a438;
        case 0x79a44cu: goto label_79a44c;
        default: break;
    }

    ctx->pc = 0x799f60u;

    // 0x799f60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x799f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x799f64: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x799f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x799f68: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x799f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x799f6c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x799f6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f70: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x799f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x799f74: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x799f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x799f78: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x799f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x799f7c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x799f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x799f80: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x799f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x799f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799f88: 0x86a30002  lh          $v1, 0x2($s5)
    ctx->pc = 0x799f88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x799f8c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x799f8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x799f90: 0x104000e0  beqz        $v0, . + 4 + (0xE0 << 2)
    ctx->pc = 0x799F90u;
    {
        const bool branch_taken_0x799f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F90u;
        // 0x799f94: 0x3c160074  lui         $s6, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f90) {
            ctx->pc = 0x79A314u;
            goto label_79a314;
        }
    }
    ctx->pc = 0x799F98u;
    // 0x799f98: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799f9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x799f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x799fa0: 0x2442bca0  addiu       $v0, $v0, -0x4360
    ctx->pc = 0x799fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950048));
    // 0x799fa4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x799fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x799fa8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x799fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799fac: 0x800008  jr          $a0
    ctx->pc = 0x799FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x799FB4u: goto label_799fb4;
            case 0x79A064u: goto label_79a064;
            case 0x79A0A4u: goto label_79a0a4;
            case 0x79A2ACu: goto label_79a2ac;
            case 0x79A300u: goto label_79a300;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799FACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x799FB4u;
label_799fb4:
    // 0x799fb4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799fb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fbc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799fc0: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x799fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x799fc4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799fc8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799fc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799fcc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799fccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fd0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799FD0u;
    SET_GPR_U32(ctx, 31, 0x799FD8u);
    ctx->pc = 0x799FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FD0u;
    // 0x799fd4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799FD0u, 0x799FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FD8u;
label_799fd8:
    // 0x799fd8: 0x8ea300a0  lw          $v1, 0xA0($s5)
    ctx->pc = 0x799fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
    // 0x799fdc: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x799fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x799fe0: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x799fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x799fe4: 0x240700c8  addiu       $a3, $zero, 0xC8
    ctx->pc = 0x799fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x799fe8: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x799fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
    // 0x799fec: 0x2408012c  addiu       $t0, $zero, 0x12C
    ctx->pc = 0x799fecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x799ff0: 0x3c09007a  lui         $t1, 0x7A
    ctx->pc = 0x799ff0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)122 << 16));
    // 0x799ff4: 0x8ea200a4  lw          $v0, 0xA4($s5)
    ctx->pc = 0x799ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 164)));
    // 0x799ff8: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x799ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x799ffc: 0x8ea300a8  lw          $v1, 0xA8($s5)
    ctx->pc = 0x799ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 168)));
    // 0x79a000: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x79a000u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
    // 0x79a004: 0x8ea200ac  lw          $v0, 0xAC($s5)
    ctx->pc = 0x79a004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 172)));
    // 0x79a008: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x79a008u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x79a00c: 0x8ea300b0  lw          $v1, 0xB0($s5)
    ctx->pc = 0x79a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x79a010: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x79a010u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
    // 0x79a014: 0x96a2012a  lhu         $v0, 0x12A($s5)
    ctx->pc = 0x79a014u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 298)));
    // 0x79a018: 0x8ea400c4  lw          $a0, 0xC4($s5)
    ctx->pc = 0x79a018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
    // 0x79a01c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x79a01cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x79a020: 0xac820084  sw          $v0, 0x84($a0)
    ctx->pc = 0x79a020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
    // 0x79a024: 0x96a3012a  lhu         $v1, 0x12A($s5)
    ctx->pc = 0x79a024u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 298)));
    // 0x79a028: 0x8ea400c8  lw          $a0, 0xC8($s5)
    ctx->pc = 0x79a028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 200)));
    // 0x79a02c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x79a02cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x79a030: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x79a030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x79a034: 0x96a2012a  lhu         $v0, 0x12A($s5)
    ctx->pc = 0x79a034u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 298)));
    // 0x79a038: 0x8ea400cc  lw          $a0, 0xCC($s5)
    ctx->pc = 0x79a038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
    // 0x79a03c: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x79a03cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x79a040: 0xac820084  sw          $v0, 0x84($a0)
    ctx->pc = 0x79a040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
    // 0x79a044: 0x96a3012a  lhu         $v1, 0x12A($s5)
    ctx->pc = 0x79a044u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 298)));
    // 0x79a048: 0x8ea200d0  lw          $v0, 0xD0($s5)
    ctx->pc = 0x79a048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 208)));
    // 0x79a04c: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x79a04cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x79a050: 0xac430084  sw          $v1, 0x84($v0)
    ctx->pc = 0x79a050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 3));
    // 0x79a054: 0xad20bba8  sw          $zero, -0x4458($t1)
    ctx->pc = 0x79a054u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294949800), GPR_U32(ctx, 0));
    // 0x79a058: 0x96a20002  lhu         $v0, 0x2($s5)
    ctx->pc = 0x79a058u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x79a05c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a060: 0xa6a20002  sh          $v0, 0x2($s5)
    ctx->pc = 0x79a060u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 2), (uint16_t)GPR_U32(ctx, 2));
label_79a064:
    // 0x79a064: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x79a064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x79a068: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x79a068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x79a06c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a06cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a070: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x79a070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a074: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x79a074u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x79a078: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x79a078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x79a07c: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x79a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x79a080: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x79a080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x79a084: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x79a084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a088: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x79a088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a08c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x79a08cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a090: 0x0  nop
    ctx->pc = 0x79a090u;
    // NOP
    // 0x79a094: 0x4500009f  bc1f        . + 4 + (0x9F << 2)
    ctx->pc = 0x79A094u;
    {
        const bool branch_taken_0x79a094 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A094u;
        // 0x79a098: 0x3c160074  lui         $s6, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a094) {
            ctx->pc = 0x79A314u;
            goto label_79a314;
        }
    }
    ctx->pc = 0x79A09Cu;
    // 0x79a09c: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x79A09Cu;
    {
        const bool branch_taken_0x79a09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A09Cu;
        // 0x79a0a0: 0xe4610038  swc1        $f1, 0x38($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a09c) {
            ctx->pc = 0x79A2F0u;
            goto label_79a2f0;
        }
    }
    ctx->pc = 0x79A0A4u;
label_79a0a4:
    // 0x79a0a4: 0x8ea300a0  lw          $v1, 0xA0($s5)
    ctx->pc = 0x79a0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
    // 0x79a0a8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x79a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x79a0ac: 0x24549b70  addiu       $s4, $v0, -0x6490
    ctx->pc = 0x79a0acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x79a0b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a0b4: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x79a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x79a0b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0bc: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x79a0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x79a0c0: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x79a0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    // 0x79a0c4: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x79A0C4u;
    SET_GPR_U32(ctx, 31, 0x79A0CCu);
    ctx->pc = 0x79A0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0C4u;
    // 0x79a0c8: 0x8eb000a0  lw          $s0, 0xA0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x79A0C4u, 0x79A0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0CCu;
label_79a0cc:
    // 0x79a0cc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x79a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x79a0d0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x79a0d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79a0d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A0D4u;
    {
        const bool branch_taken_0x79a0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0D4u;
        // 0x79a0d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0d4) {
            ctx->pc = 0x79A0ECu;
            goto label_79a0ec;
        }
    }
    ctx->pc = 0x79A0DCu;
    // 0x79a0dc: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x79A0DCu;
    SET_GPR_U32(ctx, 31, 0x79A0E4u);
    ctx->pc = 0x79A0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0DCu;
    // 0x79a0e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x79A0DCu, 0x79A0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0E4u;
label_79a0e4:
    // 0x79a0e4: 0x8ea300a0  lw          $v1, 0xA0($s5)
    ctx->pc = 0x79a0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
    // 0x79a0e8: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x79a0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
label_79a0ec:
    // 0x79a0ec: 0x8ea300a4  lw          $v1, 0xA4($s5)
    ctx->pc = 0x79a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 164)));
    // 0x79a0f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a0f8: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x79a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x79a0fc: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x79a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x79a100: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x79a100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    // 0x79a104: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x79A104u;
    SET_GPR_U32(ctx, 31, 0x79A10Cu);
    ctx->pc = 0x79A108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A104u;
    // 0x79a108: 0x8eb000a4  lw          $s0, 0xA4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x79A104u, 0x79A10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A10Cu;
label_79a10c:
    // 0x79a10c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x79a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x79a110: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x79a110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79a114: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A114u;
    {
        const bool branch_taken_0x79a114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A114u;
        // 0x79a118: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a114) {
            ctx->pc = 0x79A12Cu;
            goto label_79a12c;
        }
    }
    ctx->pc = 0x79A11Cu;
    // 0x79a11c: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x79A11Cu;
    SET_GPR_U32(ctx, 31, 0x79A124u);
    ctx->pc = 0x79A120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A11Cu;
    // 0x79a120: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x79A11Cu, 0x79A124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A124u;
label_79a124:
    // 0x79a124: 0x8ea300a4  lw          $v1, 0xA4($s5)
    ctx->pc = 0x79a124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 164)));
    // 0x79a128: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x79a128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
label_79a12c:
    // 0x79a12c: 0x8ea300a8  lw          $v1, 0xA8($s5)
    ctx->pc = 0x79a12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 168)));
    // 0x79a130: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a134: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x79a134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a138: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x79a138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x79a13c: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x79a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x79a140: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x79a140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    // 0x79a144: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x79A144u;
    SET_GPR_U32(ctx, 31, 0x79A14Cu);
    ctx->pc = 0x79A148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A144u;
    // 0x79a148: 0x8eb000a8  lw          $s0, 0xA8($s5) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x79A144u, 0x79A14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A14Cu;
label_79a14c:
    // 0x79a14c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x79a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x79a150: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x79a150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79a154: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A154u;
    {
        const bool branch_taken_0x79a154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A154u;
        // 0x79a158: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a154) {
            ctx->pc = 0x79A16Cu;
            goto label_79a16c;
        }
    }
    ctx->pc = 0x79A15Cu;
    // 0x79a15c: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x79A15Cu;
    SET_GPR_U32(ctx, 31, 0x79A164u);
    ctx->pc = 0x79A160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A15Cu;
    // 0x79a160: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x79A15Cu, 0x79A164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A164u;
label_79a164:
    // 0x79a164: 0x8ea300a8  lw          $v1, 0xA8($s5)
    ctx->pc = 0x79a164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 168)));
    // 0x79a168: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x79a168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
label_79a16c:
    // 0x79a16c: 0x8ea300ac  lw          $v1, 0xAC($s5)
    ctx->pc = 0x79a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 172)));
    // 0x79a170: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a174: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79a174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a178: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x79a178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x79a17c: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x79a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x79a180: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x79a180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    // 0x79a184: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x79A184u;
    SET_GPR_U32(ctx, 31, 0x79A18Cu);
    ctx->pc = 0x79A188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A184u;
    // 0x79a188: 0x8eb000ac  lw          $s0, 0xAC($s5) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x79A184u, 0x79A18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A18Cu;
label_79a18c:
    // 0x79a18c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x79a18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x79a190: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x79a190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79a194: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A194u;
    {
        const bool branch_taken_0x79a194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A194u;
        // 0x79a198: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a194) {
            ctx->pc = 0x79A1ACu;
            goto label_79a1ac;
        }
    }
    ctx->pc = 0x79A19Cu;
    // 0x79a19c: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x79A19Cu;
    SET_GPR_U32(ctx, 31, 0x79A1A4u);
    ctx->pc = 0x79A1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A19Cu;
    // 0x79a1a0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x79A19Cu, 0x79A1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1A4u;
label_79a1a4:
    // 0x79a1a4: 0x8ea300ac  lw          $v1, 0xAC($s5)
    ctx->pc = 0x79a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 172)));
    // 0x79a1a8: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x79a1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
label_79a1ac:
    // 0x79a1ac: 0x8eb000a0  lw          $s0, 0xA0($s5)
    ctx->pc = 0x79a1acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
    // 0x79a1b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a1b8: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x79A1B8u;
    SET_GPR_U32(ctx, 31, 0x79A1C0u);
    ctx->pc = 0x79A1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1B8u;
    // 0x79a1bc: 0x3c160074  lui         $s6, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)116 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x79A1B8u, 0x79A1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1C0u;
label_79a1c0:
    // 0x79a1c0: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x79a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x79a1c4: 0x14620054  bne         $v1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x79A1C4u;
    {
        const bool branch_taken_0x79a1c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x79A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1C4u;
        // 0x79a1c8: 0x26c274a0  addiu       $v0, $s6, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1c4) {
            ctx->pc = 0x79A318u;
            goto label_79a318;
        }
    }
    ctx->pc = 0x79A1CCu;
    // 0x79a1cc: 0x8eb000a4  lw          $s0, 0xA4($s5)
    ctx->pc = 0x79a1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 164)));
    // 0x79a1d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1d4: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x79A1D4u;
    SET_GPR_U32(ctx, 31, 0x79A1DCu);
    ctx->pc = 0x79A1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1D4u;
    // 0x79a1d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x79A1D4u, 0x79A1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1DCu;
label_79a1dc:
    // 0x79a1dc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x79a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x79a1e0: 0x1462004d  bne         $v1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x79A1E0u;
    {
        const bool branch_taken_0x79a1e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x79A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1E0u;
        // 0x79a1e4: 0x26c274a0  addiu       $v0, $s6, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1e0) {
            ctx->pc = 0x79A318u;
            goto label_79a318;
        }
    }
    ctx->pc = 0x79A1E8u;
    // 0x79a1e8: 0x8eb000a8  lw          $s0, 0xA8($s5)
    ctx->pc = 0x79a1e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 168)));
    // 0x79a1ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1f0: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x79A1F0u;
    SET_GPR_U32(ctx, 31, 0x79A1F8u);
    ctx->pc = 0x79A1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1F0u;
    // 0x79a1f4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x79A1F0u, 0x79A1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1F8u;
label_79a1f8:
    // 0x79a1f8: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x79a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x79a1fc: 0x14620046  bne         $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x79A1FCu;
    {
        const bool branch_taken_0x79a1fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x79A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1FCu;
        // 0x79a200: 0x26c274a0  addiu       $v0, $s6, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1fc) {
            ctx->pc = 0x79A318u;
            goto label_79a318;
        }
    }
    ctx->pc = 0x79A204u;
    // 0x79a204: 0x8eb000ac  lw          $s0, 0xAC($s5)
    ctx->pc = 0x79a204u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 172)));
    // 0x79a208: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a20c: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x79A20Cu;
    SET_GPR_U32(ctx, 31, 0x79A214u);
    ctx->pc = 0x79A210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A20Cu;
    // 0x79a210: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x79A20Cu, 0x79A214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A214u;
label_79a214:
    // 0x79a214: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x79a214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x79a218: 0x1462003f  bne         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x79A218u;
    {
        const bool branch_taken_0x79a218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x79A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A218u;
        // 0x79a21c: 0x26c274a0  addiu       $v0, $s6, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a218) {
            ctx->pc = 0x79A318u;
            goto label_79a318;
        }
    }
    ctx->pc = 0x79A220u;
    // 0x79a220: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a224: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x79A224u;
    SET_GPR_U32(ctx, 31, 0x79A22Cu);
    ctx->pc = 0x79A228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A224u;
    // 0x79a228: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x79A224u, 0x79A22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A22Cu;
label_79a22c:
    // 0x79a22c: 0x3c13007a  lui         $s3, 0x7A
    ctx->pc = 0x79a22cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
    // 0x79a230: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a234: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a238: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x79A238u;
    SET_GPR_U32(ctx, 31, 0x79A240u);
    ctx->pc = 0x79A23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A238u;
    // 0x79a23c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x79A238u, 0x79A240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A240u;
label_79a240:
    // 0x79a240: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x79a240u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a244: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a248: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x79A248u;
    SET_GPR_U32(ctx, 31, 0x79A250u);
    ctx->pc = 0x79A24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A248u;
    // 0x79a24c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x79A248u, 0x79A250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A250u;
label_79a250:
    // 0x79a250: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79a250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a254: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a258: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x79A258u;
    SET_GPR_U32(ctx, 31, 0x79A260u);
    ctx->pc = 0x79A25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A258u;
    // 0x79a25c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x79A258u, 0x79A260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A260u;
label_79a260:
    // 0x79a260: 0x96a3012a  lhu         $v1, 0x12A($s5)
    ctx->pc = 0x79a260u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 298)));
    // 0x79a264: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x79a264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x79a268: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x79a268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x79a26c: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x79a26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x79a270: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x79a270u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x79a274: 0x652818  mult        $a1, $v1, $a1
    ctx->pc = 0x79a274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x79a278: 0x2407012c  addiu       $a3, $zero, 0x12C
    ctx->pc = 0x79a278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x79a27c: 0x663018  mult        $a2, $v1, $a2
    ctx->pc = 0x79a27cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x79a280: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x79a280u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x79a284: 0x2048018  mult        $s0, $s0, $a0
    ctx->pc = 0x79a284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x79a288: 0x2459018  mult        $s2, $s2, $a1
    ctx->pc = 0x79a288u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x79a28c: 0x2268818  mult        $s1, $s1, $a2
    ctx->pc = 0x79a28cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x79a290: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x79a290u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x79a294: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x79a294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x79a298: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x79a298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x79a29c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x79a29cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x79a2a0: 0xae70bba8  sw          $s0, -0x4458($s3)
    ctx->pc = 0x79a2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294949800), GPR_U32(ctx, 16));
    // 0x79a2a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x79A2A4u;
    {
        const bool branch_taken_0x79a2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2A4u;
        // 0x79a2a8: 0xaeb000f8  sw          $s0, 0xF8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 248), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2a4) {
            ctx->pc = 0x79A2F0u;
            goto label_79a2f0;
        }
    }
    ctx->pc = 0x79A2ACu;
label_79a2ac:
    // 0x79a2ac: 0x8ea500b0  lw          $a1, 0xB0($s5)
    ctx->pc = 0x79a2acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x79a2b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x79a2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2b4: 0x8ea600f8  lw          $a2, 0xF8($s5)
    ctx->pc = 0x79a2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
    // 0x79a2b8: 0x3c160074  lui         $s6, 0x74
    ctx->pc = 0x79a2b8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)116 << 16));
    // 0x79a2bc: 0xc1e6caa  jal         func_79B2A8
    ctx->pc = 0x79A2BCu;
    SET_GPR_U32(ctx, 31, 0x79A2C4u);
    ctx->pc = 0x79A2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2BCu;
    // 0x79a2c0: 0x24a50084  addiu       $a1, $a1, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2A8u, 0x79A2BCu, 0x79A2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2C4u;
label_79a2c4:
    // 0x79a2c4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x79A2C4u;
    {
        const bool branch_taken_0x79a2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a2c4) {
            ctx->pc = 0x79A2C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A2C4u;
            // 0x79a2c8: 0x8ea400b0  lw          $a0, 0xB0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A2E8u;
            goto label_79a2e8;
        }
    }
    ctx->pc = 0x79A2CCu;
    // 0x79a2cc: 0x26c274a0  addiu       $v0, $s6, 0x74A0
    ctx->pc = 0x79a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
    // 0x79a2d0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x79a2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x79a2d4: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x79a2d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x79a2d8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79a2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79a2dc: 0x10600065  beqz        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x79A2DCu;
    {
        const bool branch_taken_0x79a2dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2DCu;
        // 0x79a2e0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2dc) {
            ctx->pc = 0x79A474u;
            goto label_79a474;
        }
    }
    ctx->pc = 0x79A2E4u;
    // 0x79a2e4: 0x8ea400b0  lw          $a0, 0xB0($s5)
    ctx->pc = 0x79a2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
label_79a2e8:
    // 0x79a2e8: 0x8ea300f8  lw          $v1, 0xF8($s5)
    ctx->pc = 0x79a2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
    // 0x79a2ec: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x79a2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
label_79a2f0:
    // 0x79a2f0: 0x96a20002  lhu         $v0, 0x2($s5)
    ctx->pc = 0x79a2f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x79a2f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a2f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79A2F8u;
    {
        const bool branch_taken_0x79a2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2F8u;
        // 0x79a2fc: 0xa6a20002  sh          $v0, 0x2($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2f8) {
            ctx->pc = 0x79A314u;
            goto label_79a314;
        }
    }
    ctx->pc = 0x79A300u;
label_79a300:
    // 0x79a300: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x79a300u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x79a304: 0x3c160074  lui         $s6, 0x74
    ctx->pc = 0x79a304u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)116 << 16));
    // 0x79a308: 0xa6a00002  sh          $zero, 0x2($s5)
    ctx->pc = 0x79a308u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x79a30c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a310: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x79a310u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
label_79a314:
    // 0x79a314: 0x26c274a0  addiu       $v0, $s6, 0x74A0
    ctx->pc = 0x79a314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
label_79a318:
    // 0x79a318: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x79a318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x79a31c: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x79a31cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x79a320: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79a320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79a324: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x79A324u;
    {
        const bool branch_taken_0x79a324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A324u;
        // 0x79a328: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a324) {
            ctx->pc = 0x79A474u;
            goto label_79a474;
        }
    }
    ctx->pc = 0x79A32Cu;
    // 0x79a32c: 0x86a30002  lh          $v1, 0x2($s5)
    ctx->pc = 0x79a32cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x79a330: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x79a330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x79a334: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x79A334u;
    {
        const bool branch_taken_0x79a334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A334u;
        // 0x79a338: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a334) {
            ctx->pc = 0x79A478u;
            goto label_79a478;
        }
    }
    ctx->pc = 0x79A33Cu;
    // 0x79a33c: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x79A33Cu;
    {
        const bool branch_taken_0x79a33c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A33Cu;
        // 0x79a340: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a33c) {
            ctx->pc = 0x79A478u;
            goto label_79a478;
        }
    }
    ctx->pc = 0x79A344u;
    // 0x79a344: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x79a344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x79a348: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a34c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a34cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a350: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a350u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a354: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79a354u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a358: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a35c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A35Cu;
    SET_GPR_U32(ctx, 31, 0x79A364u);
    ctx->pc = 0x79A360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A35Cu;
    // 0x79a360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A35Cu, 0x79A364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A364u;
label_79a364:
    // 0x79a364: 0x3c14007a  lui         $s4, 0x7A
    ctx->pc = 0x79a364u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
    // 0x79a368: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x79a368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x79a36c: 0x3c110057  lui         $s1, 0x57
    ctx->pc = 0x79a36cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
    // 0x79a370: 0x26319b70  addiu       $s1, $s1, -0x6490
    ctx->pc = 0x79a370u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941552));
    // 0x79a374: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a378: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x79a378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x79a37c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a380: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x79a380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a384: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x79A384u;
    SET_GPR_U32(ctx, 31, 0x79A38Cu);
    ctx->pc = 0x79A388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A384u;
    // 0x79a388: 0xe4600038  swc1        $f0, 0x38($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x79A384u, 0x79A38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A38Cu;
label_79a38c:
    // 0x79a38c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a38cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a390: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a394: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x79A394u;
    SET_GPR_U32(ctx, 31, 0x79A39Cu);
    ctx->pc = 0x79A398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A394u;
    // 0x79a398: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x79A394u, 0x79A39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A39Cu;
label_79a39c:
    // 0x79a39c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x79a39cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3a4: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x79A3A4u;
    SET_GPR_U32(ctx, 31, 0x79A3ACu);
    ctx->pc = 0x79A3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3A4u;
    // 0x79a3a8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x79A3A4u, 0x79A3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3ACu;
label_79a3ac:
    // 0x79a3ac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79a3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a3b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x79a3b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3b4: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x79A3B4u;
    SET_GPR_U32(ctx, 31, 0x79A3BCu);
    ctx->pc = 0x79A3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3B4u;
    // 0x79a3b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x79A3B4u, 0x79A3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3BCu;
label_79a3bc:
    // 0x79a3bc: 0x96a3012a  lhu         $v1, 0x12A($s5)
    ctx->pc = 0x79a3bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 298)));
    // 0x79a3c0: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x79a3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x79a3c4: 0x24070096  addiu       $a3, $zero, 0x96
    ctx->pc = 0x79a3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x79a3c8: 0x240800c8  addiu       $t0, $zero, 0xC8
    ctx->pc = 0x79a3c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x79a3cc: 0x663018  mult        $a2, $v1, $a2
    ctx->pc = 0x79a3ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x79a3d0: 0x673818  mult        $a3, $v1, $a3
    ctx->pc = 0x79a3d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x79a3d4: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x79a3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x79a3d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3dc: 0x684018  mult        $t0, $v1, $t0
    ctx->pc = 0x79a3dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x79a3e0: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x79a3e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x79a3e4: 0x2068018  mult        $s0, $s0, $a2
    ctx->pc = 0x79a3e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x79a3e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a3ec: 0x2679818  mult        $s3, $s3, $a3
    ctx->pc = 0x79a3ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x79a3f0: 0x2489018  mult        $s2, $s2, $t0
    ctx->pc = 0x79a3f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x79a3f4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x79a3f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x79a3f8: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x79a3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x79a3fc: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x79a3fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x79a400: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x79a400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x79a404: 0xae90bba8  sw          $s0, -0x4458($s4)
    ctx->pc = 0x79a404u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294949800), GPR_U32(ctx, 16));
    // 0x79a408: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x79A408u;
    SET_GPR_U32(ctx, 31, 0x79A410u);
    ctx->pc = 0x79A40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A408u;
    // 0x79a40c: 0xaeb000f8  sw          $s0, 0xF8($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 248), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x79A408u, 0x79A410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A410u;
label_79a410:
    // 0x79a410: 0x8ea300a0  lw          $v1, 0xA0($s5)
    ctx->pc = 0x79a410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
    // 0x79a414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a418: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a41c: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x79A41Cu;
    SET_GPR_U32(ctx, 31, 0x79A424u);
    ctx->pc = 0x79A420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A41Cu;
    // 0x79a420: 0xac620084  sw          $v0, 0x84($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x79A41Cu, 0x79A424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A424u;
label_79a424:
    // 0x79a424: 0x8ea300a4  lw          $v1, 0xA4($s5)
    ctx->pc = 0x79a424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 164)));
    // 0x79a428: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a42c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x79a42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a430: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x79A430u;
    SET_GPR_U32(ctx, 31, 0x79A438u);
    ctx->pc = 0x79A434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A430u;
    // 0x79a434: 0xac620084  sw          $v0, 0x84($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x79A430u, 0x79A438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A438u;
label_79a438:
    // 0x79a438: 0x8ea300a8  lw          $v1, 0xA8($s5)
    ctx->pc = 0x79a438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 168)));
    // 0x79a43c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a440: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79a440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a444: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x79A444u;
    SET_GPR_U32(ctx, 31, 0x79A44Cu);
    ctx->pc = 0x79A448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A444u;
    // 0x79a448: 0xac620084  sw          $v0, 0x84($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x79A444u, 0x79A44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A44Cu;
label_79a44c:
    // 0x79a44c: 0x8ea300ac  lw          $v1, 0xAC($s5)
    ctx->pc = 0x79a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 172)));
    // 0x79a450: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x79a450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    // 0x79a454: 0x8ea200f8  lw          $v0, 0xF8($s5)
    ctx->pc = 0x79a454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
    // 0x79a458: 0x8ea400b0  lw          $a0, 0xB0($s5)
    ctx->pc = 0x79a458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x79a45c: 0xac820084  sw          $v0, 0x84($a0)
    ctx->pc = 0x79a45cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
    // 0x79a460: 0xa6a00002  sh          $zero, 0x2($s5)
    ctx->pc = 0x79a460u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x79a464: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x79a464u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x79a468: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a46c: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x79a46cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x79a470: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x79a470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_79a474:
    // 0x79a474: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x79a474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_79a478:
    // 0x79a478: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x79a478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a47c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x79a47cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a480: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x79a480u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a484: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x79a484u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a488: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x79a488u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a48c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a490: 0x3e00008  jr          $ra
    ctx->pc = 0x79A490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A490u;
        // 0x79a494: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A498u;
}
} // namespace gh_r021
