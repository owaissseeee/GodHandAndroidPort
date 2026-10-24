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

// Function: func_001BF2F0
// Address: 0x1bf2f0 - 0x1bf428
void func_001BF2F0_0x1bf2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BF2F0_0x1bf2f0");
#endif

    ctx->pc = 0x1bf2f0u;

    // 0x1bf2f0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1bf2f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf2f4: 0x90c302f5  lbu         $v1, 0x2F5($a2)
    ctx->pc = 0x1bf2f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
    // 0x1bf2f8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF2F8u;
    {
        const bool branch_taken_0x1bf2f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2F8u;
        // 0x1bf2fc: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf2f8) {
            ctx->pc = 0x1BF314u;
            goto label_1bf314;
        }
    }
    ctx->pc = 0x1BF300u;
    // 0x1bf300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bf300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf304: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1BF304u;
    {
        const bool branch_taken_0x1bf304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF304u;
        // 0x1bf308: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf304) {
            ctx->pc = 0x1BF3F0u;
            goto label_1bf3f0;
        }
    }
    ctx->pc = 0x1BF30Cu;
    // 0x1bf30c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1BF30Cu;
    {
        const bool branch_taken_0x1bf30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf30c) {
            ctx->pc = 0x1BF41Cu;
            goto label_1bf41c;
        }
    }
    ctx->pc = 0x1BF314u;
label_1bf314:
    // 0x1bf314: 0x90c302b4  lbu         $v1, 0x2B4($a2)
    ctx->pc = 0x1bf314u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 692)));
    // 0x1bf318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bf318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf31c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1bf31cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1bf320: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF320u;
    {
        const bool branch_taken_0x1bf320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF320u;
        // 0x1bf324: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf320) {
            ctx->pc = 0x1BF334u;
            goto label_1bf334;
        }
    }
    ctx->pc = 0x1BF328u;
    // 0x1bf328: 0x8cc20278  lw          $v0, 0x278($a2)
    ctx->pc = 0x1bf328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 632)));
    // 0x1bf32c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF32Cu;
    {
        const bool branch_taken_0x1bf32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF32Cu;
        // 0x1bf330: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf32c) {
            ctx->pc = 0x1BF338u;
            goto label_1bf338;
        }
    }
    ctx->pc = 0x1BF334u;
label_1bf334:
    // 0x1bf334: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bf334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf338:
    // 0x1bf338: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1BF338u;
    {
        const bool branch_taken_0x1bf338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF338u;
        // 0x1bf33c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf338) {
            ctx->pc = 0x1BF41Cu;
            goto label_1bf41c;
        }
    }
    ctx->pc = 0x1BF340u;
    // 0x1bf340: 0x90c302b4  lbu         $v1, 0x2B4($a2)
    ctx->pc = 0x1bf340u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 692)));
    // 0x1bf344: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1bf344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1bf348: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF348u;
    {
        const bool branch_taken_0x1bf348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF348u;
        // 0x1bf34c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf348) {
            ctx->pc = 0x1BF35Cu;
            goto label_1bf35c;
        }
    }
    ctx->pc = 0x1BF350u;
    // 0x1bf350: 0x8cc20278  lw          $v0, 0x278($a2)
    ctx->pc = 0x1bf350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 632)));
    // 0x1bf354: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF354u;
    {
        const bool branch_taken_0x1bf354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF354u;
        // 0x1bf358: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf354) {
            ctx->pc = 0x1BF360u;
            goto label_1bf360;
        }
    }
    ctx->pc = 0x1BF35Cu;
label_1bf35c:
    // 0x1bf35c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bf35cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf360:
    // 0x1bf360: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x1bf360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf364: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf368: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x1bf368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
    // 0x1bf36c: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1bf36cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x1bf370: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bf370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf374: 0x0  nop
    ctx->pc = 0x1bf374u;
    // NOP
    // 0x1bf378: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bf378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bf37c: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x1bf37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x1bf380: 0x90c202b4  lbu         $v0, 0x2B4($a2)
    ctx->pc = 0x1bf380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 692)));
    // 0x1bf384: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1bf384u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bf388: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF388u;
    {
        const bool branch_taken_0x1bf388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF388u;
        // 0x1bf38c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf388) {
            ctx->pc = 0x1BF39Cu;
            goto label_1bf39c;
        }
    }
    ctx->pc = 0x1BF390u;
    // 0x1bf390: 0x8cc20278  lw          $v0, 0x278($a2)
    ctx->pc = 0x1bf390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 632)));
    // 0x1bf394: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF394u;
    {
        const bool branch_taken_0x1bf394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF394u;
        // 0x1bf398: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf394) {
            ctx->pc = 0x1BF3A0u;
            goto label_1bf3a0;
        }
    }
    ctx->pc = 0x1BF39Cu;
label_1bf39c:
    // 0x1bf39c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bf39cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf3a0:
    // 0x1bf3a0: 0xc4410100  lwc1        $f1, 0x100($v0)
    ctx->pc = 0x1bf3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bf3a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bf3a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf3a8: 0x0  nop
    ctx->pc = 0x1bf3a8u;
    // NOP
    // 0x1bf3ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1bf3acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bf3b0: 0x0  nop
    ctx->pc = 0x1bf3b0u;
    // NOP
    // 0x1bf3b4: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x1BF3B4u;
    {
        const bool branch_taken_0x1bf3b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BF3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3B4u;
        // 0x1bf3b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf3b4) {
            ctx->pc = 0x1BF41Cu;
            goto label_1bf41c;
        }
    }
    ctx->pc = 0x1BF3BCu;
    // 0x1bf3bc: 0x90c302b4  lbu         $v1, 0x2B4($a2)
    ctx->pc = 0x1bf3bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 692)));
    // 0x1bf3c0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1bf3c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1bf3c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF3C4u;
    {
        const bool branch_taken_0x1bf3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3C4u;
        // 0x1bf3c8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf3c4) {
            ctx->pc = 0x1BF3D8u;
            goto label_1bf3d8;
        }
    }
    ctx->pc = 0x1BF3CCu;
    // 0x1bf3cc: 0x8cc20278  lw          $v0, 0x278($a2)
    ctx->pc = 0x1bf3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 632)));
    // 0x1bf3d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF3D0u;
    {
        const bool branch_taken_0x1bf3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3D0u;
        // 0x1bf3d4: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf3d0) {
            ctx->pc = 0x1BF3DCu;
            goto label_1bf3dc;
        }
    }
    ctx->pc = 0x1BF3D8u;
label_1bf3d8:
    // 0x1bf3d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bf3d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf3dc:
    // 0x1bf3dc: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x1bf3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x1bf3e0: 0x90c202f5  lbu         $v0, 0x2F5($a2)
    ctx->pc = 0x1bf3e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
    // 0x1bf3e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bf3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bf3e8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1BF3E8u;
    {
        const bool branch_taken_0x1bf3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3E8u;
        // 0x1bf3ec: 0xa0c202f5  sb          $v0, 0x2F5($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf3e8) {
            ctx->pc = 0x1BF41Cu;
            goto label_1bf41c;
        }
    }
    ctx->pc = 0x1BF3F0u;
label_1bf3f0:
    // 0x1bf3f0: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x1bf3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x1bf3f4: 0x8c837a78  lw          $v1, 0x7A78($a0)
    ctx->pc = 0x1bf3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 31352)));
    // 0x1bf3f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1bf3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1bf3fc: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x1bf3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1bf400: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1bf400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1bf404: 0xac837a78  sw          $v1, 0x7A78($a0)
    ctx->pc = 0x1bf404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 31352), GPR_U32(ctx, 3));
    // 0x1bf408: 0xa0c002f4  sb          $zero, 0x2F4($a2)
    ctx->pc = 0x1bf408u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bf40c: 0x8cc20600  lw          $v0, 0x600($a2)
    ctx->pc = 0x1bf40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1536)));
    // 0x1bf410: 0xa0c002f5  sb          $zero, 0x2F5($a2)
    ctx->pc = 0x1bf410u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bf414: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1bf414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1bf418: 0xacc20600  sw          $v0, 0x600($a2)
    ctx->pc = 0x1bf418u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1536), GPR_U32(ctx, 2));
label_1bf41c:
    // 0x1bf41c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF41Cu;
        // 0x1bf420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF424u;
    // 0x1bf424: 0x0  nop
    ctx->pc = 0x1bf424u;
    // NOP
    ctx->pc = 0x1bf428u;
}
