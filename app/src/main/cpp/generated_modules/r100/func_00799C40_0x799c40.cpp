#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r100_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r100
{
// Function: func_00799C40
// Address: 0x799c40 - 0x79a0a8
void func_00799C40_0x799c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799C40_0x799c40");
#endif

    switch (ctx->pc) {
        case 0x799c8cu: goto label_799c8c;
        case 0x799cb4u: goto label_799cb4;
        case 0x799cc8u: goto label_799cc8;
        case 0x799cdcu: goto label_799cdc;
        case 0x799cf0u: goto label_799cf0;
        case 0x799d04u: goto label_799d04;
        case 0x799d30u: goto label_799d30;
        case 0x799d58u: goto label_799d58;
        case 0x799d84u: goto label_799d84;
        case 0x799dacu: goto label_799dac;
        case 0x799dc8u: goto label_799dc8;
        case 0x799dd8u: goto label_799dd8;
        case 0x799e20u: goto label_799e20;
        case 0x799e64u: goto label_799e64;
        case 0x799ea8u: goto label_799ea8;
        case 0x799ed8u: goto label_799ed8;
        case 0x799eecu: goto label_799eec;
        case 0x799ef4u: goto label_799ef4;
        case 0x799f18u: goto label_799f18;
        case 0x799f48u: goto label_799f48;
        case 0x799f60u: goto label_799f60;
        case 0x799f68u: goto label_799f68;
        case 0x799f88u: goto label_799f88;
        case 0x799fb0u: goto label_799fb0;
        case 0x799fe0u: goto label_799fe0;
        case 0x799ff8u: goto label_799ff8;
        case 0x79a004u: goto label_79a004;
        case 0x79a00cu: goto label_79a00c;
        case 0x79a030u: goto label_79a030;
        case 0x79a060u: goto label_79a060;
        case 0x79a078u: goto label_79a078;
        case 0x79a084u: goto label_79a084;
        case 0x79a08cu: goto label_79a08c;
        default: break;
    }

    ctx->pc = 0x799c40u;

    // 0x799c40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x799c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x799c44: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799c48: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x799c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x799c4c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x799c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x799c50: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x799c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x799c54: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x799c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x799c58: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x799c58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x799c60: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x799c60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x799c64: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x799c64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799c68: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799c6c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x799c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x799c70: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x799C70u;
    {
        const bool branch_taken_0x799c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C70u;
        // 0x799c74: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c70) {
            ctx->pc = 0x799C8Cu;
            goto label_799c8c;
        }
    }
    ctx->pc = 0x799C78u;
    // 0x799c78: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799c78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799c7c: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799c80: 0x24a5b9a0  addiu       $a1, $a1, -0x4660
    ctx->pc = 0x799c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949280));
    // 0x799c84: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799C84u;
    SET_GPR_U32(ctx, 31, 0x799C8Cu);
    ctx->pc = 0x799C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C84u;
    // 0x799c88: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799C84u, 0x799C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C8Cu;
label_799c8c:
    // 0x799c8c: 0x8e428658  lw          $v0, -0x79A8($s2)
    ctx->pc = 0x799c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
    // 0x799c90: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x799c90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x799c94: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799c98: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799c9c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x799C9Cu;
    {
        const bool branch_taken_0x799c9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C9Cu;
        // 0x799ca0: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c9c) {
            ctx->pc = 0x799CB8u;
            goto label_799cb8;
        }
    }
    ctx->pc = 0x799CA4u;
    // 0x799ca4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799ca8: 0x24a5b6d0  addiu       $a1, $a1, -0x4930
    ctx->pc = 0x799ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948560));
    // 0x799cac: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799CACu;
    SET_GPR_U32(ctx, 31, 0x799CB4u);
    ctx->pc = 0x799CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CACu;
    // 0x799cb0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799CACu, 0x799CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CB4u;
label_799cb4:
    // 0x799cb4: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_799cb8:
    // 0x799cb8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799cbc: 0x24a5b510  addiu       $a1, $a1, -0x4AF0
    ctx->pc = 0x799cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948112));
    // 0x799cc0: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799CC0u;
    SET_GPR_U32(ctx, 31, 0x799CC8u);
    ctx->pc = 0x799CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CC0u;
    // 0x799cc4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799CC0u, 0x799CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CC8u;
label_799cc8:
    // 0x799cc8: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799ccc: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799cd0: 0x24a5b308  addiu       $a1, $a1, -0x4CF8
    ctx->pc = 0x799cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947592));
    // 0x799cd4: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799CD4u;
    SET_GPR_U32(ctx, 31, 0x799CDCu);
    ctx->pc = 0x799CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CD4u;
    // 0x799cd8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799CD4u, 0x799CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CDCu;
label_799cdc:
    // 0x799cdc: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799ce0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799ce4: 0x24a5b218  addiu       $a1, $a1, -0x4DE8
    ctx->pc = 0x799ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947352));
    // 0x799ce8: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799CE8u;
    SET_GPR_U32(ctx, 31, 0x799CF0u);
    ctx->pc = 0x799CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CE8u;
    // 0x799cec: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799CE8u, 0x799CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CF0u;
label_799cf0:
    // 0x799cf0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799cf4: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799cf8: 0x24a5a630  addiu       $a1, $a1, -0x59D0
    ctx->pc = 0x799cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944304));
    // 0x799cfc: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799CFCu;
    SET_GPR_U32(ctx, 31, 0x799D04u);
    ctx->pc = 0x799D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CFCu;
    // 0x799d00: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799CFCu, 0x799D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D04u;
label_799d04:
    // 0x799d04: 0x8e438658  lw          $v1, -0x79A8($s2)
    ctx->pc = 0x799d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
    // 0x799d08: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x799d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x799d0c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x799d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799d10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x799d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x799d14: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x799D14u;
    {
        const bool branch_taken_0x799d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D14u;
        // 0x799d18: 0x3c020080  lui         $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d14) {
            ctx->pc = 0x799D38u;
            goto label_799d38;
        }
    }
    ctx->pc = 0x799D1Cu;
    // 0x799d1c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799d20: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799d24: 0x24a5bde8  addiu       $a1, $a1, -0x4218
    ctx->pc = 0x799d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950376));
    // 0x799d28: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799D28u;
    SET_GPR_U32(ctx, 31, 0x799D30u);
    ctx->pc = 0x799D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D28u;
    // 0x799d2c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799D28u, 0x799D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D30u;
label_799d30:
    // 0x799d30: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x799D30u;
    {
        const bool branch_taken_0x799d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D30u;
        // 0x799d34: 0x8e438658  lw          $v1, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d30) {
            ctx->pc = 0x799D5Cu;
            goto label_799d5c;
        }
    }
    ctx->pc = 0x799D38u;
label_799d38:
    // 0x799d38: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x799d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x799d3c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x799D3Cu;
    {
        const bool branch_taken_0x799d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D3Cu;
        // 0x799d40: 0x8e438658  lw          $v1, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d3c) {
            ctx->pc = 0x799D5Cu;
            goto label_799d5c;
        }
    }
    ctx->pc = 0x799D44u;
    // 0x799d44: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799d48: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799d4c: 0x24a5a230  addiu       $a1, $a1, -0x5DD0
    ctx->pc = 0x799d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943280));
    // 0x799d50: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799D50u;
    SET_GPR_U32(ctx, 31, 0x799D58u);
    ctx->pc = 0x799D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D50u;
    // 0x799d54: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799D50u, 0x799D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D58u;
label_799d58:
    // 0x799d58: 0x8e438658  lw          $v1, -0x79A8($s2)
    ctx->pc = 0x799d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
label_799d5c:
    // 0x799d5c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x799d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x799d60: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x799d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799d64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x799d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x799d68: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x799D68u;
    {
        const bool branch_taken_0x799d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D68u;
        // 0x799d6c: 0x3c020800  lui         $v0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d68) {
            ctx->pc = 0x799D8Cu;
            goto label_799d8c;
        }
    }
    ctx->pc = 0x799D70u;
    // 0x799d70: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799d70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799d74: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799d78: 0x24a5ac50  addiu       $a1, $a1, -0x53B0
    ctx->pc = 0x799d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945872));
    // 0x799d7c: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799D7Cu;
    SET_GPR_U32(ctx, 31, 0x799D84u);
    ctx->pc = 0x799D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D7Cu;
    // 0x799d80: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799D7Cu, 0x799D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D84u;
label_799d84:
    // 0x799d84: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x799D84u;
    {
        const bool branch_taken_0x799d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D84u;
        // 0x799d88: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d84) {
            ctx->pc = 0x799DB0u;
            goto label_799db0;
        }
    }
    ctx->pc = 0x799D8Cu;
label_799d8c:
    // 0x799d8c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x799d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x799d90: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x799D90u;
    {
        const bool branch_taken_0x799d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799d90) {
            ctx->pc = 0x799D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799D90u;
            // 0x799d94: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799DB0u;
            goto label_799db0;
        }
    }
    ctx->pc = 0x799D98u;
    // 0x799d98: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799d98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799d9c: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799da0: 0x24a5a800  addiu       $a1, $a1, -0x5800
    ctx->pc = 0x799da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944768));
    // 0x799da4: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799DA4u;
    SET_GPR_U32(ctx, 31, 0x799DACu);
    ctx->pc = 0x799DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DA4u;
    // 0x799da8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799DA4u, 0x799DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DACu;
label_799dac:
    // 0x799dac: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x799dacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_799db0:
    // 0x799db0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x799db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x799db4: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x799db4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x799db8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799dbc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799dc0: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799DC0u;
    SET_GPR_U32(ctx, 31, 0x799DC8u);
    ctx->pc = 0x799DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DC0u;
    // 0x799dc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799DC0u, 0x799DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DC8u;
label_799dc8:
    // 0x799dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799dcc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x799dccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799dd0: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799DD0u;
    SET_GPR_U32(ctx, 31, 0x799DD8u);
    ctx->pc = 0x799DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DD0u;
    // 0x799dd4: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799DD0u, 0x799DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DD8u;
label_799dd8:
    // 0x799dd8: 0x3c014102  lui         $at, 0x4102
    ctx->pc = 0x799dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16642 << 16));
    // 0x799ddc: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x799ddcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x799de0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799de0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799de4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799de8: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x799de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
    // 0x799dec: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x799decu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x799df0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799df4: 0x3c014198  lui         $at, 0x4198
    ctx->pc = 0x799df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16792 << 16));
    // 0x799df8: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x799df8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
    // 0x799dfc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799e00: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x799e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x799e04: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x799e04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x799e08: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x799e08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x799e0c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799E0Cu;
    {
        const bool branch_taken_0x799e0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E0Cu;
        // 0x799e10: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e0c) {
            ctx->pc = 0x799E20u;
            goto label_799e20;
        }
    }
    ctx->pc = 0x799E14u;
    // 0x799e14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e18: 0xc0a240e  jal         func_289038
    ctx->pc = 0x799E18u;
    SET_GPR_U32(ctx, 31, 0x799E20u);
    ctx->pc = 0x799E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E18u;
    // 0x799e1c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289038u, 0x799E18u, 0x799E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E20u;
label_799e20:
    // 0x799e20: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x799e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
    // 0x799e24: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x799e24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x799e28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799e2c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x799e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799e30: 0x3c013eeb  lui         $at, 0x3EEB
    ctx->pc = 0x799e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16107 << 16));
    // 0x799e34: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x799e34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x799e38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799e3c: 0x3c01c260  lui         $at, 0xC260
    ctx->pc = 0x799e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49760 << 16));
    // 0x799e40: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x799e40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x799e44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799e48: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x799e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x799e4c: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x799e4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x799e50: 0xe4a20008  swc1        $f2, 0x8($a1)
    ctx->pc = 0x799e50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x799e54: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799E54u;
    {
        const bool branch_taken_0x799e54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E54u;
        // 0x799e58: 0xe4b4000c  swc1        $f20, 0xC($a1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e54) {
            ctx->pc = 0x799E64u;
            goto label_799e64;
        }
    }
    ctx->pc = 0x799E5Cu;
    // 0x799e5c: 0xc0a240e  jal         func_289038
    ctx->pc = 0x799E5Cu;
    SET_GPR_U32(ctx, 31, 0x799E64u);
    ctx->pc = 0x799E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E5Cu;
    // 0x799e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289038u, 0x799E5Cu, 0x799E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E64u;
label_799e64:
    // 0x799e64: 0x8e428658  lw          $v0, -0x79A8($s2)
    ctx->pc = 0x799e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
    // 0x799e68: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x799e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x799e6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799e70: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799e74: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x799E74u;
    {
        const bool branch_taken_0x799e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E74u;
        // 0x799e78: 0x3c04005d  lui         $a0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e74) {
            ctx->pc = 0x799F70u;
            goto label_799f70;
        }
    }
    ctx->pc = 0x799E7Cu;
    // 0x799e7c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799e80: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x799e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x799e84: 0x8044c3f8  lb          $a0, -0x3C08($v0)
    ctx->pc = 0x799e84u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79C3F8u));
    // 0x799e88: 0x2446c3f8  addiu       $a2, $v0, -0x3C08
    ctx->pc = 0x799e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951928));
    // 0x799e8c: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x799e8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x799e90: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x799e90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799e98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e9c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x799E9Cu;
    {
        const bool branch_taken_0x799e9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E9Cu;
        // 0x799ea0: 0x3c11007a  lui         $s1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e9c) {
            ctx->pc = 0x799ED0u;
            goto label_799ed0;
        }
    }
    ctx->pc = 0x799EA4u;
    // 0x799ea4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799ea4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799ea8:
    // 0x799ea8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799eac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799eb0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799eb4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799eb8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799eb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799ebc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799EBCu;
    {
        const bool branch_taken_0x799ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EBCu;
        // 0x799ec0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ebc) {
            ctx->pc = 0x799ED0u;
            goto label_799ed0;
        }
    }
    ctx->pc = 0x799EC4u;
    // 0x799ec4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799ec4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799ec8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799EC8u;
    {
        const bool branch_taken_0x799ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799ec8) {
            ctx->pc = 0x799ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799EC8u;
            // 0x799ecc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799ea8;
        }
    }
    ctx->pc = 0x799ED0u;
label_799ed0:
    // 0x799ed0: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799ED0u;
    SET_GPR_U32(ctx, 31, 0x799ED8u);
    ctx->pc = 0x799ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799ED0u;
    // 0x799ed4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799ED0u, 0x799ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ED8u;
label_799ed8:
    // 0x799ed8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799edc: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x799EDCu;
    {
        const bool branch_taken_0x799edc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x799EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EDCu;
        // 0x799ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799edc) {
            ctx->pc = 0x799EF4u;
            goto label_799ef4;
        }
    }
    ctx->pc = 0x799EE4u;
    // 0x799ee4: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x799EE4u;
    SET_GPR_U32(ctx, 31, 0x799EECu);
    ctx->pc = 0x799EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EE4u;
    // 0x799ee8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x799EE4u, 0x799EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EECu;
label_799eec:
    // 0x799eec: 0xc06f4fc  jal         func_1BD3F0
    ctx->pc = 0x799EECu;
    SET_GPR_U32(ctx, 31, 0x799EF4u);
    ctx->pc = 0x799EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EECu;
    // 0x799ef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD3F0u, 0x799EECu, 0x799EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EF4u;
label_799ef4:
    // 0x799ef4: 0x8222c400  lb          $v0, -0x3C00($s1)
    ctx->pc = 0x799ef4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294951936)));
    // 0x799ef8: 0x26484c58  addiu       $t0, $s2, 0x4C58
    ctx->pc = 0x799ef8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 19544));
    // 0x799efc: 0x2623c400  addiu       $v1, $s1, -0x3C00
    ctx->pc = 0x799efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294951936));
    // 0x799f00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f04: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799F04u;
    {
        const bool branch_taken_0x799f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F04u;
        // 0x799f08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f04) {
            ctx->pc = 0x799F40u;
            goto label_799f40;
        }
    }
    ctx->pc = 0x799F0Cu;
    // 0x799f0c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f10: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799f10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799f14: 0x0  nop
    ctx->pc = 0x799f14u;
    // NOP
label_799f18:
    // 0x799f18: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799f18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799f1c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799f20: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799f24: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799f28: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799f28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799f2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799F2Cu;
    {
        const bool branch_taken_0x799f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F2Cu;
        // 0x799f30: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f2c) {
            ctx->pc = 0x799F40u;
            goto label_799f40;
        }
    }
    ctx->pc = 0x799F34u;
    // 0x799f34: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799f34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799f38: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799F38u;
    {
        const bool branch_taken_0x799f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799f38) {
            ctx->pc = 0x799F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799F38u;
            // 0x799f3c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f18;
        }
    }
    ctx->pc = 0x799F40u;
label_799f40:
    // 0x799f40: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799F40u;
    SET_GPR_U32(ctx, 31, 0x799F48u);
    ctx->pc = 0x799F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F40u;
    // 0x799f44: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799F40u, 0x799F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F48u;
label_799f48:
    // 0x799f48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f4c: 0x52000050  beql        $s0, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x799F4Cu;
    {
        const bool branch_taken_0x799f4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x799f4c) {
            ctx->pc = 0x799F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799F4Cu;
            // 0x799f50: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A090u;
            goto label_79a090;
        }
    }
    ctx->pc = 0x799F54u;
    // 0x799f54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f58: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x799F58u;
    SET_GPR_U32(ctx, 31, 0x799F60u);
    ctx->pc = 0x799F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F58u;
    // 0x799f5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x799F58u, 0x799F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F60u;
label_799f60:
    // 0x799f60: 0xc06f4fc  jal         func_1BD3F0
    ctx->pc = 0x799F60u;
    SET_GPR_U32(ctx, 31, 0x799F68u);
    ctx->pc = 0x799F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F60u;
    // 0x799f64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD3F0u, 0x799F60u, 0x799F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F68u;
label_799f68:
    // 0x799f68: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x799F68u;
    {
        const bool branch_taken_0x799f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F68u;
        // 0x799f6c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f68) {
            ctx->pc = 0x79A090u;
            goto label_79a090;
        }
    }
    ctx->pc = 0x799F70u;
label_799f70:
    // 0x799f70: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799f74: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x799f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x799f78: 0x24a5c408  addiu       $a1, $a1, -0x3BF8
    ctx->pc = 0x799f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951944));
    // 0x799f7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f80: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x799F80u;
    SET_GPR_U32(ctx, 31, 0x799F88u);
    ctx->pc = 0x799F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F80u;
    // 0x799f84: 0x3c11007a  lui         $s1, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799F80u, 0x799F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F88u;
label_799f88:
    // 0x799f88: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799f8c: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x799f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x799f90: 0x8044c3f8  lb          $a0, -0x3C08($v0)
    ctx->pc = 0x799f90u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79C3F8u));
    // 0x799f94: 0x2446c3f8  addiu       $a2, $v0, -0x3C08
    ctx->pc = 0x799f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951928));
    // 0x799f98: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x799f98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x799f9c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x799f9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fa4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x799FA4u;
    {
        const bool branch_taken_0x799fa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FA4u;
        // 0x799fa8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fa4) {
            ctx->pc = 0x799FD8u;
            goto label_799fd8;
        }
    }
    ctx->pc = 0x799FACu;
    // 0x799fac: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799facu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799fb0:
    // 0x799fb0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799fb4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799fb8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799fbc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799fc0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799fc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799fc4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799FC4u;
    {
        const bool branch_taken_0x799fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FC4u;
        // 0x799fc8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fc4) {
            ctx->pc = 0x799FD8u;
            goto label_799fd8;
        }
    }
    ctx->pc = 0x799FCCu;
    // 0x799fcc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799fccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799fd0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799FD0u;
    {
        const bool branch_taken_0x799fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799fd0) {
            ctx->pc = 0x799FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799FD0u;
            // 0x799fd4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799fb0;
        }
    }
    ctx->pc = 0x799FD8u;
label_799fd8:
    // 0x799fd8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799FD8u;
    SET_GPR_U32(ctx, 31, 0x799FE0u);
    ctx->pc = 0x799FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FD8u;
    // 0x799fdc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799FD8u, 0x799FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FE0u;
label_799fe0:
    // 0x799fe0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fe4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x799FE4u;
    {
        const bool branch_taken_0x799fe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x799FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FE4u;
        // 0x799fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fe4) {
            ctx->pc = 0x79A00Cu;
            goto label_79a00c;
        }
    }
    ctx->pc = 0x799FECu;
    // 0x799fec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ff0: 0xc06f3ec  jal         func_1BCFB0
    ctx->pc = 0x799FF0u;
    SET_GPR_U32(ctx, 31, 0x799FF8u);
    ctx->pc = 0x799FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FF0u;
    // 0x799ff4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCFB0u, 0x799FF0u, 0x799FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FF8u;
label_799ff8:
    // 0x799ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ffc: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x799FFCu;
    SET_GPR_U32(ctx, 31, 0x79A004u);
    ctx->pc = 0x79A000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FFCu;
    // 0x79a000: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x799FFCu, 0x79A004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A004u;
label_79a004:
    // 0x79a004: 0xc06f4fc  jal         func_1BD3F0
    ctx->pc = 0x79A004u;
    SET_GPR_U32(ctx, 31, 0x79A00Cu);
    ctx->pc = 0x79A008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A004u;
    // 0x79a008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD3F0u, 0x79A004u, 0x79A00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A00Cu;
label_79a00c:
    // 0x79a00c: 0x8222c400  lb          $v0, -0x3C00($s1)
    ctx->pc = 0x79a00cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294951936)));
    // 0x79a010: 0x26484c58  addiu       $t0, $s2, 0x4C58
    ctx->pc = 0x79a010u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 19544));
    // 0x79a014: 0x2623c400  addiu       $v1, $s1, -0x3C00
    ctx->pc = 0x79a014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294951936));
    // 0x79a018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a01c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79A01Cu;
    {
        const bool branch_taken_0x79a01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A01Cu;
        // 0x79a020: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a01c) {
            ctx->pc = 0x79A058u;
            goto label_79a058;
        }
    }
    ctx->pc = 0x79A024u;
    // 0x79a024: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a028: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a028u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a02c: 0x0  nop
    ctx->pc = 0x79a02cu;
    // NOP
label_79a030:
    // 0x79a030: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a030u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a034: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a038: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a03c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a040: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a040u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a044: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A044u;
    {
        const bool branch_taken_0x79a044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A044u;
        // 0x79a048: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a044) {
            ctx->pc = 0x79A058u;
            goto label_79a058;
        }
    }
    ctx->pc = 0x79A04Cu;
    // 0x79a04c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a04cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a050: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A050u;
    {
        const bool branch_taken_0x79a050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a050) {
            ctx->pc = 0x79A054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A050u;
            // 0x79a054: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a030;
        }
    }
    ctx->pc = 0x79A058u;
label_79a058:
    // 0x79a058: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A058u;
    SET_GPR_U32(ctx, 31, 0x79A060u);
    ctx->pc = 0x79A05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A058u;
    // 0x79a05c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A058u, 0x79A060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A060u;
label_79a060:
    // 0x79a060: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a064: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79A064u;
    {
        const bool branch_taken_0x79a064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A064u;
        // 0x79a068: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a064) {
            ctx->pc = 0x79A08Cu;
            goto label_79a08c;
        }
    }
    ctx->pc = 0x79A06Cu;
    // 0x79a06c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a070: 0xc06f3ec  jal         func_1BCFB0
    ctx->pc = 0x79A070u;
    SET_GPR_U32(ctx, 31, 0x79A078u);
    ctx->pc = 0x79A074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A070u;
    // 0x79a074: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCFB0u, 0x79A070u, 0x79A078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A078u;
label_79a078:
    // 0x79a078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a07c: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A07Cu;
    SET_GPR_U32(ctx, 31, 0x79A084u);
    ctx->pc = 0x79A080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A07Cu;
    // 0x79a080: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A07Cu, 0x79A084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A084u;
label_79a084:
    // 0x79a084: 0xc06f4fc  jal         func_1BD3F0
    ctx->pc = 0x79A084u;
    SET_GPR_U32(ctx, 31, 0x79A08Cu);
    ctx->pc = 0x79A088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A084u;
    // 0x79a088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD3F0u, 0x79A084u, 0x79A08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A08Cu;
label_79a08c:
    // 0x79a08c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79a08cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_79a090:
    // 0x79a090: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79a090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a094: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79a094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a098: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79a098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a09c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x79a09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79a0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x79A0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0A0u;
        // 0x79a0a4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A0A8u;
}
} // namespace gh_r100
