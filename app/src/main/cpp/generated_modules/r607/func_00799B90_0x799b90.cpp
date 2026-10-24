#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r607_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r607
{
// Function: func_00799B90
// Address: 0x799b90 - 0x799d68
void func_00799B90_0x799b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799B90_0x799b90");
#endif

    switch (ctx->pc) {
        case 0x799c04u: goto label_799c04;
        case 0x799c30u: goto label_799c30;
        case 0x799c4cu: goto label_799c4c;
        case 0x799c68u: goto label_799c68;
        case 0x799c88u: goto label_799c88;
        case 0x799c90u: goto label_799c90;
        case 0x799ce8u: goto label_799ce8;
        case 0x799d04u: goto label_799d04;
        case 0x799d10u: goto label_799d10;
        case 0x799d1cu: goto label_799d1c;
        case 0x799d28u: goto label_799d28;
        case 0x799d34u: goto label_799d34;
        case 0x799d3cu: goto label_799d3c;
        default: break;
    }

    ctx->pc = 0x799b90u;

    // 0x799b90: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
    // 0x799b94: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x799b94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x799b98: 0x8c82b770  lw          $v0, -0x4890($a0)
    ctx->pc = 0x799b98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79B770u));
    // 0x799b9c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x799b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x799ba0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x799ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x799ba4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x799ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x799ba8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x799ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x799bac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x799bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x799bb0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x799bb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bb4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x799bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x799bb8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x799bb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bbc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x799bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x799bc0: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x799bc0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
    // 0x799bc4: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x799bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x799bc8: 0x3c15005f  lui         $s5, 0x5F
    ctx->pc = 0x799bc8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)95 << 16));
    // 0x799bcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799bd0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x799bd0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799bd4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x799bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x799bd8: 0x3c0143e1  lui         $at, 0x43E1
    ctx->pc = 0x799bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17377 << 16));
    // 0x799bdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799be0: 0x8c82b770  lw          $v0, -0x4890($a0)
    ctx->pc = 0x799be0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79B770u));
    // 0x799be4: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x799be4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x799be8: 0x8c83b770  lw          $v1, -0x4890($a0)
    ctx->pc = 0x799be8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x79B770u));
    // 0x799bec: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x799becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x799bf0: 0x8c82b770  lw          $v0, -0x4890($a0)
    ctx->pc = 0x799bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79B770u));
    // 0x799bf4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x799bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x799bf8: 0x8c83b770  lw          $v1, -0x4890($a0)
    ctx->pc = 0x799bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x79B770u));
    // 0x799bfc: 0xc1e6548  jal         func_799520
    ctx->pc = 0x799BFCu;
    SET_GPR_U32(ctx, 31, 0x799C04u);
    ctx->pc = 0x799C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BFCu;
    // 0x799c00: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799520u, 0x799BFCu, 0x799C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C04u;
label_799c04:
    // 0x799c04: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x799c04u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x799c08: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799c08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799c0c: 0x2631ea60  addiu       $s1, $s1, -0x15A0
    ctx->pc = 0x799c0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
    // 0x799c10: 0x26109d68  addiu       $s0, $s0, -0x6298
    ctx->pc = 0x799c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942056));
    // 0x799c14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c18: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799c1c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799c20: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x799c20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799c24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c28: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x799C28u;
    SET_GPR_U32(ctx, 31, 0x799C30u);
    ctx->pc = 0x799C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C28u;
    // 0x799c2c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799C28u, 0x799C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C30u;
label_799c30:
    // 0x799c30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c34: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799c38: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799c3c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x799c3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c40: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x799c40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799c44: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x799C44u;
    SET_GPR_U32(ctx, 31, 0x799C4Cu);
    ctx->pc = 0x799C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C44u;
    // 0x799c48: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799C44u, 0x799C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C4Cu;
label_799c4c:
    // 0x799c4c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x799c4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c54: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799c58: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799c5c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x799c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799c60: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x799C60u;
    SET_GPR_U32(ctx, 31, 0x799C68u);
    ctx->pc = 0x799C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C60u;
    // 0x799c64: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799C60u, 0x799C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C68u;
label_799c68:
    // 0x799c68: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799c68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x799c6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c70: 0x24e7a320  addiu       $a3, $a3, -0x5CE0
    ctx->pc = 0x799c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943520));
    // 0x799c74: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x799c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799c78: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799c7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799c7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c80: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x799C80u;
    SET_GPR_U32(ctx, 31, 0x799C88u);
    ctx->pc = 0x799C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C80u;
    // 0x799c84: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799C80u, 0x799C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C88u;
label_799c88:
    // 0x799c88: 0x8e63b770  lw          $v1, -0x4890($s3)
    ctx->pc = 0x799c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948720)));
    // 0x799c8c: 0x0  nop
    ctx->pc = 0x799c8cu;
    // NOP
label_799c90:
    // 0x799c90: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x799c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x799c94: 0x2a440020  slti        $a0, $s2, 0x20
    ctx->pc = 0x799c94u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x799c98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x799c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x799c9c: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x799c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x799ca0: 0x8e62b770  lw          $v0, -0x4890($s3)
    ctx->pc = 0x799ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948720)));
    // 0x799ca4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x799ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x799ca8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x799CA8u;
    {
        const bool branch_taken_0x799ca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CA8u;
        // 0x799cac: 0xa0560028  sb          $s6, 0x28($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ca8) {
            ctx->pc = 0x799CDCu;
            goto label_799cdc;
        }
    }
    ctx->pc = 0x799CB0u;
    // 0x799cb0: 0x8ea28658  lw          $v0, -0x79A8($s5)
    ctx->pc = 0x799cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936152)));
    // 0x799cb4: 0x122142  srl         $a0, $s2, 5
    ctx->pc = 0x799cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
    // 0x799cb8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x799cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x799cbc: 0x3243001f  andi        $v1, $s2, 0x1F
    ctx->pc = 0x799cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)31);
    // 0x799cc0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x799cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x799cc4: 0x741806  srlv        $v1, $s4, $v1
    ctx->pc = 0x799cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), GPR_U32(ctx, 3) & 0x1F));
    // 0x799cc8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x799cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x799ccc: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x799cccu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x799cd0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x799cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799cd4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x799cd8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x799cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_799cdc:
    // 0x799cdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ce0: 0xc1e6906  jal         func_79A418
    ctx->pc = 0x799CE0u;
    SET_GPR_U32(ctx, 31, 0x799CE8u);
    ctx->pc = 0x799CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CE0u;
    // 0x799ce4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A418u, 0x799CE0u, 0x799CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CE8u;
label_799ce8:
    // 0x799ce8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x799ce8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x799cec: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x799cecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x799cf0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x799CF0u;
    {
        const bool branch_taken_0x799cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CF0u;
        // 0x799cf4: 0x8e63b770  lw          $v1, -0x4890($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cf0) {
            ctx->pc = 0x799C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799c90;
        }
    }
    ctx->pc = 0x799CF8u;
    // 0x799cf8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x799cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799cfc: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799CFCu;
    SET_GPR_U32(ctx, 31, 0x799D04u);
    ctx->pc = 0x799D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CFCu;
    // 0x799d00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799CFCu, 0x799D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D04u;
label_799d04:
    // 0x799d04: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x799d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x799d08: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799D08u;
    SET_GPR_U32(ctx, 31, 0x799D10u);
    ctx->pc = 0x799D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D08u;
    // 0x799d0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799D08u, 0x799D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D10u;
label_799d10:
    // 0x799d10: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x799d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x799d14: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799D14u;
    SET_GPR_U32(ctx, 31, 0x799D1Cu);
    ctx->pc = 0x799D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D14u;
    // 0x799d18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799D14u, 0x799D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D1Cu;
label_799d1c:
    // 0x799d1c: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x799d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x799d20: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799D20u;
    SET_GPR_U32(ctx, 31, 0x799D28u);
    ctx->pc = 0x799D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D20u;
    // 0x799d24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799D20u, 0x799D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D28u;
label_799d28:
    // 0x799d28: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x799d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x799d2c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799D2Cu;
    SET_GPR_U32(ctx, 31, 0x799D34u);
    ctx->pc = 0x799D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D2Cu;
    // 0x799d30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799D2Cu, 0x799D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D34u;
label_799d34:
    // 0x799d34: 0xc1e6830  jal         func_79A0C0
    ctx->pc = 0x799D34u;
    SET_GPR_U32(ctx, 31, 0x799D3Cu);
    ctx->pc = 0x799D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D34u;
    // 0x799d38: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A0C0u, 0x799D34u, 0x799D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D3Cu;
label_799d3c:
    // 0x799d3c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x799d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799d40: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x799d40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799d44: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x799d44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799d48: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x799d48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799d4c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x799d4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799d50: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x799d50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799d54: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x799d54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799d58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x799D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D5Cu;
        // 0x799d60: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799D64u;
    // 0x799d64: 0x0  nop
    ctx->pc = 0x799d64u;
    // NOP
    ctx->pc = 0x799d68u;
}
} // namespace gh_r607
