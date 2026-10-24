#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r700_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r700
{
// Function: func_00799A90
// Address: 0x799a90 - 0x799ce8
void func_00799A90_0x799a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799A90_0x799a90");
#endif

    switch (ctx->pc) {
        case 0x799ad8u: goto label_799ad8;
        case 0x799af0u: goto label_799af0;
        case 0x799b04u: goto label_799b04;
        case 0x799b1cu: goto label_799b1c;
        case 0x799b30u: goto label_799b30;
        case 0x799b58u: goto label_799b58;
        case 0x799be0u: goto label_799be0;
        case 0x799be8u: goto label_799be8;
        case 0x799bf4u: goto label_799bf4;
        case 0x799c10u: goto label_799c10;
        case 0x799c5cu: goto label_799c5c;
        case 0x799c68u: goto label_799c68;
        case 0x799c7cu: goto label_799c7c;
        case 0x799c88u: goto label_799c88;
        case 0x799ca4u: goto label_799ca4;
        case 0x799cb4u: goto label_799cb4;
        default: break;
    }

    ctx->pc = 0x799a90u;

    // 0x799a90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x799a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x799a94: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799a98: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x799a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x799a9c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x799a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x799aa0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x799aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x799aa4: 0x24508658  addiu       $s0, $v0, -0x79A8
    ctx->pc = 0x799aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936152));
    // 0x799aa8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x799aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x799aac: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x799aacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ab0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x799ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x799ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ab8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x799ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x799abc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x799abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x799ac0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x799ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x799ac4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x799ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x799ac8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799acc: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x799accu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x799ad0: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799AD0u;
    SET_GPR_U32(ctx, 31, 0x799AD8u);
    ctx->pc = 0x799AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AD0u;
    // 0x799ad4: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799AD0u, 0x799AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AD8u;
label_799ad8:
    // 0x799ad8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799adc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x799ADCu;
    {
        const bool branch_taken_0x799adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ADCu;
        // 0x799ae0: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799adc) {
            ctx->pc = 0x799AF8u;
            goto label_799af8;
        }
    }
    ctx->pc = 0x799AE4u;
    // 0x799ae4: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x799ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x799ae8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799AE8u;
    SET_GPR_U32(ctx, 31, 0x799AF0u);
    ctx->pc = 0x799AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AE8u;
    // 0x799aec: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799AE8u, 0x799AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AF0u;
label_799af0:
    // 0x799af0: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x799AF0u;
    {
        const bool branch_taken_0x799af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AF0u;
        // 0x799af4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799af0) {
            ctx->pc = 0x799CB8u;
            goto label_799cb8;
        }
    }
    ctx->pc = 0x799AF8u;
label_799af8:
    // 0x799af8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799afc: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799AFCu;
    SET_GPR_U32(ctx, 31, 0x799B04u);
    ctx->pc = 0x799B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AFCu;
    // 0x799b00: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799AFCu, 0x799B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B04u;
label_799b04:
    // 0x799b04: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x799b04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b10: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x799b10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x799b14: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799B14u;
    SET_GPR_U32(ctx, 31, 0x799B1Cu);
    ctx->pc = 0x799B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B14u;
    // 0x799b18: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799B14u, 0x799B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B1Cu;
label_799b1c:
    // 0x799b1c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x799b1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b20: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x799b20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x799b24: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x799B24u;
    {
        const bool branch_taken_0x799b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B24u;
        // 0x799b28: 0x3c17003c  lui         $s7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b24) {
            ctx->pc = 0x799C7Cu;
            goto label_799c7c;
        }
    }
    ctx->pc = 0x799B2Cu;
    // 0x799b2c: 0x0  nop
    ctx->pc = 0x799b2cu;
    // NOP
label_799b30:
    // 0x799b30: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x799b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x799b34: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x799b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
    // 0x799b38: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799b3c: 0x14600056  bnez        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x799B3Cu;
    {
        const bool branch_taken_0x799b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B3Cu;
        // 0x799b40: 0x24457a84  addiu       $a1, $v0, 0x7A84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 31364));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b3c) {
            ctx->pc = 0x799C98u;
            goto label_799c98;
        }
    }
    ctx->pc = 0x799B44u;
    // 0x799b44: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x799b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x799b48: 0x4400054  bltz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x799B48u;
    {
        const bool branch_taken_0x799b48 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x799B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B48u;
        // 0x799b4c: 0x26c48658  addiu       $a0, $s6, -0x79A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b48) {
            ctx->pc = 0x799C9Cu;
            goto label_799c9c;
        }
    }
    ctx->pc = 0x799B50u;
    // 0x799b50: 0xc1e6c2c  jal         func_79B0B0
    ctx->pc = 0x799B50u;
    SET_GPR_U32(ctx, 31, 0x799B58u);
    ctx->pc = 0x79B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B0B0u, 0x799B50u, 0x799B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B58u;
label_799b58:
    // 0x799b58: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x799b58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x799b5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799b60: 0x3980a  movz        $s3, $zero, $v1
    ctx->pc = 0x799b60u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x799b64: 0x12620010  beq         $s3, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x799B64u;
    {
        const bool branch_taken_0x799b64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x799B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B64u;
        // 0x799b68: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b64) {
            ctx->pc = 0x799BA8u;
            goto label_799ba8;
        }
    }
    ctx->pc = 0x799B6Cu;
    // 0x799b6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x799B6Cu;
    {
        const bool branch_taken_0x799b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B6Cu;
        // 0x799b70: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b6c) {
            ctx->pc = 0x799B84u;
            goto label_799b84;
        }
    }
    ctx->pc = 0x799B74u;
    // 0x799b74: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x799B74u;
    {
        const bool branch_taken_0x799b74 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B74u;
        // 0x799b78: 0x8ee22f84  lw          $v0, 0x2F84($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b74) {
            ctx->pc = 0x799B94u;
            goto label_799b94;
        }
    }
    ctx->pc = 0x799B7Cu;
    // 0x799b7c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x799B7Cu;
    {
        const bool branch_taken_0x799b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B7Cu;
        // 0x799b80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b7c) {
            ctx->pc = 0x799C74u;
            goto label_799c74;
        }
    }
    ctx->pc = 0x799B84u;
label_799b84:
    // 0x799b84: 0x1262000e  beq         $s3, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799B84u;
    {
        const bool branch_taken_0x799b84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x799B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B84u;
        // 0x799b88: 0x8ee22f84  lw          $v0, 0x2F84($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b84) {
            ctx->pc = 0x799BC0u;
            goto label_799bc0;
        }
    }
    ctx->pc = 0x799B8Cu;
    // 0x799b8c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x799B8Cu;
    {
        const bool branch_taken_0x799b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B8Cu;
        // 0x799b90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b8c) {
            ctx->pc = 0x799C74u;
            goto label_799c74;
        }
    }
    ctx->pc = 0x799B94u;
label_799b94:
    // 0x799b94: 0x50600037  beql        $v1, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x799B94u;
    {
        const bool branch_taken_0x799b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x799b94) {
            ctx->pc = 0x799B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799B94u;
            // 0x799b98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799C74u;
            goto label_799c74;
        }
    }
    ctx->pc = 0x799B9Cu;
    // 0x799b9c: 0x241502ee  addiu       $s5, $zero, 0x2EE
    ctx->pc = 0x799b9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
    // 0x799ba0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x799BA0u;
    {
        const bool branch_taken_0x799ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BA0u;
        // 0x799ba4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ba0) {
            ctx->pc = 0x799C6Cu;
            goto label_799c6c;
        }
    }
    ctx->pc = 0x799BA8u;
label_799ba8:
    // 0x799ba8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x799ba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bac: 0x441002f  bgez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x799BACu;
    {
        const bool branch_taken_0x799bac = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x799BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BACu;
        // 0x799bb0: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bac) {
            ctx->pc = 0x799C6Cu;
            goto label_799c6c;
        }
    }
    ctx->pc = 0x799BB4u;
    // 0x799bb4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x799bb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bb8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x799BB8u;
    {
        const bool branch_taken_0x799bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BB8u;
        // 0x799bbc: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bb8) {
            ctx->pc = 0x799C6Cu;
            goto label_799c6c;
        }
    }
    ctx->pc = 0x799BC0u;
label_799bc0:
    // 0x799bc0: 0x3c14007a  lui         $s4, 0x7A
    ctx->pc = 0x799bc0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
    // 0x799bc4: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x799bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x799bc8: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x799bc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x799bcc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x799bd0: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x799bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799bd4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x799bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bd8: 0x2691c350  addiu       $s1, $s4, -0x3CB0
    ctx->pc = 0x799bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951760));
    // 0x799bdc: 0x0  nop
    ctx->pc = 0x799bdcu;
    // NOP
label_799be0:
    // 0x799be0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799BE0u;
    SET_GPR_U32(ctx, 31, 0x799BE8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799BE0u, 0x799BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BE8u;
label_799be8:
    // 0x799be8: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x799be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799bec: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x799BECu;
    SET_GPR_U32(ctx, 31, 0x799BF4u);
    ctx->pc = 0x799BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BECu;
    // 0x799bf0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x799BECu, 0x799BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BF4u;
label_799bf4:
    // 0x799bf4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x799bf4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x799bf8: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x799bf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799bfc: 0x0  nop
    ctx->pc = 0x799bfcu;
    // NOP
    // 0x799c00: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x799C00u;
    {
        const bool branch_taken_0x799c00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C00u;
        // 0x799c04: 0x26c48658  addiu       $a0, $s6, -0x79A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c00) {
            ctx->pc = 0x799C24u;
            goto label_799c24;
        }
    }
    ctx->pc = 0x799C08u;
    // 0x799c08: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799C08u;
    SET_GPR_U32(ctx, 31, 0x799C10u);
    ctx->pc = 0x799C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C08u;
    // 0x799c0c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799C08u, 0x799C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C10u;
label_799c10:
    // 0x799c10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799c14: 0x52030004  beql        $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799C14u;
    {
        const bool branch_taken_0x799c14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x799c14) {
            ctx->pc = 0x799C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799C14u;
            // 0x799c18: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799C28u;
            goto label_799c28;
        }
    }
    ctx->pc = 0x799C1Cu;
    // 0x799c1c: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x799c1cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x799c20: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x799c20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799c24:
    // 0x799c24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x799c24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_799c28:
    // 0x799c28: 0x2e020020  sltiu       $v0, $s0, 0x20
    ctx->pc = 0x799c28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x799c2c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x799C2Cu;
    {
        const bool branch_taken_0x799c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C2Cu;
        // 0x799c30: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c2c) {
            ctx->pc = 0x799BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799be0;
        }
    }
    ctx->pc = 0x799C34u;
    // 0x799c34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x799c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799c38: 0x1242000c  beq         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x799C38u;
    {
        const bool branch_taken_0x799c38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x799C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C38u;
        // 0x799c3c: 0x2683c350  addiu       $v1, $s4, -0x3CB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c38) {
            ctx->pc = 0x799C6Cu;
            goto label_799c6c;
        }
    }
    ctx->pc = 0x799C40u;
    // 0x799c40: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x799c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x799c44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x799c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x799c48: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x799c48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799c4c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x799c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799c50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c54: 0xc1e6bd6  jal         func_79AF58
    ctx->pc = 0x799C54u;
    SET_GPR_U32(ctx, 31, 0x799C5Cu);
    ctx->pc = 0x799C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C54u;
    // 0x799c58: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AF58u, 0x799C54u, 0x799C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C5Cu;
label_799c5c:
    // 0x799c5c: 0x26c48658  addiu       $a0, $s6, -0x79A8
    ctx->pc = 0x799c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936152));
    // 0x799c60: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799C60u;
    SET_GPR_U32(ctx, 31, 0x799C68u);
    ctx->pc = 0x799C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C60u;
    // 0x799c64: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799C60u, 0x799C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C68u;
label_799c68:
    // 0x799c68: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x799c68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_799c6c:
    // 0x799c6c: 0x8ee22f84  lw          $v0, 0x2F84($s7)
    ctx->pc = 0x799c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
    // 0x799c70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799c74:
    // 0x799c74: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799C74u;
    SET_GPR_U32(ctx, 31, 0x799C7Cu);
    ctx->pc = 0x799C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C74u;
    // 0x799c78: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799C74u, 0x799C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C7Cu;
label_799c7c:
    // 0x799c7c: 0x26c48658  addiu       $a0, $s6, -0x79A8
    ctx->pc = 0x799c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936152));
    // 0x799c80: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799C80u;
    SET_GPR_U32(ctx, 31, 0x799C88u);
    ctx->pc = 0x799C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C80u;
    // 0x799c84: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799C80u, 0x799C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C88u;
label_799c88:
    // 0x799c88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799c8c: 0x2c630014  sltiu       $v1, $v1, 0x14
    ctx->pc = 0x799c8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x799c90: 0x1460ffa7  bnez        $v1, . + 4 + (-0x59 << 2)
    ctx->pc = 0x799C90u;
    {
        const bool branch_taken_0x799c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C90u;
        // 0x799c94: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c90) {
            ctx->pc = 0x799B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b30;
        }
    }
    ctx->pc = 0x799C98u;
label_799c98:
    // 0x799c98: 0x26c48658  addiu       $a0, $s6, -0x79A8
    ctx->pc = 0x799c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936152));
label_799c9c:
    // 0x799c9c: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799C9Cu;
    SET_GPR_U32(ctx, 31, 0x799CA4u);
    ctx->pc = 0x799CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C9Cu;
    // 0x799ca0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799C9Cu, 0x799CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CA4u;
label_799ca4:
    // 0x799ca4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x799ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x799ca8: 0x8ee22f84  lw          $v0, 0x2F84($s7)
    ctx->pc = 0x799ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
    // 0x799cac: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799CACu;
    SET_GPR_U32(ctx, 31, 0x799CB4u);
    ctx->pc = 0x799CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CACu;
    // 0x799cb0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799CACu, 0x799CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CB4u;
label_799cb4:
    // 0x799cb4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x799cb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_799cb8:
    // 0x799cb8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x799cb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799cbc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x799cbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799cc0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x799cc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799cc4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x799cc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799cc8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x799cc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799ccc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x799cccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799cd0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x799cd0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799cd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799cd8: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x799cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x799cdc: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x799cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x799CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CE0u;
        // 0x799ce4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799CE8u;
}
} // namespace gh_r700
