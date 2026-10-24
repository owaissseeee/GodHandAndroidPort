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
// Function: move_Get__5cR021
// Address: 0x79ab08 - 0x79acc0
void move_Get__5cR021_0x79ab08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("move_Get__5cR021_0x79ab08");
#endif

    switch (ctx->pc) {
        case 0x79ab6cu: goto label_79ab6c;
        case 0x79ac08u: goto label_79ac08;
        case 0x79ac88u: goto label_79ac88;
        default: break;
    }

    ctx->pc = 0x79ab08u;

    // 0x79ab08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79ab08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79ab0c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79ab0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79ab10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79ab10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79ab14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x79ab14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79ab18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79ab1c: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x79ab1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x79ab20: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x79ab20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x79ab24: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x79AB24u;
    {
        const bool branch_taken_0x79ab24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB24u;
        // 0x79ab28: 0x3c110074  lui         $s1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab24) {
            ctx->pc = 0x79AC40u;
            goto label_79ac40;
        }
    }
    ctx->pc = 0x79AB2Cu;
    // 0x79ab2c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79ab30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79ab34: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x79ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x79ab38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79ab38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79ab3c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79ab3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79ab40: 0x800008  jr          $a0
    ctx->pc = 0x79AB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79AB48u: goto label_79ab48;
            case 0x79AB84u: goto label_79ab84;
            case 0x79ABC8u: goto label_79abc8;
            case 0x79AC18u: goto label_79ac18;
            case 0x79AC2Cu: goto label_79ac2c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AB40u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79AB48u;
label_79ab48:
    // 0x79ab48: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79ab48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79ab4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79ab4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab50: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79ab50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79ab54: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x79ab54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x79ab58: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79ab58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79ab5c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79ab5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79ab60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79ab60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab64: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79AB64u;
    SET_GPR_U32(ctx, 31, 0x79AB6Cu);
    ctx->pc = 0x79AB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB64u;
    // 0x79ab68: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79AB64u, 0x79AB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB6Cu;
label_79ab6c:
    // 0x79ab6c: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x79ab6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x79ab70: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x79ab70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x79ab74: 0xa4830090  sh          $v1, 0x90($a0)
    ctx->pc = 0x79ab74u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x79ab78: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x79ab78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x79ab7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79ab80: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x79ab80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_79ab84:
    // 0x79ab84: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x79ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x79ab88: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x79ab88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x79ab8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79ab8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79ab90: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x79ab90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79ab94: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x79ab94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x79ab98: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x79ab98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x79ab9c: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x79ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x79aba0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x79aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x79aba4: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x79aba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79aba8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x79aba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79abac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x79abacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79abb0: 0x0  nop
    ctx->pc = 0x79abb0u;
    // NOP
    // 0x79abb4: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x79ABB4u;
    {
        const bool branch_taken_0x79abb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABB4u;
        // 0x79abb8: 0x3c110074  lui         $s1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abb4) {
            ctx->pc = 0x79AC40u;
            goto label_79ac40;
        }
    }
    ctx->pc = 0x79ABBCu;
    // 0x79abbc: 0xe4610038  swc1        $f1, 0x38($v1)
    ctx->pc = 0x79abbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x79abc0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x79ABC0u;
    {
        const bool branch_taken_0x79abc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABC0u;
        // 0x79abc4: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abc0) {
            ctx->pc = 0x79AC20u;
            goto label_79ac20;
        }
    }
    ctx->pc = 0x79ABC8u;
label_79abc8:
    // 0x79abc8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x79abcc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x79abccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x79abd0: 0x246474a0  addiu       $a0, $v1, 0x74A0
    ctx->pc = 0x79abd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x79abd4: 0xdc8201a0  ld          $v0, 0x1A0($a0)
    ctx->pc = 0x79abd4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x747640u));
    // 0x79abd8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x79abd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x79abdc: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x79ABDCu;
    {
        const bool branch_taken_0x79abdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABDCu;
        // 0x79abe0: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abdc) {
            ctx->pc = 0x79ACA8u;
            goto label_79aca8;
        }
    }
    ctx->pc = 0x79ABE4u;
    // 0x79abe4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79abe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79abe8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79abe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79abec: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79abecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79abf0: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x79abf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x79abf4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79abf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79abf8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79abf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79abfc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79abfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac00: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79AC00u;
    SET_GPR_U32(ctx, 31, 0x79AC08u);
    ctx->pc = 0x79AC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC00u;
    // 0x79ac04: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79AC00u, 0x79AC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC08u;
label_79ac08:
    // 0x79ac08: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x79ac08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x79ac0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x79ac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79ac10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x79AC10u;
    {
        const bool branch_taken_0x79ac10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC10u;
        // 0x79ac14: 0xa6030002  sh          $v1, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac10) {
            ctx->pc = 0x79AC40u;
            goto label_79ac40;
        }
    }
    ctx->pc = 0x79AC18u;
label_79ac18:
    // 0x79ac18: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x79ac18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x79ac1c: 0x3c110074  lui         $s1, 0x74
    ctx->pc = 0x79ac1cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)116 << 16));
label_79ac20:
    // 0x79ac20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79ac24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79AC24u;
    {
        const bool branch_taken_0x79ac24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC24u;
        // 0x79ac28: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac24) {
            ctx->pc = 0x79AC40u;
            goto label_79ac40;
        }
    }
    ctx->pc = 0x79AC2Cu;
label_79ac2c:
    // 0x79ac2c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x79ac2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79ac30: 0x3c110074  lui         $s1, 0x74
    ctx->pc = 0x79ac30u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)116 << 16));
    // 0x79ac34: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x79ac34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x79ac38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79ac3c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x79ac3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_79ac40:
    // 0x79ac40: 0x262274a0  addiu       $v0, $s1, 0x74A0
    ctx->pc = 0x79ac40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 29856));
    // 0x79ac44: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x79ac44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x79ac48: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x79ac48u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x79ac4c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79ac4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79ac50: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x79AC50u;
    {
        const bool branch_taken_0x79ac50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ac50) {
            ctx->pc = 0x79AC54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AC50u;
            // 0x79ac54: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79ACACu;
            goto label_79acac;
        }
    }
    ctx->pc = 0x79AC58u;
    // 0x79ac58: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x79ac58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x79ac5c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x79ac5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x79ac60: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x79AC60u;
    {
        const bool branch_taken_0x79ac60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC60u;
        // 0x79ac64: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac60) {
            ctx->pc = 0x79ACA8u;
            goto label_79aca8;
        }
    }
    ctx->pc = 0x79AC68u;
    // 0x79ac68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79ac68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac6c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79ac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79ac70: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x79ac70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x79ac74: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79ac74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79ac78: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79ac78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79ac7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79ac7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac80: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79AC80u;
    SET_GPR_U32(ctx, 31, 0x79AC88u);
    ctx->pc = 0x79AC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC80u;
    // 0x79ac84: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79AC80u, 0x79AC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC88u;
label_79ac88:
    // 0x79ac88: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x79ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x79ac8c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x79ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x79ac90: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x79ac90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79ac94: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x79ac94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x79ac98: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x79ac98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x79ac9c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x79ac9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79aca0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79aca4: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x79aca4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_79aca8:
    // 0x79aca8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79aca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_79acac:
    // 0x79acac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79acacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79acb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79acb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79acb4: 0x3e00008  jr          $ra
    ctx->pc = 0x79ACB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACB4u;
        // 0x79acb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ACB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79ACBCu;
    // 0x79acbc: 0x0  nop
    ctx->pc = 0x79acbcu;
    // NOP
    ctx->pc = 0x79acc0u;
}
} // namespace gh_r021
